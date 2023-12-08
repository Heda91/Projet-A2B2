#pragma once
#include "BDD.h"
#include "PrincipalForm.h"
#include "PersonnelRepo.h"

namespace Display {

	public ref class PersonnelForm : public PrincipalForm
	{
	public:
		int nb_lignes;
		PersonnelForm(BDD^ bdd) : PrincipalForm(bdd, "Personnels") {};
		void reload() override;

	protected:
		void dataGridViewCellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) override;
		void buttonAddClick(System::Object^ sender, System::EventArgs^ e) override;
		void buttonModifClick(System::Object^ sender, System::EventArgs^ e) override;
		void buttonViewClick(System::Object^ sender, System::EventArgs^ e) override;
		void buttonDelClick(System::Object^ sender, System::EventArgs^ e) override;

		void initDataGridView() override;
	private:
		Repository::PersonnelRepo^ pr;
	};
}
