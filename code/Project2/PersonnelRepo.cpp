#include "PersonnelRepo.h"
#include "AdressRepo.h"
#include <iostream>
using namespace Repository;

List<PersonnelObject^>^ PersonnelRepo::getPersonnels() {
    String^ query = "SELECT id_personnel, nom,  prenom, date_embauchage, id_superieur, [Personnel].supprime, [Personnel].id_adresse, numero_rue, rue, code_postale, [Adresse].supprime, ville";
    query += " FROM [Personnel] JOIN [Adresse] ON [Personnel].id_adresse = [Adresse].id_adresse";
    DataSet^ ds = bdd->executeQuery(query);

    List<PersonnelObject^>^ list = gcnew List<PersonnelObject^>();

    for each (DataRow ^ row in ds->Tables[0]->Rows)
    {
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
    }

    return list;
}

void PersonnelRepo::editPersonnel(PersonnelObject^ u) {
    String^ query = "UPDATE [Personnel] SET [nom] = '" + u->getNom() + "', [prenom]= '" + u->getPrenom() + "'";
    query += ", [date_embauchage] = '" + u->getDateEmbauche() + "', [id_superieur] = " + u->getIdSuperieur();
    query += ", id_adresse = " + u->getAdresseVar()->getIdAdresse() + " WHERE[id_personnel] = " + u->getIdPersonnel();
    bdd->executeNonQuery(query);
}

void PersonnelRepo::deletePersonnel(PersonnelObject^ u) {
    AdressRepo^ ar = gcnew AdressRepo(bdd);
    ar->deleteAdress(u->getAdresseVar());
    bdd->executeNonQuery("UPDATE [Personnel] SET [supprime] = 1 WHERE [id_personnel] = " + u->getIdPersonnel());
}

void PersonnelRepo::insertPersonnel(PersonnelObject^ u) {
    String^ query = "INSERT INTO [Personnel] (nom, prenom, date_embauchage, id_superieur, supprime, id_adresse)";
    query += " VALUES ('" + u->getNom() + "', '" + u->getPrenom() + "', '" + u->getDateEmbauche() + "', " + u->getIdSuperieur() + ", 0, "+u->getAdresseVar()->getIdAdresse() + ")";
    int idUser = this->bdd->executeInsert(query);
    u->setIdPersonnel(idUser);
}