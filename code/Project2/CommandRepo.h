#pragma once
#include "BDD.h"
#include "CommandObject.h"


using namespace  System::Collections::Generic;

using namespace System;
using namespace System::Data;
using namespace Object;

namespace Repository {
    ref class CommandRepo
    {

    public:
        BDD^ bdd;
    public:
        CommandRepo(BDD^ bdd) :bdd(bdd) {};

        List<CommandObject^>^ getCommands(void);

        int getNombreCommand(CommandObject^ co);
        DateTime^ getFirstCommand(ClientObject^ co);

        void editCommand(CommandObject^ co);

        void deleteCommand(CommandObject^ co);

        void insertCommand(CommandObject^ co);

        void linkCommandArticle(String^ ref_commande, int id_article, int quantite);
        void delinkCommandArticle(String^ ref_commande, int id_article);
    };

}