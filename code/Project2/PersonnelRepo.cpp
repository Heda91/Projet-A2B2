#include "PersonnelRepo.h"
#include "AdressRepo.h"
#include <iostream>
using namespace Repository;

List<PersonnelObject^>^ PersonnelRepo::getPersonnels() {
    DataSet^ ds = bdd->executeQuery("SELECT [id_personnel],[nom],[prenom],[date_embauche],[id_superieur],[supprime],[id_adresse] FROM [Personnel]");

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
        AdressRepo^ ar = gcnew AdressRepo(bdd);
        u->setAdresse(ar->selectAdress((int)row[6]));
        list->Add(u);
    }

    return list;
}

void PersonnelRepo::editPersonnel(PersonnelObject^ u) {
    String^ query = "UPDATE [Personnel] SET [nom] = '" + u->getNom() + "', [prenom]= '" + u->getPrenom() + "'";
    query += ", [date_embauche] = '" + u->getDateEmbauche() + "', [id_superieur] = " + u->getIdSuperieur();
    query += ", id_adresse = " + u->getAdresseVar()->getIdAdresse() + " WHERE[id_personnel] = " + u->getIdPersonnel();
    bdd->executeNonQuery(query);
}

void PersonnelRepo::deletePersonnel(PersonnelObject^ u) {
    AdressRepo^ ar = gcnew AdressRepo(bdd);
    ar->deleteAdress(u->getAdresseVar());
    bdd->executeNonQuery("UPDATE [Personnel] SET [supprime] = 1 WHERE [id_personnel] = " + u->getIdPersonnel());
}

void PersonnelRepo::insertPersonnel(PersonnelObject^ u) {
    String^ query = "INSERT INTO [Personnel] (nom, prenom, date_embauche, id_superieur, supprime, id_adresse)";
    query += " VALUES ('" + u->getNom() + "', '" + u->getPrenom() + "', '" + u->getDateEmbauche() + "', " + u->getIdSuperieur() + ", 0, "+u->getAdresseVar()->getIdAdresse() + ")";
    int idUser = this->bdd->executeInsert(query);
    u->setIdPersonnel(idUser);
}