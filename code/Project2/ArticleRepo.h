#pragma once
#include "BDD.h"
#include "ArticleObject.h"

using namespace  System::Collections::Generic;

using namespace System;
using namespace System::Data;
using namespace Object;

namespace Repository {
    ref class ArticleRepo
    {

    public:
        BDD^ bdd;
    public:
        ArticleRepo(BDD^ bdd) :bdd(bdd) {};

        List<ArticleObject^>^ getArticles();

		void editArticle(ArticleObject^ u);

        void editArticleDesignation(ArticleObject^ u);
        void editArticlePrixHT(ArticleObject^ u);
        void editArticleTVA(ArticleObject^ u);
        void editArticleQuantiteStock(ArticleObject^ u);
        void editArticleSeuilReapprovisionnement(ArticleObject^ u);
        void editArticlePrixAchat(ArticleObject^ u);

        void deleteArticle(ArticleObject^ u);

        void insertArticle(ArticleObject^ u);
    };

}