#pragma once
#include "BDD.h"
#include "ArticleRepo.h"
#include "PrincipalForm.h"

namespace Display {

	public ref class ArticleForm : public PrincipalForm
	{
	public:
		ArticleForm(BDD^ bdd) : PrincipalForm(bdd, "Articles") {};
		void reload() override;

	protected:
		void buttonAddClick(System::Object^ sender, System::EventArgs^ e) override;
		void buttonModifClick(System::Object^ sender, System::EventArgs^ e) override;
		void buttonViewClick(System::Object^ sender, System::EventArgs^ e) override;
		void buttonDelClick(System::Object^ sender, System::EventArgs^ e) override;

		void initDataGridView() override;
	private:
		Repository::ArticleRepo^ ar;
	};
}
