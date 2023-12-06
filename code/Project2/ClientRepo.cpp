#include "ClientRepo.h"
#include "AdressObject.h"
using namespace Repository;

List<ClientObject^>^ ClientRepo::getClients(void) {
    String^ query = "SELECT [Client].numero_client, nom, prenom, date_naissance, type_adresse, [Posseder].id_adresse, numero_rue, rue, code_postale, ville, supprime";
    query += " FROM [Client] JOIN [POSSEDER] ON [Client].numero_client = [POSSEDER].numero_client JOIN [Adresse] ON [POSSEDER].id_adresse = [Adresse].id_adresse";
    DataSet^ ds = bdd->executeQuery(query);

    List<ClientObject^>^ list = gcnew List<ClientObject^>();
    List<int>^ list_id = gcnew List<int>();
    for each (DataRow ^ row in ds->Tables[0]->Rows)
    {
        if (list_id->Contains((int)row["numero_client"])) {
            ClientObject^ u = list[list_id->IndexOf((int)row["numero_client"])];
            AdressObject^ ao = gcnew AdressObject();
            if ((bool)row["type_adresse"] == true) { u->addAdresseLivraison(ao); }
            else { u->addAdresseEmission(ao); }
            ao->setIdAdresse((int)row["id_adresse"]);
            ao->setNumero((int)row["numero_rue"]);
            ao->setRue((String^)row["rue"]);
            ao->setCodePostale((String^)row["code_postale"]);
            ao->setVille((String^)row["ville"]);
            if ((bool)row["supprime"] == true) { ao->deleteAdresse(); }
        }
        else {
            list_id->Add((int)row["numero_client"]);
            ClientObject^ u = gcnew ClientObject();
            u->setNumeroClient((int)row["numero_client"]);
            try { u->setNom((String^)row["nom"]); }
            catch (System::InvalidCastException^) { u->setNom("NULL"); }
            try { u->setPrenom((String^)row["prenom"]); }
            catch (System::InvalidCastException^) { u->setPrenom("NULL"); }
            try { u->setdateNaissance((DateTime^)row["date_naissance"]); }
            catch (System::InvalidCastException^) { u->setdateNaissance(nullptr); }
            AdressObject^ ao = gcnew AdressObject();
            if ((bool)row["type_adresse"] == true) { u->addAdresseLivraison(ao); }
            else { u->addAdresseEmission(ao); }
            ao->setIdAdresse((int)row["id_adresse"]);
            ao->setNumero((int)row["numero_rue"]);
            ao->setRue((String^)row["rue"]);
            ao->setCodePostale((String^)row["code_postale"]);
            ao->setVille((String^)row["ville"]);
            if ((bool)row["supprime"] == true) { ao->deleteAdresse(); }

            list->Add(u);
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