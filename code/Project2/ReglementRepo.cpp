#include "ReglementRepo.h"

void Repository::ReglementRepo::insertReglement(ReglementObject^ ro, String^ ref) {
	String^ query = "INSERT INTO [Reglement](moyen_paiement, date_paiement, solde_reglement, reference_commande, supprime)";
	query += " VALUES ('" + ro->getMoyenPaiement() + "', '" + ro->getDatePaiement() + "', " + ro->getSoldePaiement() + ", '" + ref + "', 0)";
	ro->setIdReglement(this->bdd->executeInsert(query));
}
void Repository::ReglementRepo::deleteReglement(ReglementObject^ ro) {
	String^ query = "UPDATE [Reglement] SET supprime = 1 WHERE id_reglement = " + ro->getIdReglement();
	this->bdd->executeQuery(query);
}



