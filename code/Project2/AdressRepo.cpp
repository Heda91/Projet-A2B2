#include "AdressRepo.h"

void Repository::AdressRepo::insertAdress(AdressObject^ a) {
	String^ query = "INSERT INTO [Adresse] (numero_rue, rue, code_postale, ville, supprime)";
	query += " VALUES (" + a->getNumero() + ", '" + a->getRue() + "', '" + a->getCodePostale() + "', '" + a->getVille() + "', 0)";
	a->setIdAdresse(bdd->executeInsert(query));
}

void Repository::AdressRepo::deleteAdress(AdressObject^ a) {
	bdd->executeNonQuery("UPDATE [Adresse] SET supprime = 1 WHERE id_adresse = " + a->getIdAdresse());
}