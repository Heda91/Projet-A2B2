#pragma once
#include "BDD.h"
#include "PersonnelObject.h"

using namespace  System::Collections::Generic;

using namespace System;
using namespace System::Data;
using namespace Object;

namespace Repository {
	ref class PersonnelRepo
	{

	public:
		BDD^ bdd;
	public:
		PersonnelRepo(BDD^ bdd) :bdd(bdd){}

		List<PersonnelObject^>^ getPersonnels();

		void editPersonnel(PersonnelObject^ u);

		void deletePersonnel(PersonnelObject^ u);

		void insertPersonnel(PersonnelObject^ u);
	};
}

