#include "CommandObject.h"

using namespace Object;

Decimal Cart::getTotalTTC() {
	Decimal TVA = 1+ (Convert::ToDecimal(this->article->getTVA())/100);
	return this->quantite * Convert::ToDecimal(this->article->getPrixHT()) * TVA;
}

void CommandObject::setReferenceCommand(String^ reference_commande) {
	this->reference_commande = reference_commande;
}
void CommandObject::setDateLivraison(DateTime^ date_livraison) {
	this->date_livraison = date_livraison;
}
void CommandObject::setDateEmission(DateTime^ date_emission) {
	this->date_emission = date_emission;
}
void CommandObject::setRemise(Decimal^ remise) {
	this->remise = remise;
}
void CommandObject::setTotalCommand(Decimal^ total_commande) {
	this->total_commande = total_commande;
}
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
void CommandObject::addArticle(int qtd, ArticleObject^ article) {
	this->panier->Add(gcnew Cart(qtd, article));
}
void CommandObject::addReglement(ReglementObject^ reglement) {
	this->reglement->Add(reglement);
}

void CommandObject::deleteCommande() {
	this->supprime = true; // true : potentielle erreur
}
bool CommandObject::isDeleted() {
	return this->supprime;
}

String^ CommandObject::getReferenceCommand() {
	return this->reference_commande;
}
String^ CommandObject::getDateLivraison() {
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
}
String^ CommandObject::getRemise() {
	return this->remise->ToString();
}
String^ CommandObject::getTotalCommand() {
	return this->total_commande->ToString();
}
String^ CommandObject::getRetrait() {
	return this->retrait;
}
ClientObject^ CommandObject::getClient() {
	return this->client;
}
AdressObject^ CommandObject::getAdresseLivraison() { return this->adresse_livraison; }
AdressObject^ CommandObject::getAdresseFacturation() { return this->adresse_facturation; }
List<Cart^>^ CommandObject::getPanier() { return this->panier; }
List<ReglementObject^>^ CommandObject::getReglement() { return this->reglement; }


