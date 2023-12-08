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

        void editCommand(CommandObject^ co);

        void deleteCommand(CommandObject^ co);

        void insertCommand(CommandObject^ co);
    };

}