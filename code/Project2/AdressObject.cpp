#include "AdressObject.h"

using namespace Object;

void AdressObject::setIdAdresse(int id) { id_adresse = id; }
void AdressObject::setNumero(int num) { numero = num; }
void AdressObject::setRue(String^ rue) { this->rue = rue; }
void AdressObject::setCodePostale(String^ cp) { code_postale = cp; }
void AdressObject::setVille(String^ ville) { this->ville = ville; }

void AdressObject::deleteAdresse() { supprime = true; }
bool AdressObject::isDelete() { return supprime; }

String^ AdressObject::getIdAdresse() { return id_adresse.ToString(); }
String^ AdressObject::getNumero() { return numero.ToString(); }
String^ AdressObject::getRue() { return rue; }
String^ AdressObject::getCodePostale() { return code_postale; }
String^ AdressObject::getVille() { return ville; }

String^ AdressObject::ToString() { return this->getNumero() + " " + this->getRue() + ", " + this->getCodePostale() + " " + this->getVille(); }

