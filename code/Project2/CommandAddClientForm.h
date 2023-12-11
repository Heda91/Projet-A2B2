#pragma once
#include "ClientForm.h"
#include "CommandObject.h"

namespace Display {
	ref class CommandAddClientForm : public ClientForm
	{
	protected:
		Forms::Button^ button_valid;
		CommandObject^ co = nullptr;
	public:
		CommandAddClientForm(BDD^ bdd, CommandObject^ co) : ClientForm(bdd) {
			this->co = co;
			
			this->button_del->Enabled = false;

			this->button_valid = gcnew Forms::Button();
			this->button_valid->Location = System::Drawing::Point(445, 5);
			this->button_valid->Margin = Forms::Padding(4);
			this->button_valid->Size = System::Drawing::Size(70, 25);
			this->button_valid->UseVisualStyleBackColor = true;
			this->button_valid->Name = L"buttonValid";
			this->button_valid->Text = L"Valider";
			this->button_valid->TabIndex = 6;
			this->button_valid->Click += gcnew System::EventHandler(this, &Display::CommandAddClientForm::buttonValidClick);

			this->Controls->Add(this->button_valid);
		}
	protected:
		void buttonValidClick(System::Object^ sender, System::EventArgs^ e) {
			co->setClient((ClientObject^)this->data_grid_view->SelectedRows[0]->Tag);
			this->Close();
		}
	};
}
