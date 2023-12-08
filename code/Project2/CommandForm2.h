#pragma once
#include "BDD.h"
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
		Repository::CommandRepo^ cr = nullptr;
	};
}

