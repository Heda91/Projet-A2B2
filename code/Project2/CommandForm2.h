#pragma once
#include "BDD.h"
<<<<<<< HEAD:code/Project2/ItemsForm.h
#include "ArticleRepo.h"
=======
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286:code/Project2/CommandForm2.h
#include "PrincipalForm.h"
#include "CommandRepo.h"

namespace Display {
	ref class CommandForm2 : public PrincipalForm
	{
	public:
		CommandForm2(BDD^ bdd) : PrincipalForm(bdd, "Commandes") {};
		void reload() override;

	protected:
		void buttonAddClick(System::Object^ sender, System::EventArgs^ e) override;
		void buttonModifClick(System::Object^ sender, System::EventArgs^ e) override;
		void buttonViewClick(System::Object^ sender, System::EventArgs^ e) override;
		void buttonDelClick(System::Object^ sender, System::EventArgs^ e) override;

		void initDataGridView() override;
	private:
<<<<<<< HEAD:code/Project2/ItemsForm.h
		Repository::ArticleRepo^ ar;
=======
		Repository::CommandRepo^ cr;
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286:code/Project2/CommandForm2.h
	};
}

