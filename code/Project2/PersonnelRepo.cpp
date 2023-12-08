#include "PersonnelRepo.h"
#include "PersonnelObject.h"
#include <iostream>
using namespace Repository;

List<PersonnelObject^>^ PersonnelRepo::getPersonnels() {
<<<<<<< HEAD
    DataSet^ ds = bdd->executeQuery("SELECT [id_personnel],[nom],[prenom],[date_embauchage],[id_superieur],[supprime] FROM [Personnel]");
=======
    String^ query = "SELECT id_personnel, nom,  prenom, date_embauchage, id_superieur, [Personnel].supprime, [Personnel].id_adresse, numero_rue, rue, code_postale, [Adresse].supprime, ville";
    query += " FROM [Personnel] JOIN [Adresse] ON [Personnel].id_adresse = [Adresse].id_adresse";
    DataSet^ ds = bdd->executeQuery(query);
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286

    List<PersonnelObject^>^ list = gcnew List<PersonnelObject^>();

    for each (DataRow ^ row in ds->Tables[0]->Rows)
    {
<<<<<<< HEAD
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
=======
        if (!(bool)row["supprime"]) {
            PersonnelObject^ u = gcnew PersonnelObject();
            u->setIdPersonnel((int)row["id_personnel"]);
            u->setNom((String^)row["nom"]);
            u->setPrenom((String^)row["prenom"]);
            if (!row->IsNull("date_embauchage")) { u->setDateEmbauche((DateTime^)row["date_embauchage"]); }
            else { u->setDateEmbauche(nullptr); }
            if (!row->IsNull("id_superieur")) { u->setIdSuperieur((int)row["id_superieur"]); }
            else { u->setIdSuperieur(0); }
            //adresse
            AdressRepo^ ar = gcnew AdressRepo(bdd);
            AdressObject^ ao = gcnew AdressObject();
            ao->setIdAdresse((int)row["id_adresse"]);
            ao->setNumero((int)row["numero_rue"]);
            ao->setRue((String^)row["rue"]);
            ao->setCodePostale((String^)row["code_postale"]);
            if ((bool)row["supprime1"] == true) { ao->deleteAdresse(); }
            u->setAdresse(ao);

            list->Add(u);
        }
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
    }

    return list;
}

void PersonnelRepo::editPersonnel(PersonnelObject^ u) {
<<<<<<< HEAD
    bdd->executeNonQuery("UPDATE [Personnel] SET nom = '" + u->getNom() + "' WHERE [id_personnel] = " + u->getIdPersonnel());
=======
    String^ query = "UPDATE [Personnel] SET [nom] = '" + u->getNom() + "', [prenom]= '" + u->getPrenom() + "'";
    query += ", [date_embauchage] = '" + u->getDateEmbauche() + "', [id_superieur] = " + u->getIdSuperieur();
    query += ", id_adresse = " + u->getAdresseVar()->getIdAdresse() + " WHERE[id_personnel] = " + u->getIdPersonnel();
    bdd->executeNonQuery(query);
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
}

void PersonnelRepo::deletePersonnel(PersonnelObject^ u) {
    bdd->executeNonQuery("UPDATE [Personnel] SET nom = "" WHERE [id_personnel] = " + u->getIdPersonnel());
}

void PersonnelRepo::insertPersonnel(PersonnelObject^ u) {
<<<<<<< HEAD
    int idUser = this->bdd->executeInsert("INSERT INTO [Personnel](nom) VALUES ('" + u->getNom() + "')");
=======
    String^ query = "INSERT INTO [Personnel] (nom, prenom, date_embauchage, id_superieur, supprime, id_adresse)";
    query += " VALUES ('" + u->getNom() + "', '" + u->getPrenom() + "', '" + u->getDateEmbauche() + "', " + u->getIdSuperieur() + ", 0, "+u->getAdresseVar()->getIdAdresse() + ")";
    int idUser = this->bdd->executeInsert(query);
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
    u->setIdPersonnel(idUser);
}