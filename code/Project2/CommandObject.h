#pragma once
<<<<<<< HEAD
=======
#include "AdressObject.h"
#include "ClientObject.h"
#include "ArticleObject.h"
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286

using namespace System;

namespace Object {
	ref class CommandObject
	{
	private:
<<<<<<< HEAD
		String^ reference_commande;
		String^ date_livraison;
		String^ date_emission;
		Decimal^ remise;
		Decimal^ total_commande;
		int retrait;
		bool supprime;
		int id_adresse_livraison;
		int numero_client;
		int id_adresse_facturation;

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
=======
		String^ reference_commande = "";
		DateTime^ date_livraison = nullptr;
		DateTime^ date_emission = nullptr;
		Decimal^ remise;
		Decimal^ total_commande;
		String^ retrait = "";
		ClientObject^ client = nullptr;
		AdressObject^ adresse_livraison = nullptr;
		AdressObject^ adresse_facturation = nullptr;
		List<ArticleObject^>^ articles = gcnew List<ArticleObject^>();
		bool supprime;

	public:
		void setReferenceCommand(String^ reference_commande);
		void setDateLivraison(DateTime^ date_livraison);
		void setDateEmission(DateTime^ date_emission);
		void setRemise(Decimal^ remise);
		void setTotalCommand(Decimal^ total_commande);
		void setRetrait(String^ retrait);
		void setClient(ClientObject^ client);
		void setAdresseLivraison(AdressObject^ adresse);
		void setAdresseFacturation(AdressObject^ adresse);

		void deleteCommande();
		bool isDeleted();

		String^ getReferenceCommand();
		String^ getDateLivraison();
		String^ getDateLivraisonAff();
		String^ getDateEmission();
		String^ getDateEmissionAff();
		String^ getRemise();
		String^ getTotalCommand();
		String^ getRetrait();
		ClientObject^ getClient();
		AdressObject^ getAdresseLivraison();
		AdressObject^ getAdresseFacturation();
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286

		//String^ ToString() override;
	};
}
