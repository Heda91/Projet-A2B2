#include "ClientObject.h"
using namespace Object;

String^ ClientObject::getNumeroClient() { return Convert::ToString(this->numero_client); }
String^ ClientObject::getNom() { return this->nom; }
String^ ClientObject::getPrenom() { return this->prenom; }
String^ ClientObject::getDateNaissance() {
	if (this->date_naissance == nullptr) 
		return "NULL";
	else 
		return this->date_naissance->ToString("MM/dd/yyyy");
}
String^ ClientObject::getDateNaissanceAff() {
	if (this->date_naissance == nullptr) { return ""; }
	else { return this->date_naissance->ToString("dd/MM/yyyy"); }
}
List<AdressObject^>^ ClientObject::getAdresseLivraison() { return this->adresse_livraison; }
List<AdressObject^>^ ClientObject::getAdresseEmission() { return this->adresse_emission; }



