#include "CommandObject.h"

using namespace Object;

void CommandObject::setReferenceCommand(String^ reference_commande) {
	this->reference_commande = reference_commande;
}
<<<<<<< HEAD
void CommandObject::setDateLivraison(String^ date_livraison) {
	this->date_livraison = date_livraison;
}
void CommandObject::setDateEmission(String^ date_emission) {
=======
void CommandObject::setDateLivraison(DateTime^ date_livraison) {
	this->date_livraison = date_livraison;
}
void CommandObject::setDateEmission(DateTime^ date_emission) {
>>>>>>> temp-branch
	this->date_emission = date_emission;
}
void CommandObject::setRemise(Decimal^ remise) {
	this->remise = remise;
}
void CommandObject::setTotalCommand(Decimal^ total_commande) {
	this->total_commande = total_commande;
}
<<<<<<< HEAD
void CommandObject::setRetrait(int retrait) {
	this->retrait = retrait;
}
void CommandObject::deleteCommande() {
	this->supprime = true ; // true : potentielle erreur
}
void CommandObject::setNumeroClient(int numero_client) {
	this->numero_client = numero_client;
}
void CommandObject::setIdAdresseLivraison(int id_adresse_livraison) {
	this->id_adresse_livraison = id_adresse_livraison;
}
void CommandObject::setIdAdresseFacturation(int id_adresse_facturation) {
	this->id_adresse_facturation = id_adresse_facturation;
}



=======
void CommandObject::setRetrait(String^ retrait) {
	this->retrait = retrait;
}
void CommandObject::setClient(ClientObject^ co) {
	this->client = co;
}
void CommandObject::setAdresseLivraison(AdressObject^ ao) {
	this->adresse_livraison = ao;
}
void CommandObject::setAdresseFacturation(AdressObject^ ao) {
	this->adresse_facturation = ao;
}

void CommandObject::deleteCommande() {
	this->supprime = true; // true : potentielle erreur
}
bool CommandObject::isDeleted() {
	return this->supprime;
}
>>>>>>> temp-branch

String^ CommandObject::getReferenceCommand() {
	return this->reference_commande;
}
String^ CommandObject::getDateLivraison() {
<<<<<<< HEAD
	return this->date_livraison;
}
String^ CommandObject::getDateEmission() {
	return this->date_emission;
=======
	return this->date_livraison->ToString("MM/dd/yyyy");
}
String^ CommandObject::getDateLivraisonAff() {
	return this->date_livraison->ToString("dd/MM/yyyy");
}
String^ CommandObject::getDateEmission() {
	return this->date_emission->ToString("MM/dd/yyyy");
}
String^ CommandObject::getDateEmissionAff() {
	return this->date_emission->ToString("dd/MM/yyyy");
>>>>>>> temp-branch
}
String^ CommandObject::getRemise() {
	return this->remise->ToString();
}
String^ CommandObject::getTotalCommand() {
	return this->total_commande->ToString();
}
String^ CommandObject::getRetrait() {
<<<<<<< HEAD
	return this->retrait.ToString();
}
bool CommandObject::isDeleted() {
	return this->supprime;
}
int CommandObject::getIdAdresseLivraison() {
	return this->id_adresse_livraison;
}
int CommandObject::getNumeroClient() {
	return this->numero_client;
}
int CommandObject::getIdAdresseFacturation() {
	return this->id_adresse_facturation;
=======
	return this->retrait;
}
ClientObject^ CommandObject::getClient() {
	return this->client;
>>>>>>> temp-branch
}