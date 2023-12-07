#include "CommandRepo.h"
using namespace Repository;

List<CommandObject^>^ CommandRepo::getCommands() {
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






void CommandRepo::deleteCommand(CommandObject^ u) {
    bdd->executeNonQuery("UPDATE [Commande] SET supprime = 1 WHERE [reference_commande] = '" + u->getReferenceCommand() + "'");// attention, supprime = true ( pas 1 ), peut etre source de probleme
}
void CommandRepo::insertCommand(CommandObject^ u) {
    //int reference_commande = 
    this->bdd->executeInsert("INSERT INTO [Commande](date_livraison, date_emission, remise, total_commande, retrait) VALUES ('" + u->getDateLivraison() + "', '" + u->getDateEmission() + "', '" + u->getRemise() + "', '" + u->getTotalCommand() + "', '" + u->getRetrait() + "')");
    //u->setReference_Commande(reference_commande);
    //Enregistrer ses adresses
    //AdresseRepo ar=  ...
        //boucler sur les adresses a
        //ar.insert(a)
}