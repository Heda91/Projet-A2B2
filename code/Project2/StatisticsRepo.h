#pragma once
#include "BDD.h"

using namespace  System::Collections::Generic;

using namespace System;
using namespace System::Data;

namespace Repository {
    ref class StatisticsRepo
    {

    public:
        BDD^ bdd;
    public:
        StatisticsRepo(BDD^ bdd) :bdd(bdd) {};

        double panierMoyen();

        double chiffreA();

        DataSet^ seuilStock();

        DataSet^ totalAchat();

        DataSet^ articlesPlus();

        DataSet^ articlesMoins();

        double valeurCommerciale();

        double valeurAchat();

        double variations();
    };

}

