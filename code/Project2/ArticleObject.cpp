#include "ArticleObject.h"

using namespace Object;

void ArticleObject::setIdArticle(int id_article)
{
	this->id_article = id_article;
}

void ArticleObject::setDesignation(String^ designation)
{
	this->designation = designation;
}

void ArticleObject::setPrixHT(Decimal^ prixHT)
{
	this->prixHT = prixHT;
}

void ArticleObject::setTVA(Decimal^ TVA)
{
	this->TVA = TVA;
}

void ArticleObject::setQuantiteStock(int quantite_stock)
{
	this->quantite_stock = quantite_stock;
}

void ArticleObject::setSeuilReapprovisionnement(int seuil_reapprovisionnement)
{
	this->seuil_reapprovisionnement = seuil_reapprovisionnement;
}

void ArticleObject::setPrixAchat(Decimal^ prix_achat)
{
	this->prix_achat = prix_achat;
}

void ArticleObject::deleteArticle()
{
	this->supprime = true; // attention, supprime = true ( pas 1 ), peut etre source de probleme
}

String^ ArticleObject::getIdArticle()
{
	return this->id_article.ToString();
}

String^ ArticleObject::getDesignation()
{

	return this->designation;
}

String^ ArticleObject::getPrixHT()
{
	return this->prixHT->ToString();
<<<<<<< HEAD
//	return this->prixHT->ToString()->Replace("{", "")->Replace("}", "");
=======
	//	return this->prixHT->ToString()->Replace("{", "")->Replace("}", "");
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
}

String^ ArticleObject::getTVA()
{
	return this->TVA->ToString();
<<<<<<< HEAD
//	return this->TVA->ToString()->Replace("{", "")->Replace("}", "");
=======
	//	return this->TVA->ToString()->Replace("{", "")->Replace("}", "");
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
}

String^ ArticleObject::getQuantiteStock()
{
	return this->quantite_stock.ToString();
}

String^ ArticleObject::getSeuilReapprovisionnement()
{
	return this->seuil_reapprovisionnement.ToString();
}

String^ ArticleObject::getPrixAchat()
{
	return this->prix_achat->ToString();
}

bool ArticleObject::isDeleted()
{
	return this->supprime;
}


//String^ ArticleObject::ToString() {
//	return "id_article : " + this->id_article + " designation : " + this->designation;
//}
