#include "PersonnelObject.h"
using namespace Object;

void PersonnelObject::setIdPersonnel(int id_personnel) {
    this->id_personnel = id_personnel;
}

void PersonnelObject::setIdSuperieur(int id_superieur) {
    this->id_superieur = id_superieur;
}

void PersonnelObject::setNom(String^ name) {
    this->nom = name;
}

void PersonnelObject::setPrenom(String^ prenom) {
    this->prenom = prenom;
}

void PersonnelObject::setDateEmbauche(DateTime^ date_embauche){
    this->date_embauche = date_embauche;
}

void PersonnelObject::setAdresse(AdressObject^ adresse) {
    this->adresse = adresse;
}

void PersonnelObject::deletePersonnel() {
    this->supprime = true;
}

String^ PersonnelObject::getIdPersonnel() {
    return this->id_personnel.ToString();
}

String^ PersonnelObject::getNom() {
    return this->nom;
}

String^ PersonnelObject::getPrenom() {
    return this->prenom;
}

String^ PersonnelObject::getDateEmbauche() {
    if (this->date_embauche == nullptr) { return "NULL"; }
    else { return this->date_embauche->ToString("MM/dd/yyy"); }
}
String^ PersonnelObject::getDateEmbaucheAff() {
    if (this->date_embauche == nullptr) { return "NULL"; }
    else { return this->date_embauche->ToString("dd/MM/yyy"); }
}


bool PersonnelObject::isDelete() { return this->supprime; }

String^ PersonnelObject::getIdSuperieur() {
    if (this->id_superieur == 0) { return "NULL"; }
    else { return this->id_superieur.ToString(); }
}

String^ PersonnelObject::getAdresse() {
    return this->adresse->ToString();
}

AdressObject^ PersonnelObject::getAdresseVar() {
    return this->adresse;
}

String^ PersonnelObject::ToString() {
    return "id client : " + this->id_personnel + " nom : " + this->nom;
}