#pragma once
#include "AdressObject.h"
#include "ClientObject.h"
#include "ArticleObject.h"
#include "ReglementObject.h"

using namespace System;

namespace Object {
	typedef ref struct Cart
	{
		Cart(int quantite, ArticleObject^ article): quantite(quantite), article(article){}
		int quantite;
		ArticleObject^ article;

		Decimal getTotalTTC();
	};
	ref class CommandObject
	{
	private:
		String^ reference_commande = "";
		DateTime^ date_livraison = nullptr;
		DateTime^ date_emission = nullptr;
		Decimal^ remise;
		Decimal^ total_commande;
		String^ retrait = "";
		ClientObject^ client = nullptr;
		AdressObject^ adresse_livraison = nullptr;
		AdressObject^ adresse_facturation = nullptr;
		List<Cart^>^ panier = gcnew List<Cart^>();
		List<ReglementObject^>^ reglement = gcnew List<ReglementObject^>();
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
		void addArticle(int, ArticleObject^);
		void addReglement(ReglementObject^);

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
		List<Cart^>^ getPanier();
		List<ReglementObject^>^ getReglement();

		//String^ ToString() override;
	};
}
