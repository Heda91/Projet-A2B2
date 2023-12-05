#include "PersonnelRepo.h"
#include "PersonnelObject.h"
#include <iostream>
using namespace Repository;

List<PersonnelObject^>^ PersonnelRepo::getPersonnels() {
    DataSet^ ds = bdd->executeQuery("SELECT [id_personnel],[nom],[prenom],[date_embauche],[id_superieur],[supprime] FROM [Personnel]");

    List<PersonnelObject^>^ list = gcnew List<PersonnelObject^>();

    for each (DataRow ^ row in ds->Tables[0]->Rows)
    {
        PersonnelObject^ u = gcnew PersonnelObject();
        u->setIdPersonnel((int)row[0]);
        u->setNom((String^)row[1]);
        u->setPrenom((String^)row[2]);
        try { u->setDateEmbauche((DateTime^)row[3]); }
        catch (System::InvalidCastException^) { u->setDateEmbauche(nullptr); }
        try { u->setIdSuperieur((int)row[4]); }
        catch (System::InvalidCastException^) { u->setIdSuperieur(0); }
        if ((bool)row[5] == true) { u->deletePersonnel(); }
        list->Add(u);
    }

    return list;
}

void PersonnelRepo::editPersonnel(PersonnelObject^ u) {
    String^ query = "UPDATE [Personnel] SET [nom] = '" + u->getNom() + "', [prenom]= '" + u->getPrenom() + "'";
    query += ", [date_embauche] = '"+u->getDateEmbauche() + "', [id_superieur] = '"+u->getIdSuperieur() + "'";
    query += "WHERE [id_personnel] = " + u->getIdPersonnel();
    bdd->executeNonQuery(query);
}

void PersonnelRepo::deletePersonnel(PersonnelObject^ u) {
    bdd->executeNonQuery("UPDATE [Personnel] SET [supprime] = 1 WHERE [id_personnel] = " + u->getIdPersonnel());
}

void PersonnelRepo::insertPersonnel(PersonnelObject^ u) {
    String^ query = "INSRET INTO [Personnel] (nom, prenom, date_embauche, id_superieur, supprime)";
    query += " VALUES ('" + u->getNom() + "', '" + u->getPrenom() + "', '" + u->getDateEmbauche() + "', '" + u->getIdSuperieur() + "', 0)";
    int idUser = this->bdd->executeInsert(query);
    u->setIdPersonnel(idUser);
}