#include "ClientRepo.h"
using namespace Repository;

List<ClientObject^>^ ClientRepo::getClients(void) {
    DataSet^ ds = bdd->executeQuery("SELECT * FROM [Client]");

    List<ClientObject^>^ list = gcnew List<ClientObject^>();

    for each (DataRow ^ row in ds->Tables[0]->Rows)
    {
        ClientObject^ u = gcnew ClientObject();
        u->setNumero_client((int)row[0]);
        u->setNom((String^)row[1]);
        try { u->setFirstName((String^)row[2]); }
        catch (System::InvalidCastException^) { u->setFirstName(""); };
        list->Add(u);
    }

    return list;
};

void ClientRepo::editClient(ClientObject^ u) {
    bdd->executeNonQuery("UPDATE [Client] SET nom = '" + u->getNom() + "' WHERE [numero_client] = " + u->getNumero_client());
}
void ClientRepo::deleteClient(ClientObject^ u) {
    bdd->executeNonQuery("UPDATE [Client] SET nom = "" WHERE [numero_client] = " + u->getNumero_client());
}
void ClientRepo::insertClient(ClientObject^ u) {
    int idUser = this->bdd->executeInsert("INSERT INTO [Client](nom) VALUES ('" + u->getNom() + "')");
    u->setNumero_client(idUser);
    //Enregistrer ses adresses
    //AdresseRepo ar=  ...
        //boucler sur les adresses a
        //ar.insert(a)
}