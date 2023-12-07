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

        //void editCommandReferenceCommande(CommandObject^ u);
        void editCommandDateLivraison(CommandObject^ u);
        void editCommandDateEmission(CommandObject^ u);
        void editCommandRemise(CommandObject^ u);
        void editCommandTotalCommande(CommandObject^ u);
        void editCommandRetrait(CommandObject^ u);

        void editCommand(CommandObject^ co);

        void deleteCommand(CommandObject^ co);

        void insertCommand(CommandObject^ co);
    };

}