#include "ArticleRepo.h"
using namespace Repository;

List<ArticleObject^>^ ArticleRepo::getArticles(void) {
    DataSet^ ds = bdd->executeQuery("SELECT (id_article), (designation), (prixHT), (TVA), (quantite_stock), (seuil_reaprovisionnement), (prix_achat), (supprime) FROM [Article]");

    List<ArticleObject^>^ list = gcnew List<ArticleObject^>();

    for each (DataRow ^ row in ds->Tables[0]->Rows)
    {
        ArticleObject^ u = gcnew ArticleObject();
        u->setIdArticle((int)row[0]);
        u->setDesignation((String^)row[1]);

        u->setPrixHT(Convert::ToDecimal(row[2]));
        u->setTVA(Convert::ToDecimal(row[3]));
        u->setQuantiteStock((int)row[4]);
        u->setSeuilReapprovisionnement((int)row[5]);
        u->setPrixAchat(Convert::ToDecimal(row[6]));
        if ((bool)row[7] == true) { u->deleteArticle(); }
        list->Add(u);
    }

    return list;
};

void ArticleRepo::editArticle(ArticleObject^ u) { // a concatener
    editArticleDesignation(u);
    editArticlePrixHT(u);
    editArticleTVA(u);
    editArticleQuantiteStock(u);
    editArticleSeuilReapprovisionnement(u);
    editArticlePrixAchat(u);
}

void ArticleRepo::editArticleDesignation(ArticleObject^ u) {
    bdd->executeNonQuery("UPDATE [Article] SET designation = '" + u->getDesignation() + "' WHERE [id_article] = " + u->getIdArticle());
}
void ArticleRepo::editArticlePrixHT(ArticleObject^ u) {
    bdd->executeNonQuery("UPDATE [Article] SET prixHT = '" + u->getPrixHT()->Replace(",", ".") + "' WHERE [id_article] = " + u->getIdArticle());
}
void ArticleRepo::editArticleTVA(ArticleObject^ u) {
    bdd->executeNonQuery("UPDATE [Article] SET TVA = '" + u->getTVA()->Replace(",", ".") + "' WHERE [id_article] = " + u->getIdArticle());
}
void ArticleRepo::editArticleQuantiteStock(ArticleObject^ u) {
    bdd->executeNonQuery("UPDATE [Article] SET quantite_stock = '" + u->getQuantiteStock() + "' WHERE [id_article] = " + u->getIdArticle());
}
void ArticleRepo::editArticleSeuilReapprovisionnement(ArticleObject^ u) {
    bdd->executeNonQuery("UPDATE [Article] SET seuil_reaprovisionnement = '" + u->getSeuilReapprovisionnement() + "' WHERE [id_article] = " + u->getIdArticle());
}
void ArticleRepo::editArticlePrixAchat(ArticleObject^ u) {
    bdd->executeNonQuery("UPDATE [Article] SET prix_achat = '" + u->getPrixAchat()->Replace(",", ".") + "' WHERE [id_article] = " + u->getIdArticle()); // NE PAS METTRE EN MONEY DANS LA BDD
}



void ArticleRepo::deleteArticle(ArticleObject^ u) {
    bdd->executeNonQuery("UPDATE [Article] SET supprime = 1 WHERE [id_article] = " + u->getIdArticle());  // attention, supprime = true ( pas 1 ), peut etre source de probleme
}
void ArticleRepo::insertArticle(ArticleObject^ u) {
    //int id_article = 
    this->bdd->executeInsert("INSERT INTO [Article](designation, prixHT, TVA, quantite_stock, seuil_reaprovisionnement, prix_achat, supprime) VALUES ('" + u->getDesignation() + "', '" + u->getPrixHT() + "', '" + u->getTVA() + "', '" + u->getQuantiteStock() + "', '" + u->getSeuilReapprovisionnement() + "', '" + u->getPrixAchat() + "', '" + u->isDeleted() + "')");
    //u->setIdArticle(id_article);



    //Enregistrer ses adresses
    //AdresseRepo ar=  ...
        //boucler sur les adresses a
        //ar.insert(a)
}