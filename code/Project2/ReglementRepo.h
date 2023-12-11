#pragma once
#include "BDD.h"
#include "ReglementObject.h"

using namespace Object;

namespace Repository {
	ref class ReglementRepo
	{
	public:
		BDD^ bdd;
	public:
		ReglementRepo(BDD^ bdd) :bdd(bdd) {};

		void deleteReglement(ReglementObject^ ro);

		void insertReglement(ReglementObject^ ro, String^ reference_commande);
	};
}
