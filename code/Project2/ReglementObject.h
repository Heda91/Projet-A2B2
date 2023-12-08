#pragma once

using namespace System;

namespace Object {
	ref class ReglementObject
	{
	private:
		int id_reglement = 0;
		String^ moyen_paiement = "";
		DateTime^ date_paiement = nullptr;
		Decimal^ solde_paiement = Decimal::Zero;
	public:
		void setIdReglement(int id) { this->id_reglement = id; }
		void setMoyenPaiement(String^ moyen) { this->moyen_paiement = moyen; }
		void setDatePaiement(DateTime^ date) { this->date_paiement = date; }
		void setSoldePaiement(Decimal^ solde) { this->solde_paiement = solde; }

		String^ getIdReglement() { return this->id_reglement.ToString(); }
		String^ getMoyenPaiement() { return this->moyen_paiement; }
		String^ getDatePaiement() { return this->date_paiement->ToString("MM/dd/yyyy"); }
		String^ getDatePaiementAff() { return this->date_paiement->ToString("dd/MM/yyyy"); }
		String^ getSoldePaiement() { return this->solde_paiement->ToString(); }
	};
}
