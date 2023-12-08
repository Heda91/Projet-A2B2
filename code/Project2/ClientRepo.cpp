#include "ClientRepo.h"
#include "AdressObject.h"
using namespace Repository;

List<ClientObject^>^ ClientRepo::getClients(void) {
    String^ query = "SELECT [Client].numero_client, nom, prenom, date_naissance,[Client].supprime, type_adresse, [Posseder].id_adresse, numero_rue, rue, code_postale, ville, [Adresse].supprime";
    query += " FROM [Client] LEFT JOIN [POSSEDER] ON [Client].numero_client = [POSSEDER].numero_client LEFT JOIN [Adresse] ON [POSSEDER].id_adresse = [Adresse].id_adresse WHERE [Client].supprime = 0 AND [Adresse].supprime = 0";

    DataSet^ ds = bdd->executeQuery(query);

    List<ClientObject^>^ list = gcnew List<ClientObject^>();
    List<int>^ list_id = gcnew List<int>();
    for each (DataRow ^ row in ds->Tables[0]->Rows)
    {
        ClientObject^ u;
        if (list_id->Contains((int)row["numero_client"])) { u = list[list_id->IndexOf((int)row["numero_client"])]; }//savoir s'il est deja dans le dataGridView
        else {
            u = gcnew ClientObject();
            u->setNumeroClient((int)row["numero_client"]);
            if (!row->IsNull("nom")) { u->setNom((String^)row["nom"]); }
            else { u->setNom("NULL"); }
            if (!row->IsNull("prenom")) { u->setPrenom((String^)row["prenom"]); }
            else { u->setPrenom("NULL"); }
            if (!row->IsNull("date_naissance")) { u->setdateNaissance((DateTime^)row["date_naissance"]); }
            else { u->setdateNaissance(nullptr); }

            list_id->Add((int)row["numero_client"]);
            list->Add(u);
        }
        if (!row->IsNull("supprime1")) {
            AdressObject^ ao = gcnew AdressObject();
            if ((bool)row["type_adresse"] == true) { u->addAdresseLivraison(ao); }
            else { u->addAdresseEmission(ao); }
            ao->setIdAdresse((int)row["id_adresse"]);
            ao->setNumero((int)row["numero_rue"]);
            ao->setRue((String^)row["rue"]);
            ao->setCodePostale((String^)row["code_postale"]);
            ao->setVille((String^)row["ville"]);
        }
    }

    return list;
};

void ClientRepo::editClient(ClientObject^ u) {
    bdd->executeNonQuery("UPDATE [Client] SET nom = '" + u->getNom() + "' WHERE [numero_client] = " + u->getNumeroClient());
}
void ClientRepo::deleteClient(ClientObject^ u) {
    bdd->executeNonQuery("UPDATE [Client] SET nom = "" WHERE [numero_client] = " + u->getNumeroClient());
}
void ClientRepo::insertClient(ClientObject^ u) {
    int idUser = this->bdd->executeInsert("INSERT INTO [Client](nom) VALUES ('" + u->getNom() + "')");
    u->setNumeroClient(idUser);
}