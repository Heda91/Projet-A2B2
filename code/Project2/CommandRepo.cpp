#include "CommandRepo.h"
using namespace Repository;

List<CommandObject^>^ CommandRepo::getCommands() {
<<<<<<< HEAD
    DataSet^ ds = bdd->executeQuery("SELECT (reference_commande), (date_livraison), (date_emission), (remise), (total_commande), (retrait), (supprime), (id_adresse_livraison), (numero_client), (id_adresse_facturation) FROM [Commande]");

    List<CommandObject^>^ list = gcnew List<CommandObject^>();

    for each (DataRow ^ row in ds->Tables[0]->Rows)
    {
        CommandObject^ u = gcnew CommandObject();
        u->setReferenceCommand((String^)row[0]);
        u->setDateLivraison(Convert::ToString(row[1]));
        u->setDateEmission(Convert::ToString(row[2]));
        u->setRemise(Convert::ToDecimal(row[3]));
        u->setTotalCommand(Convert::ToDecimal(row[4]));
        u->setRetrait((int)row[5]);
		if ((bool)row[6] == true) { u->deleteCommande(); }
		u->setIdAdresseLivraison((int)row[7]);
		u->setNumeroClient((int)row[8]);
		u->setIdAdresseLivraison((int)row[9]);

        
        list->Add(u);
    }

    return list;
};


void CommandRepo::editCommandDateLivraison(CommandObject^ u) {
    bdd->executeNonQuery("UPDATE [Commande] SET date_livraison = '" + u->getDateLivraison() + "' WHERE [reference_commande] = '" + u->getReferenceCommand());
}

void CommandRepo::editCommandDateEmission(CommandObject^ u) {
    bdd->executeNonQuery("UPDATE [Commande] SET date_emission = '" + u->getDateEmission() + "' WHERE [reference_commande] = '" + u->getReferenceCommand());
}


void CommandRepo::editCommandRemise(CommandObject^ u) {
    bdd->executeNonQuery("UPDATE [Commande] SET remise = '" + u->getRemise() + "' WHERE [reference_commande] = '" + u->getReferenceCommand());
}

void CommandRepo::editCommandTotalCommande(CommandObject^ u) {
    bdd->executeNonQuery("UPDATE [Commande] SET total_commande = '" + u->getTotalCommand() + "' WHERE [reference_commande] = '" + u->getReferenceCommand());
}

void CommandRepo::editCommandRetrait(CommandObject^ u) {
    bdd->executeNonQuery("UPDATE [Commande] SET retrait = '" + u->getRetrait() + "' WHERE [reference_commande] = '" + u->getReferenceCommand());
}





=======
    String^ query = "SELECT reference_commande, date_livraison, date_emission, remise, total_commande, retrait, id_adresse_livraison, id_adresse_facturation";
    query += ", [Client].numero_client, nom, prenom, date_naissance, [Client].supprime, type_adresse";
    query += ", [Adresse].id_adresse, numero_rue, rue, code_postale, ville, [Adresse].supprime FROM [Commande]";
    query += "JOIN [Client] ON [Commande].numero_client = [Client].numero_client LEFT JOIN[POSSEDER] ON[Client].numero_client = [POSSEDER].numero_client";
    query += "LEFT JOIN [Adresse] ON [POSSEDER].id_adresse = [Adresse].id_adresse WHERE [Commande].supprime = 0";
    DataSet^ ds = bdd->executeQuery(query);

    List<CommandObject^>^ list = gcnew List<CommandObject^>();
    List<int>^ list_id = gcnew List<int>();

    for each (DataRow ^ row in ds->Tables[0]->Rows)//manque Article
    {
        CommandObject^ command_o = gcnew CommandObject();
        if (list_id->Contains((int)row["reference_commande"])) { command_o = list[list_id->IndexOf((int)row["reference_commande"])]; }
        else {
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
            list->Add(command_o);
        }
        if (!row->IsNull("supprime1")) {
            AdressObject^ ao = gcnew AdressObject();
            if ((bool)row["type_adresse"]) { 
                command_o->getClient()->addAdresseLivraison(ao);
                if ((int)row["id_adresse_livraison"] == (int)row["id_adresse"]) { command_o->setAdresseLivraison(ao); }
            }
            else { 
                command_o->getClient()->addAdresseEmission(ao);
                if ((int)row["id_adresse_facturation"] == (int)row["id_adresse"]) { command_o->setAdresseFacturation(ao); }
            }
            ao->setIdAdresse((int)row["id_adresse"]);
            ao->setNumero((int)row["numero_rue"]);
            ao->setRue((String^)row["rue"]);
            ao->setCodePostale((String^)row["code_postale"]);
            ao->setVille((String^)row["ville"]);
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

>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286

void CommandRepo::deleteCommand(CommandObject^ u) {
    bdd->executeNonQuery("UPDATE [Commande] SET supprime = 1 WHERE [reference_commande] = '" + u->getReferenceCommand() + "'");// attention, supprime = true ( pas 1 ), peut etre source de probleme
}
void CommandRepo::insertCommand(CommandObject^ u) {
    //int reference_commande = 
    this->bdd->executeInsert("INSERT INTO [Commande](date_livraison, date_emission, remise, total_commande, retrait) VALUES ('" + u->getDateLivraison() + "', '" + u->getDateEmission() + "', '" + u->getRemise() + "', '" + u->getTotalCommand() + "', '" + u->getRetrait() + "')");
<<<<<<< HEAD
    //u->setReference_Commande(reference_commande);
    //Enregistrer ses adresses
    //AdresseRepo ar=  ...
        //boucler sur les adresses a
        //ar.insert(a)
=======
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
}