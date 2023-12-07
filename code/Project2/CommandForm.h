#pragma once
#include "BDD.h"
#include "PrincipalForm.h"
#include "CommandRepo.h"
<<<<<<< HEAD
#include "CommandObject.h"
=======
>>>>>>> temp-branch

namespace Display {

	public ref class CommandForm : public PrincipalForm
	{
	public:
		CommandForm(BDD^ bdd) : PrincipalForm(bdd, "Commandes") {};
		void reload() override;

	protected:
		void buttonAddClick(System::Object^ sender, System::EventArgs^ e) override;
		void buttonModifClick(System::Object^ sender, System::EventArgs^ e) override;
		void buttonViewClick(System::Object^ sender, System::EventArgs^ e) override;
		void buttonDelClick(System::Object^ sender, System::EventArgs^ e) override;

		void initDataGridView() override;
<<<<<<< HEAD
	private :
		Repository::CommandRepo^ cr;
=======
	private:
		Repository::CommandRepo^ cr;

>>>>>>> temp-branch
	};
}

