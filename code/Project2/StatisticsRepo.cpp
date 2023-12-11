#include "StatisticsRepo.h"
using namespace System::Data;
using namespace Repository;

double Repository::StatisticsRepo::panierMoyen() {
    String^ sqlQuery = "SELECT AVG(total_commande) AS Moyenne FROM Commande;";
    DataSet^ result = bdd->executeQuery(sqlQuery);
    if (result && result->Tables->Count > 0 && result->Tables[0]->Rows->Count > 0) {
        DataRow^ firstRow = result->Tables[0]->Rows[0];
        double moyenne = Convert::ToDouble(firstRow["Moyenne"]);
        return moyenne;
    }
}

double Repository::StatisticsRepo::chiffreA() {
    String^ sqlQuery = "SELECT SUM(prixHT * quantite) AS chiffreAffaire FROM Article JOIN CONTENIR ON Article.id_article = CONTENIR.id_article JOIN Commande ON CONTENIR.reference_commande = Commande.reference_commande WHERE MONTH(Commande.date_livraison) = 12 AND YEAR(Commande.date_livraison) = 2023; ";
    DataSet^ result = bdd->executeQuery(sqlQuery);
    if (result && result->Tables->Count > 0 && result->Tables[0]->Rows->Count > 0) {
        DataRow^ firstRow = result->Tables[0]->Rows[0];
        double chiffreA = Convert::ToDouble(firstRow["chiffreAffaire"]);
        return chiffreA;
    }
}

DataSet^ Repository::StatisticsRepo::seuilStock() {


    String^ sqlQuery = "SELECT id_article, designation, quantite_stock, seuil_reaprovisionnement FROM Article WHERE quantite_stock < seuil_reaprovisionnement; ";
    DataSet^ result = bdd->executeQuery(sqlQuery);

    return result;
}

DataSet^ Repository::StatisticsRepo::totalAchat() {
    String^ sqlQuery = "SELECT Client.prenom, Client.nom, SUM(total_commande) AS total FROM Commande JOIN Client ON Commande.numero_client = Client.numero_client GROUP BY prenom, nom; ";
    DataSet^ result = bdd->executeQuery(sqlQuery);
    return result;
}
DataSet^ Repository::StatisticsRepo::articlesPlus() {

    String^ sqlQuery = "SELECT designation, CONTENIR.id_article FROM Article JOIN CONTENIR ON Article.id_article = CONTENIR.id_article GROUP BY designation, CONTENIR.id_article HAVING COUNT(*) > 1 ORDER BY COUNT(*) DESC; ";
    DataSet^ result = bdd->executeQuery(sqlQuery);
    /*
    if (result && result->Tables->Count > 0 && result->Tables[0]->Rows->Count > 0) {
        for (int i = 0; i < result->Tables[0]->Rows->Count; i++) {
            String^ valeurColonne1 = result->Tables[0]->Rows[i]["designation"]->ToString();
            String^ valeurColonne2 = result->Tables[0]->Rows[i]["id_article"]->ToString();
            articles->Add(valeurColonne1 + ", " + valeurColonne2);
        }
    }
    */
    return result;
}


DataSet^ Repository::StatisticsRepo::articlesMoins() {

    String^ sqlQuery = "SELECT designation, CONTENIR.id_article FROM Article JOIN CONTENIR ON Article.id_article = CONTENIR.id_article GROUP BY designation, CONTENIR.id_article HAVING COUNT(*) > 1 ORDER BY COUNT(*) ASC; ";
    DataSet^ result = bdd->executeQuery(sqlQuery);

    return result;
}

double Repository::StatisticsRepo::valeurCommerciale() {
    String^ sqlQuery = "SELECT SUM(total_commande) AS 'Valeur commerciale' FROM Commande; ";
    DataSet^ result = bdd->executeQuery(sqlQuery);
    if (result && result->Tables->Count > 0 && result->Tables[0]->Rows->Count > 0) {
        DataRow^ firstRow = result->Tables[0]->Rows[0];
        double valeurCommerciale = Convert::ToDouble(firstRow["Valeur commerciale"]);
        return valeurCommerciale;
    }
}

double Repository::StatisticsRepo::valeurAchat() {
    String^ sqlQuery = "SELECT SUM(prix_achat) AS 'Valeur dachat' FROM Article; ";
    DataSet^ result = bdd->executeQuery(sqlQuery);
    if (result && result->Tables->Count > 0 && result->Tables[0]->Rows->Count > 0) {
        DataRow^ firstRow = result->Tables[0]->Rows[0];
        double valeurAchat = Convert::ToDouble(firstRow["Valeur dachat"]);
        return valeurAchat;
    }
}

double Repository::StatisticsRepo::variations() {
    String^ sqlQuery = "SELECT SUM(prixHT * quantite_stock) AS Variations FROM Article; ";
    DataSet^ result = bdd->executeQuery(sqlQuery);
    if (result && result->Tables->Count > 0 && result->Tables[0]->Rows->Count > 0) {
        DataRow^ firstRow = result->Tables[0]->Rows[0];
        double variations = Convert::ToDouble(firstRow["Variations"]);
        return variations;
    }
}