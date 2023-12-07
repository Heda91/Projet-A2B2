#pragma once

using namespace System;
namespace Object {
	ref class ArticleObject
	{

	private:
		int id_article = 0;
		String^ designation = "";
		Decimal^ prixHT = Decimal::Zero;
		Decimal^ TVA = Decimal::Zero;
		int quantite_stock = 0;
		int seuil_reapprovisionnement = 0;
		Decimal^ prix_achat = Decimal::Zero;
		bool supprime = false;

	public:

		void setIdArticle(int id_article);
		void setDesignation(String^ designation);
		void setPrixHT(Decimal^ prixHT);
		void setTVA(Decimal^ TVA);
		void setQuantiteStock(int quantite_stock);
		void setSeuilReapprovisionnement(int seuil_reapprovisionnement);
		void setPrixAchat(Decimal^ prix_achat);
		void deleteArticle();

		String^ getIdArticle();
		String^ getDesignation();
		String^ getPrixHT();
		String^ getTVA();
		String^ getQuantiteStock();
		String^ getSeuilReapprovisionnement();
		String^ getPrixAchat();
		bool isDeleted();


		//String^ ToString() override;

	};
}