#include "AdressRepo.h"

AdressObject^ Repository::AdressRepo::selectAdress(int id) {
	System::Data::DataSet^ ds = bdd->executeQuery("SELECT [numero_rue], [rue], [code_postale], [ville], [supprime] FROM [Adresse] WHERE [id_adresse] = " + id);
	Data::DataRow^ row = ds->Tables[0]->Rows[0];

	AdressObject^ a = gcnew AdressObject();
	a->setIdAdresse(id);
	a->setNumero((int)row[0]);
	a->setRue((String^)row[1]);
	a->setCodePostale((String^)row[2]);
	a->setVille((String^)row[3]);
	if ((bool)row[4] == true) { a->deleteAdresse(); }
	return a;
}

void Repository::AdressRepo::insertAdress(AdressObject^ a) {
	String^ query = "INSERT INTO [Adresse] (numero_rue, rue, code_postale, ville, supprime)";
	query += " VALUES (" + a->getNumero() + ", '" + a->getRue() + "', '" + a->getCodePostale() + "', '" + a->getVille() + "', 0)";
	a->setIdAdresse(bdd->executeInsert(query));
}

void Repository::AdressRepo::deleteAdress(AdressObject^ a) {
	bdd->executeNonQuery("UPDATE [Adresse] SET supprime = 1 WHERE id_adresse = " + a->getIdAdresse());
}