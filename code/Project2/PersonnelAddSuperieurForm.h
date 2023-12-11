#pragma once
#include "BDD.h"
#include "PersonnelForm.h"

namespace  Display {
	ref class PersonnelAddSuperieur : public PersonnelForm
	{
	protected:
		Forms::Button^ button_valid;
		PersonnelObject^ po = nullptr;
	public:
		PersonnelAddSuperieur(BDD^ bdd, PersonnelObject^ po):PersonnelForm(bdd) {
			this->po = po;

			this->button_del->Enabled = false;

			this->button_valid = gcnew Forms::Button();
			this->button_valid->Location = System::Drawing::Point(445, 5);
			this->button_valid->Margin = Forms::Padding(4);
			this->button_valid->Size = System::Drawing::Size(70, 25);
			this->button_valid->UseVisualStyleBackColor = true;
			this->button_valid->Name = L"buttonValid";
			this->button_valid->Text = L"Valider";
			this->button_valid->TabIndex = 7;
			this->button_valid->Click += gcnew System::EventHandler(this, &Display::PersonnelAddSuperieur::buttonValidClick);

			this->Controls->Add(button_valid);
		};
	protected:
		void buttonValidClick(System::Object^ sender, System::EventArgs^ e) {
			bool reussi = true;
			PersonnelObject^ superieur = (PersonnelObject^)this->data_grid_view->SelectedRows[0]->Tag;
			this->po->setIdSuperieur(Convert::ToInt32(superieur->getIdPersonnel()));
			this->Close();
		}
	};
}

