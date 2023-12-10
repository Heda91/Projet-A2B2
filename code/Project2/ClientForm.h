#pragma once
#include "BDD.h"
#include "ClientRepo.h"
#include "ClientObject.h"
#include "PrincipalForm.h"

namespace Display {

	public ref class ClientForm : public PrincipalForm
	{
	public:
		ClientForm(BDD^ bdd) : PrincipalForm(bdd, "Clients") {};
		void reload() override;

	protected:
		void buttonAddClick(System::Object^ sender, System::EventArgs^ e) override;
		void buttonModifClick(System::Object^ sender, System::EventArgs^ e) override;
		void buttonViewClick(System::Object^ sender, System::EventArgs^ e) override;
		void buttonDelClick(System::Object^ sender, System::EventArgs^ e) override;

		void checkAdresses(ClientObject^);
		void initDataGridView() override;
	private:
		Repository::ClientRepo^ cr;
	};
}
