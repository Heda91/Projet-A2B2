#pragma once
#include "BDD.h"
#include "AdressObject.h"

using namespace Object;
using namespace System::Collections::Generic;

namespace Repository {
	ref class AdressRepo
	{
    private:
        BDD^ bdd;
    public:
        AdressRepo(BDD^ bdd) :bdd(bdd) {}

        AdressObject^ selectAdress(int id);

        void deleteAdress(AdressObject^ u);

        void insertAdress(AdressObject^ u);
	};
}
