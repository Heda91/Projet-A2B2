#pragma once

using namespace System;

namespace Object {
	ref class CommandObject
	{
	private:
		String^ reference_commande = "";
		DateTime^ date_livraison = nullptr;
		DateTime^ date_emission = nullptr;
		Decimal^ remise;
		Decimal^ total_commande;
		String^ retrait;
		int numero_client;
		bool supprime;

	public:
		void setReferenceCommand(String^ reference_commande);
		void setDateLivraison(String^ date_livraison);
		void setDateEmission(String^ date_emission);
		void setRemise(Decimal^ remise);
		void setTotalCommand(Decimal^ total_commande);
		void setRetrait(int retrait);
		void deleteCommande();
		void setIdAdresseLivraison(int id_adresse_livraison);
		void setNumeroClient(int numero_client);
		void setIdAdresseFacturation(int id_adresse_facturation);


		String^ getReferenceCommand();
		String^ getDateLivraison();
		String^ getDateEmission();
		String^ getRemise();
		String^ getTotalCommand();
		String^ getRetrait();
		bool isDeleted();
		int getIdAdresseLivraison();
		int getNumeroClient();
		int getIdAdresseFacturation();

		//String^ ToString() override;
	};
}
