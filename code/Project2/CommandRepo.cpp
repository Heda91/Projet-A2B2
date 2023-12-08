#include "CommandRepo.h"
using namespace Repository;

List<CommandObject^>^ CommandRepo::getCommands() {
    String^ query = "SELECT [Commande].reference_commande, date_livraison, date_emission, remise, total_commande, retrait, id_adresse_livraison, id_adresse_facturation";
    query += ", [Client].numero_client, nom, prenom, date_naissance, [Client].supprime, type_adresse";
    query += ", [Adresse].id_adresse, numero_rue, rue, code_postale, ville, [Adresse].supprime";
    query += ", [CONTENIR].quantite, [Article].id_article, designation, prixHT, TVA, quantite_stock, seuil_reaprovisionnement, prix_achat, [Article].supprime";
    query += ", id_reglement, moyen_paiement, date_paiement, solde_reglement";
    query += " FROM [Commande]";
    query += " JOIN [Client] ON [Commande].numero_client = [Client].numero_client";
    query += " LEFT JOIN [POSSEDER] ON[Client].numero_client = [POSSEDER].numero_client";
    query += " LEFT JOIN [Adresse] ON [POSSEDER].id_adresse = [Adresse].id_adresse";
    query += " LEFT JOIN [CONTENIR] ON [Commande].reference_commande = [CONTENIR].reference_commande";
    query += " LEFT JOIN [Article] ON [CONTENIR].id_article = [Article].id_article";
    query += " LEFT JOIN [Reglement] ON [Commande].reference_commande = [Reglement].reference_commande";
    query += " WHERE [Commande].supprime = 0";
    query += " ORDER BY [Commande].reference_commande";
    DataSet^ ds = bdd->executeQuery(query);

    List<CommandObject^>^ list = gcnew List<CommandObject^>();
    List<String^>^ list_ref_commande = gcnew List<String^>();
    List<int>^ list_id_adresse = gcnew List<int>();
    List<int>^ list_id_article = gcnew List<int>();
    List<int>^ list_id_reglement = gcnew List<int>();

    for each (DataRow ^ row in ds->Tables[0]->Rows)//manque Article
    {
        CommandObject^ command_o = gcnew CommandObject();
        if (list_ref_commande->Contains((String^)row["reference_commande"])) { command_o = list[list_ref_commande->IndexOf((String^)row["reference_commande"])]; }
        else {//creation commande + client
            list_id_adresse->Clear();//nouvelle commande -> nouvelle liste
            list_id_adresse->Clear();

            command_o->setReferenceCommand((String^)row["reference_commande"]);
            command_o->setDateLivraison((DateTime^)row["date_livraison"]);
            command_o->setDateEmission((DateTime^)row["date_emission"]);
            command_o->setRemise((Decimal)row["remise"]);
            command_o->setTotalCommand((Decimal)row["total_commande"]);
            command_o->setRetrait((String^)row["retrait"]);
            ClientObject^ client_o = gcnew ClientObject();
            client_o->setNumeroClient((int)row["numero_client"]);
            client_o->setNom((String^)row["nom"]);
            client_o->setPrenom((String^)row["prenom"]);
            client_o->setdateNaissance((DateTime^)row["date_naissance"]);
            if ((bool)row["supprime"]) { client_o->deleteClient(); }
            command_o->setClient(client_o);
            list_ref_commande->Add((String^)row["reference_commande"]);
            list->Add(command_o);
        }
        if (!row->IsNull("supprime1")) {//creation adresse pour client
            AdressObject^ ao = gcnew AdressObject();
            if (!list_id_adresse->Contains((int)row["id_adresse"])) { //si adresse deja rentrée
                list_id_adresse->Add((int)row["id_adresse"]);
                if ((bool)row["type_adresse"] == true) { //adresse livraison
                    command_o->getClient()->addAdresseLivraison(ao);
                    if ((int)row["id_adresse_livraison"] == (int)row["id_adresse"]) { command_o->setAdresseLivraison(ao); }
                }
                else { //adresse facturation
                    command_o->getClient()->addAdresseEmission(ao);
                    if ((int)row["id_adresse_facturation"] == (int)row["id_adresse"]) { command_o->setAdresseFacturation(ao); }
                }
                ao->setIdAdresse((int)row["id_adresse"]);
                ao->setNumero((int)row["numero_rue"]);
                ao->setRue((String^)row["rue"]);
                ao->setCodePostale((String^)row["code_postale"]);
                ao->setVille((String^)row["ville"]);
                if ((bool)row["supprime1"]) { ao->deleteAdresse(); }
            }
        }
        if (!row->IsNull("supprime2")) {//pro
            ArticleObject^ article_o = gcnew ArticleObject();
            if (!list_id_article->Contains((int)row["id_article"])) {
                list_id_article->Add((int)row["id_article"]);
                command_o->addArticle((int)row["quantite"], article_o);
                article_o->setIdArticle((int)row["id_article"]);
                article_o->setDesignation((String^)row["designation"]);
                article_o->setPrixHT(Convert::ToDecimal(row["prixHT"]));
                article_o->setTVA((Decimal^)row["TVA"]);
                article_o->setQuantiteStock((int)row["quantite_stock"]);
                article_o->setSeuilReapprovisionnement((int)row["seuil_reaprovisionnement"]);
                article_o->setPrixAchat((Decimal^)row["prix_achat"]);
                if ((bool)row["supprime2"]) { article_o->deleteArticle(); }
            }
        }
        if (!row->IsNull("id_reglement")) {//probleme ne prend que le 1er
            ReglementObject^ ro = gcnew ReglementObject();
            if (!list_id_reglement->Contains((int)row["id_reglement"])) {
                list_id_reglement->Add((int)row["id_reglement"]);
                command_o->addReglement(ro);
                ro->setIdReglement((int)row["id_reglement"]);
                ro->setMoyenPaiement((String^)row["moyen_paiement"]);
                ro->setDatePaiement((DateTime^)row["date_paiement"]);
                ro->setSoldePaiement((Decimal^)row["solde_reglement"]);
            }
        }
    }
    return list;
};

void CommandRepo::editCommand(CommandObject^ co) {
    String^ query = "UPDATE [Commande] SET date_livraison = '" + co->getDateLivraison() + "', date_emission = '" + co->getDateEmission() + "', remise = '" + co->getRemise() + "'";
    query += ", total_commande = '" + co->getTotalCommand() + "', retrait = '" + co->getRetrait() + "', id_adresse_livraison = " + co->getAdresseLivraison()->getIdAdresse();
    query += ", id_adresse_facturation = " + co->getAdresseFacturation()->getIdAdresse();
    query += " WHERE reference_commande = " + co->getReferenceCommand();
    //edit client ?
    bdd->executeQuery(query);
}


void CommandRepo::deleteCommand(CommandObject^ u) {
    bdd->executeNonQuery("UPDATE [Commande] SET supprime = 1 WHERE [reference_commande] = '" + u->getReferenceCommand() + "'");// attention, supprime = true ( pas 1 ), peut etre source de probleme
}
void CommandRepo::insertCommand(CommandObject^ u) {
    //int reference_commande = 
    this->bdd->executeInsert("INSERT INTO [Commande](date_livraison, date_emission, remise, total_commande, retrait) VALUES ('" + u->getDateLivraison() + "', '" + u->getDateEmission() + "', '" + u->getRemise() + "', '" + u->getTotalCommand() + "', '" + u->getRetrait() + "')");
}