#include "ClientObject.h"
using namespace Object;
void ClientObject::setNumero_client(int idUser){
	this->idUser = idUser;
}

void ClientObject::setNom(String^ name) {
	this->name = name;
}

void ClientObject::setPrenom(String^ prenom) {
	this->prenom = prenom;
}

int ClientObject::getNumero_client(void) {
	return this->idUser;
}

String^ ClientObject::getNom() {
	return this->name;
}

String^ ClientObject::getPrenom() {
	return this->prenom;
}

String^ ClientObject::ToString(){
			return "numero_client : " + this->idUser + " name : " + this->name;
}
