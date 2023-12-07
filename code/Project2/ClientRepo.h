#pragma once
#include "BDD.h"
#include "ClientObject.h"

using namespace  System::Collections::Generic;

using namespace System;
using namespace System::Data;
using namespace Object;

namespace Repository {
    ref class ClientRepo
    {

    private:
        BDD^ bdd;
    public:
        ClientRepo(BDD^ bdd) :bdd(bdd) {};

        List<ClientObject^>^ getClients();

        void editClient(ClientObject^ u);

        void deleteClient(ClientObject^ u);

        void insertClient(ClientObject^ u);
    };

}