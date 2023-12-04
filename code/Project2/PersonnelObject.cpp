#include "PersonnelObject.h"
using namespace Object;
void PersonnelObject::setId_personnel(int id_personnel) {
	this->id_personnel = id_personnel;
}

void PersonnelObject::setId_superieur(int id_superieur) {
	this->id_superieur = id_superieur;
}

void PersonnelObject::setNom(String^ name) {
	this->nom = name;
}

void PersonnelObject::setPrenom(String^ prenom) {
	this->prenom = prenom;
}

void PersonnelObject::setSupprime() {
	this->supprime = true;
}

int PersonnelObject::getId_personnel() {
	return this->id_personnel;
}

String^ PersonnelObject::getNom() {
	return this->nom;
}

String^ PersonnelObject::getPrenom() {
	return this->prenom;
}

String^ PersonnelObject::getDate_embauche() {
	return this->date_embauche;
}

bool PersonnelObject::getSupprime() {
	return this->supprime;
}

int PersonnelObject::getId_superieur() {
	return this->id_superieur;
}


String^ PersonnelObject::ToString() {
	return "numero_client : " + this->id_personnel + " name : " + this->nom;
}
