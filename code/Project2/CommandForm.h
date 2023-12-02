#pragma once
#include "PrincipalForm.h"

namespace Display {

	public ref class CommandForm : public PrincipalForm 
	{
	public:
		CommandForm() : PrincipalForm("Commandes") {};

	protected: 
		void buttonAddClick(System::Object^ sender, System::EventArgs^ e) override;
		void buttonModifClick(System::Object^ sender, System::EventArgs^ e) override;
		void buttonViewClick(System::Object^ sender, System::EventArgs^ e) override;
		//void buttonDelClick(System::Object^ sender, System::EventArgs^ e) override;

	};
}
