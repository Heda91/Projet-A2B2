#include "PersonnelRepo.h"
#include "PersonnelObject.h"
using namespace Repository;
List<PersonnelObject^>^ PersonnelRepo::getPersonnels() {
	DataSet^ ds = bdd->executeQuery("SELECT * FROM [Personnel]");

	List<PersonnelObject^>^ list = gcnew List<PersonnelObject^>();

	for each (DataRow ^ row in ds->Tables[0]->Rows)
	{
		PersonnelObject^ u = gcnew PersonnelObject();
		u->setId_personnel((int)row[0]);
		u->setNom((String^)row[1]);
		list->Add(u);
	}

	return list;
}

void PersonnelRepo::editPersonnel(PersonnelObject^ u) {
	bdd->executeNonQuery("UPDATE [Personnel] SET nom = '" + u->getNom() + "' WHERE [id_personnel] = " + u->getId_personnel());
}

void PersonnelRepo::deletePersonnel(PersonnelObject^ u) {
	bdd->executeNonQuery("UPDATE [Personnel] SET nom = "" WHERE [id_personnel] = " + u->getId_personnel());
}

void PersonnelRepo::insertPersonnel(PersonnelObject^ u) {
	int idUser = this->bdd->executeInsert("INSERT INTO [Personnel](nom) VALUES ('" + u->getNom() + "')");
	u->setId_personnel(idUser);
}