#include "CommandObject.h"

using namespace Object;

void CommandObject::setReferenceCommand(String^ reference_commande) {
	this->reference_commande = reference_commande;
}
void CommandObject::setDateLivraison(String^ date_livraison) {
	this->date_livraison = date_livraison;
}
void CommandObject::setDateEmission(String^ date_emission) {
	this->date_emission = date_emission;
}
void CommandObject::setRemise(Decimal^ remise) {
	this->remise = remise;
}
void CommandObject::setTotalCommand(Decimal^ total_commande) {
	this->total_commande = total_commande;
}
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




String^ CommandObject::getReferenceCommand() {
	return this->reference_commande;
}
String^ CommandObject::getDateLivraison() {
	return this->date_livraison;
}
String^ CommandObject::getDateEmission() {
	return this->date_emission;
}
String^ CommandObject::getRemise() {
	return this->remise->ToString();
}
String^ CommandObject::getTotalCommand() {
	return this->total_commande->ToString();
}
String^ CommandObject::getRetrait() {
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
}