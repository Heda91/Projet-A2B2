#pragma once
#include "ArticleObject.h"
namespace Display {

	using namespace System::Windows;
	using namespace Object;

	public ref class ModifArticleForm : public System::Windows::Forms::Form
	{
	public:
		ModifArticleForm(ArticleObject^ ao) { InitializeComponent(ao); }

	protected:
		~ModifArticleForm() { if (components) { delete components; } }
		ArticleObject^ ao;
	private:
		Forms::Label^ label_id_article;
		Forms::Label^ label_view_id_article;
		Forms::Label^ label_designation;
		Forms::TextBox^ txtbx_designation;
		Forms::Label^ label_prixHT;
		Forms::TextBox^ txtbx_prixHT;
		Forms::Label^ label_TVA;
		Forms::TextBox^ txtbx_TVA;
		Forms::Label^ label_quantite_stock;
		Forms::TextBox^ txtbx_quantite_stock;
		Forms::Label^ label_seuil_reaprovisionnement;
		Forms::TextBox^ txtbx_seuil_reaprovisionnement;
		Forms::Label^ label_prix_achat;
		Forms::TextBox^ txtbx_prix_achat;
		Forms::Button^ button_valid;




	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(ArticleObject^ ao)
		{
			this->ao = ao;

			this->label_id_article = (gcnew System::Windows::Forms::Label());
			this->label_view_id_article = (gcnew System::Windows::Forms::Label());
			this->label_designation = (gcnew System::Windows::Forms::Label());
			this->txtbx_designation = (gcnew System::Windows::Forms::TextBox());
			this->label_prixHT = (gcnew System::Windows::Forms::Label());
			this->txtbx_prixHT = (gcnew System::Windows::Forms::TextBox());
			this->label_TVA = (gcnew System::Windows::Forms::Label());
			this->txtbx_TVA = (gcnew System::Windows::Forms::TextBox());
			this->label_quantite_stock = (gcnew System::Windows::Forms::Label());
			this->txtbx_quantite_stock = (gcnew System::Windows::Forms::TextBox());
			this->label_seuil_reaprovisionnement = (gcnew System::Windows::Forms::Label());
			this->txtbx_seuil_reaprovisionnement = (gcnew System::Windows::Forms::TextBox());
			this->label_prix_achat = (gcnew System::Windows::Forms::Label());
			this->txtbx_prix_achat = (gcnew System::Windows::Forms::TextBox());
			this->button_valid = gcnew Forms::Button();

			const int size_x = 230;
			const int size_x_view = 250;
			const int size_y = 30;
			const int pos_x = 15;
			const int pos_y_start = 15;
			const int step_y = 15;
			const int size_x_valid = 100;
			const int pos_x_view = 15 + pos_x + size_x;
			const int size_x_form = 30 + pos_x_view + size_x_view;
			const int size_y_form = 8 * (size_y + step_y) + pos_y_start;

			this->SuspendLayout();
			// 
			// id personnel
			// 
			this->label_id_article->AutoSize = true;
			this->label_id_article->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_id_article->Location = System::Drawing::Point(pos_x, pos_y_start);
			this->label_id_article->Size = System::Drawing::Size(size_x, size_y);
			this->label_id_article->TabStop = true;
			this->label_id_article->Name = L"label_id_article";
			this->label_id_article->Text = L"id article";
			// 
			// view id personnel
			// 
			this->label_view_id_article->AutoSize = true;
			this->label_view_id_article->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_id_article->Location = System::Drawing::Point(pos_x_view, pos_y_start);
			this->label_view_id_article->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_id_article->TabIndex = 1;
			this->label_view_id_article->Name = L"label_view_id_article";
			this->label_view_id_article->Text = ao->getIdArticle();
			// 
			// nom
			// 
			this->label_designation->AutoSize = true;
			this->label_designation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_designation->Location = System::Drawing::Point(pos_x, 1 * (size_y + step_y) + pos_y_start); //15+30+5
			this->label_designation->Size = System::Drawing::Size(size_x, size_y);
			this->label_designation->TabStop = true;
			this->label_designation->Name = L"label_designation";
			this->label_designation->Text = L"Nom";
			// 
			// view nom
			// 
			this->txtbx_designation->AutoSize = true;
			this->txtbx_designation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_designation->Location = System::Drawing::Point(pos_x_view, 1 * (size_y + step_y) + pos_y_start);
			this->txtbx_designation->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_designation->TabIndex = 2;
			this->txtbx_designation->Name = L"txtbx_designation";
			this->txtbx_designation->Text = ao->getDesignation();
			// 
			// prenom
			// 
			this->label_prixHT->AutoSize = true;
			this->label_prixHT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_prixHT->Location = System::Drawing::Point(pos_x, 2 * (size_y + step_y) + pos_y_start);//50+30+5
			this->label_prixHT->Size = System::Drawing::Size(size_x, size_y);
			this->label_prixHT->TabStop = true;
			this->label_prixHT->Name = L"label_prixHT";
			this->label_prixHT->Text = L"PrixHT";
			// 
			// view prenom
			// 
			this->txtbx_prixHT->AutoSize = true;
			this->txtbx_prixHT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_prixHT->Location = System::Drawing::Point(pos_x_view, 2 * (size_y + step_y) + pos_y_start);
			this->txtbx_prixHT->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_prixHT->TabIndex = 3;
			this->txtbx_prixHT->Name = L"txtbx_prixHT";
			this->txtbx_prixHT->Text = ao->getPrixHT() == "0" ? "" : ao->getPrixHT();
			// 
			// id superieur
			// 
			this->label_quantite_stock->AutoSize = true;
			this->label_quantite_stock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_quantite_stock->Location = System::Drawing::Point(pos_x, 3 * (size_y + step_y) + pos_y_start);//85+30+5
			this->label_quantite_stock->Size = System::Drawing::Size(size_x, size_y);
			this->label_quantite_stock->TabStop = true;
			this->label_quantite_stock->Name = L"label_quantite_stock";
			this->label_quantite_stock->Text = L"Qte stock";
			// 
			// view id superieur
			// 
			this->txtbx_quantite_stock->AutoSize = true;
			this->txtbx_quantite_stock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_quantite_stock->Location = System::Drawing::Point(pos_x_view, 3 * (size_y + step_y) + pos_y_start);
			this->txtbx_quantite_stock->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_quantite_stock->TabIndex = 4;
			this->txtbx_quantite_stock->Name = L"txtbx_quantite_stock";
			this->txtbx_quantite_stock->Text = ao->getQuantiteStock() == "0" ? "" : ao->getQuantiteStock();
			// 
			// date embauche
			// 
			this->label_TVA->AutoSize = true;
			this->label_TVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_TVA->Location = System::Drawing::Point(pos_x, 4 * (size_y + step_y) + pos_y_start); //120+30+5
			this->label_TVA->Size = System::Drawing::Size(size_x, size_y);
			this->label_TVA->TabStop = true;
			this->label_TVA->Name = L"label_TVA";
			this->label_TVA->Text = L"TVA";
			// 
			// view date embauche
			// 
			this->txtbx_TVA->AutoSize = true;
			this->txtbx_TVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_TVA->Location = System::Drawing::Point(pos_x_view, 4 * (size_y + step_y) + pos_y_start);
			this->txtbx_TVA->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_TVA->TabIndex = 5;
			this->txtbx_TVA->Name = L"txtbx_TVA";
			this->txtbx_TVA->Text = ao->getTVA() == "0" ? "" : ao->getTVA();
			// 
			// id adresse
			// 
			this->label_seuil_reaprovisionnement->AutoSize = true;
			this->label_seuil_reaprovisionnement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_seuil_reaprovisionnement->Location = System::Drawing::Point(pos_x, 5 * (size_y + step_y) + pos_y_start);//155+30+5
			this->label_seuil_reaprovisionnement->Size = System::Drawing::Size(size_x, size_y);
			this->label_seuil_reaprovisionnement->TabStop = true;
			this->label_seuil_reaprovisionnement->Name = L"label_seuil_reaprovisionnement";
			this->label_seuil_reaprovisionnement->Text = L"reaprovisionnement";
			// 
			// view id adresse
			// 
			this->txtbx_seuil_reaprovisionnement->AutoSize = true;
			this->txtbx_seuil_reaprovisionnement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_seuil_reaprovisionnement->Location = System::Drawing::Point(pos_x_view, 5 * (size_y + step_y) + pos_y_start);
			this->txtbx_seuil_reaprovisionnement->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_seuil_reaprovisionnement->TabIndex = 6;
			this->txtbx_seuil_reaprovisionnement->Name = L"txtbx_seuil_reaprovisionnement";
			this->txtbx_seuil_reaprovisionnement->Text = ao->getSeuilReapprovisionnement() == "0" ? "" : ao->getSeuilReapprovisionnement();
			//
			// prix achat
			//
			this->label_prix_achat->AutoSize = true;
			this->label_prix_achat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_prix_achat->Location = System::Drawing::Point(pos_x, 6 * (size_y + step_y) + pos_y_start);
			this->label_prix_achat->Size = System::Drawing::Size(size_x, size_y);
			this->label_prix_achat->TabStop = true;
			this->label_prix_achat->Name = L"label_prix_achat";
			this->label_prix_achat->Text = L"prix achat";
			//
			// view prix achat
			//
			this->txtbx_prix_achat->AutoSize = true;
			this->txtbx_prix_achat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_prix_achat->Location = System::Drawing::Point(pos_x_view, 6 * (size_y + step_y) + pos_y_start);
			this->txtbx_prix_achat->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_prix_achat->TabIndex = 7;
			this->txtbx_prix_achat->Name = L"txtbx_prix_achat";
			this->txtbx_prix_achat->Text = ao->getPrixAchat() == "0" ? "" : ao->getPrixAchat();
			//
			// valider
			// 
			this->button_valid->Location = System::Drawing::Point(pos_x_view + size_x_view - size_x_valid, 7 * (size_y + step_y) + pos_y_start);
			this->button_valid->Margin = Forms::Padding(1);
			this->button_valid->Size = System::Drawing::Size(size_x_valid, size_y);
			this->button_valid->UseVisualStyleBackColor = true;
			this->button_valid->Name = L"button_valid";
			this->button_valid->Text = L"Valider";
			this->button_valid->TabIndex = 8;
			this->button_valid->Click += gcnew System::EventHandler(this, &Display::ModifArticleForm::buttonValidClick);

			// 
			// ViewClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(size_x_form, size_y_form);//190+30+5
			this->Controls->Add(this->label_id_article);
			this->Controls->Add(this->label_view_id_article);
			this->Controls->Add(this->label_designation);
			this->Controls->Add(this->txtbx_designation);
			this->Controls->Add(this->label_prixHT);
			this->Controls->Add(this->txtbx_prixHT);
			this->Controls->Add(this->label_quantite_stock);
			this->Controls->Add(this->txtbx_quantite_stock);
			this->Controls->Add(this->label_TVA);
			this->Controls->Add(this->txtbx_TVA);
			this->Controls->Add(this->label_seuil_reaprovisionnement);
			this->Controls->Add(this->txtbx_seuil_reaprovisionnement);
			this->Controls->Add(this->label_prix_achat);
			this->Controls->Add(this->txtbx_prix_achat);
			this->Controls->Add(this->button_valid);


			this->Name = L"ModifArticleForm";
			this->Text = L"ViewArticle";
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

		void buttonValidClick(System::Object^ sender, System::EventArgs^ e) {
			bool reussi = true;
			String^ designation;
			Decimal^ prixHT;
			Decimal^ TVA;
			int quantite_stock;
			int seuil_reaprovisionnement;
			Decimal^ prix_achat;
			try {
				if (this->txtbx_designation->Text != "'" && this->txtbx_designation->Text->Replace("'", "") != "") {
					designation = this->txtbx_designation->Text->Replace("'", " ");
					this->txtbx_designation->BackColor = System::Drawing::Color::White;
				}
				else {
					reussi = false;
					this->txtbx_designation->BackColor = System::Drawing::Color::Red;
				}
			}
			catch (System::FormatException^) {
				reussi = false;
				this->txtbx_designation->BackColor = System::Drawing::Color::Red;
			}
			//prixHT
			try {
				if (this->txtbx_prixHT->Text != "'" && this->txtbx_prixHT->Text->Replace("'", "") != "" && Convert::ToSingle(this->txtbx_prixHT->Text->Replace("'", "")) > 0) {
					prixHT = Convert::ToDecimal(this->txtbx_prixHT->Text->Replace("'", " "));
					this->txtbx_prixHT->BackColor = System::Drawing::Color::White;
				}
				else {
					reussi = false;
					this->txtbx_prixHT->BackColor = System::Drawing::Color::Red;
				}
			}
			catch (System::FormatException^) {
				reussi = false;
				this->txtbx_prixHT->BackColor = System::Drawing::Color::Red;
			}
			catch (System::OverflowException^) {
				reussi = false;
				this->txtbx_prixHT->BackColor = System::Drawing::Color::Red;
			}

			//TVA
			try {
				if (this->txtbx_TVA->Text != "'" && this->txtbx_TVA->Text->Replace("'", "") != "" && Convert::ToSingle(this->txtbx_TVA->Text->Replace("'", "")) > 0) {
					TVA = Convert::ToDecimal(this->txtbx_TVA->Text->Replace("'", " "));
					this->txtbx_TVA->BackColor = System::Drawing::Color::White;
				}
				else {
					reussi = false;
					this->txtbx_TVA->BackColor = System::Drawing::Color::Red;
				}
			}
			catch (System::FormatException^) {
				reussi = false;
				this->txtbx_TVA->BackColor = System::Drawing::Color::Red;
			}
			catch (System::OverflowException^) {
				reussi = false;
				this->txtbx_TVA->BackColor = System::Drawing::Color::Red;
			}
			//seuil_reaprovisionnement
			try {
				if (this->txtbx_seuil_reaprovisionnement->Text != "'" && this->txtbx_seuil_reaprovisionnement->Text->Replace("'", "") != "" && Convert::ToInt16(this->txtbx_seuil_reaprovisionnement->Text->Replace("'", "")) > 0) {
					seuil_reaprovisionnement = Convert::ToInt16(this->txtbx_seuil_reaprovisionnement->Text->Replace("'", " "));
					this->txtbx_seuil_reaprovisionnement->BackColor = System::Drawing::Color::White;
				}
				else {
					reussi = false;
					this->txtbx_seuil_reaprovisionnement->BackColor = System::Drawing::Color::Red;
				}
			}
			catch (System::FormatException^) {
				reussi = false;
				this->txtbx_seuil_reaprovisionnement->BackColor = System::Drawing::Color::Red;
			}
			catch (System::OverflowException^) {
				reussi = false;
				this->txtbx_seuil_reaprovisionnement->BackColor = System::Drawing::Color::Red;
			}
			//quantite_stock
			try {
				if (this->txtbx_quantite_stock->Text != "'" && this->txtbx_quantite_stock->Text->Replace("'", "") != "" && Convert::ToInt16(this->txtbx_quantite_stock->Text->Replace("'", "")) > 0) {
					quantite_stock = Convert::ToInt16(this->txtbx_quantite_stock->Text->Replace("'", " "));
					this->txtbx_quantite_stock->BackColor = System::Drawing::Color::White;
				}
				else {
					reussi = false;
					this->txtbx_quantite_stock->BackColor = System::Drawing::Color::Red;
				}
			}
			catch (System::FormatException^) {
				reussi = false;
				this->txtbx_quantite_stock->BackColor = System::Drawing::Color::Red;
			}
			catch (System::OverflowException^) {
				reussi = false;
				this->txtbx_quantite_stock->BackColor = System::Drawing::Color::Red;
			}
			//prix_achat
			try {
				if (this->txtbx_prix_achat->Text != "'" && this->txtbx_prix_achat->Text->Replace("'", "") != "" && Convert::ToSingle(this->txtbx_prix_achat->Text->Replace("'", "")) > 0) {
					prix_achat = Convert::ToDecimal(this->txtbx_prix_achat->Text->Replace("'", " "));
					this->txtbx_prix_achat->BackColor = System::Drawing::Color::White;
				}
				else {
					reussi = false;
					this->txtbx_prix_achat->BackColor = System::Drawing::Color::Red;
				}
			}
			catch (System::FormatException^) {
				reussi = false;
				this->txtbx_prix_achat->BackColor = System::Drawing::Color::Red;
			}
			catch (System::OverflowException^) {
				reussi = false;
				this->txtbx_prix_achat->BackColor = System::Drawing::Color::Red;
			}




			if (reussi) {
				ao->setDesignation(designation);
				ao->setPrixHT(prixHT);
				ao->setTVA(TVA);
				ao->setQuantiteStock(quantite_stock);
				ao->setSeuilReapprovisionnement(seuil_reaprovisionnement);
				ao->setPrixAchat(prix_achat);

				this->Close();
			}
		};
	};
}