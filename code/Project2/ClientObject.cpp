#include "ClientObject.h"
using namespace Object;


void ClientObject::setNumero_client(int idUser) {
    this->numero_client = idUser;
}
int ClientObject::getNumero_client(void) {
    return this->numero_client;
}
void ClientObject::setNom(String^ name) {
    this->name = name;
}
String^ ClientObject::getNom() {
    return this->name;
}
String^ ClientObject::ToString() {
    return "numero_client : " + this->numero_client + " name : " + this->name;
}