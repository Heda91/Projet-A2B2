#pragma once
#include "BDD.h"
#include "CommandObject.h"

<<<<<<< HEAD
=======

>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
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

<<<<<<< HEAD
        //       void editCommandReferenceCommande(CommandObject^ u);
        void editCommandDateLivraison(CommandObject^ u);
        void editCommandDateEmission(CommandObject^ u);
        void editCommandRemise(CommandObject^ u);
        void editCommandTotalCommande(CommandObject^ u);
        void editCommandRetrait(CommandObject^ u);

        void deleteCommand(CommandObject^ u);

        void insertCommand(CommandObject^ u);
=======
        void editCommand(CommandObject^ co);

        void deleteCommand(CommandObject^ co);

        void insertCommand(CommandObject^ co);
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
    };

}