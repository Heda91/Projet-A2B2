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
<<<<<<< HEAD
        ClientObject^ u = gcnew ClientObject();
        u->setNumero_client((int)row[0]);
        u->setNom((String^)row[1]);
        try { u->setFirstName((String^)row[2]); }
        catch (System::InvalidCastException^) { u->setFirstName(""); };
        list->Add(u);
    }
=======
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
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286

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
    String^ query = "UPDATE [Client] SET nom = '" + u->getNom() + "', prenom = '" + u->getPrenom() + "'";
    query += ", date_naissance = '" + u->getDateNaissance() + "' WHERE numero_client = " + u->getNumeroClient();
    bdd->executeNonQuery(query);
}
void ClientRepo::deleteClient(ClientObject^ u) {
    bdd->executeNonQuery("UPDATE [Client] SET supprime = 1 WHERE [numero_client] = " + u->getNumeroClient());
}
void ClientRepo::insertClient(ClientObject^ u) {
    String^ query = "INSERT INTO [Client] (nom, prenom, date_naissance, supprime)";
    query += " VALUES ('" + u->getNom() + "', '" + u->getPrenom() + "', '" + u->getDateNaissance() + "', 0)";
    int idUser = this->bdd->executeInsert(query);
    u->setNumeroClient(idUser);
}
void ClientRepo::linkClientAdresse(int client, int adresse, int type) {
    String^ query = "INSERT INTO[POSSEDER](numero_client, id_adresse, type_adresse)";
    query += " VALUES (" + client + ", " + adresse + ", " + type + ")";
    bdd->executeQuery(query);
}