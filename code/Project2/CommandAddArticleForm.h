#pragma once
#include "ArticleForm.h"
#include "CommandObject.h"
#include "CommandRepo.h"

namespace Display {
	ref class CommandAddArticleForm : public ArticleForm
	{
	protected:
		System::Windows::Forms::Button^ button_valid;
		System::Windows::Forms::TextBox^ txtbx_qtd;
		System::Windows::Forms::Label^ label_qtd;
		CommandObject^ co = nullptr;
		Decimal prixTTC = Decimal::Zero;
	public:
		Decimal getPrixTTC() { return prixTTC; }
		CommandAddArticleForm(BDD^ bdd,CommandObject^ co ) :ArticleForm(bdd) {
			this->co = co;

			this->button_del->Enabled = false;

			this->button_valid = gcnew Forms::Button();
			this->button_valid->Location = System::Drawing::Point(445, 5);
			this->button_valid->Margin = Forms::Padding(4);
			this->button_valid->Size = System::Drawing::Size(70, 25);
			this->button_valid->UseVisualStyleBackColor = true;
			this->button_valid->Name = L"buttonValid";
			this->button_valid->Text = L"Valider";
			this->button_valid->TabIndex = 7;
			this->button_valid->Click += gcnew System::EventHandler(this, &Display::CommandAddArticleForm::buttonValidClick);

			this->label_qtd = gcnew Forms::Label();
			this->label_qtd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_qtd->Location = System::Drawing::Point(340, 5);
			this->label_qtd->Size = System::Drawing::Size(70, 30);
			this->label_qtd->TabStop = true;
			this->label_qtd->TextAlign = Drawing::ContentAlignment::TopRight;
			this->label_qtd->Name = L"label_id_adresse";
			this->label_qtd->Text = L"Quantite";

			this->txtbx_qtd = gcnew Forms::TextBox();
			this->txtbx_qtd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_qtd->Location = System::Drawing::Point(410, 5);
			this->txtbx_qtd->Size = System::Drawing::Size(40, 25);
			this->txtbx_qtd->TabIndex = 6;
			this->txtbx_qtd->TextAlign = Forms::HorizontalAlignment::Center;
			this->txtbx_qtd->Name = L"txtbx_qtd";
			this->txtbx_qtd->Text = "0";

			this->Controls->Add(this->button_valid);
			this->Controls->Add(this->label_qtd);
			this->Controls->Add(this->txtbx_qtd);
		};
	protected:
		void buttonValidClick(System::Object^ sender, System::EventArgs^ e) {
			bool reussi = true;
			int qtd;
			try {
				if (this->txtbx_qtd->Text != "'" && this->txtbx_qtd->Text->Replace("'", "") != "" && Convert::ToInt16(this->txtbx_qtd->Text->Replace("'", "")) > 0) {
					qtd = Convert::ToInt16(this->txtbx_qtd->Text == "" ? "0" : txtbx_qtd->Text);
					this->txtbx_qtd->BackColor = System::Drawing::Color::White;
				}
				else {
					reussi = false;
					this->txtbx_qtd->BackColor = System::Drawing::Color::Red;
				}
			}
			catch (System::FormatException^) {
				reussi = false;
				this->txtbx_qtd->BackColor = System::Drawing::Color::Red;
			}
			catch (System::OverflowException^) {
				reussi = false;
				this->txtbx_qtd->BackColor = System::Drawing::Color::Red;
			}
			if (reussi) {
				ArticleObject^ ao = (ArticleObject^)this->data_grid_view->SelectedRows[0]->Tag;
				this->co->addArticle(qtd, ao, true);
				Decimal TVA = 1 + (Convert::ToDecimal(ao->getTVA()) / 100);
				this->prixTTC =  qtd * Convert::ToDecimal(ao->getPrixHT()) * TVA;
				this->Close();
			}
		}
	};
}
