#pragma once
#include "ArticleObject.h"
namespace Display {

	using namespace System::Windows;
	using namespace Object;

	public ref class ViewArticleForm : public System::Windows::Forms::Form
	{
	public:
		ViewArticleForm(ArticleObject^ ao) { InitializeComponent(ao); }

	protected:
		~ViewArticleForm() { if (components) { delete components; } }
		ArticleObject^ ao;
	private:
		Forms::Label^ label_id_article;
		Forms::Label^ label_view_id_article;
		Forms::Label^ label_designation;
		Forms::Label^ label_view_designation;
		Forms::Label^ label_prixHT;
		Forms::Label^ label_view_prixHT;
		Forms::Label^ label_TVA;
		Forms::Label^ label_view_TVA;
		Forms::Label^ label_quantite_stock;
		Forms::Label^ label_view_quantite_stock;
		Forms::Label^ label_seuil_reaprovisionnement;
		Forms::Label^ label_view_seuil_reaprovisionnement;
		Forms::Label^ label_prix_achat;
		Forms::Label^ label_view_prix_achat;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(ArticleObject^ ao)
		{
			this->ao = ao;

			this->label_id_article = (gcnew System::Windows::Forms::Label());
			this->label_view_id_article = (gcnew System::Windows::Forms::Label());
			this->label_designation = (gcnew System::Windows::Forms::Label());
			this->label_view_designation = (gcnew System::Windows::Forms::Label());
			this->label_prixHT = (gcnew System::Windows::Forms::Label());
			this->label_view_prixHT = (gcnew System::Windows::Forms::Label());
			this->label_TVA = (gcnew System::Windows::Forms::Label());
			this->label_view_TVA = (gcnew System::Windows::Forms::Label());
			this->label_quantite_stock = (gcnew System::Windows::Forms::Label());
			this->label_view_quantite_stock = (gcnew System::Windows::Forms::Label());
			this->label_seuil_reaprovisionnement = (gcnew System::Windows::Forms::Label());
			this->label_view_seuil_reaprovisionnement = (gcnew System::Windows::Forms::Label());
			this->label_prix_achat = (gcnew System::Windows::Forms::Label());
			this->label_view_prix_achat = (gcnew System::Windows::Forms::Label());

			const int size_x = 230;
			const int size_x_view = 250;
			const int size_y = 30;
			const int pos_x = 15;
			const int pos_y_start = 15;
			const int step_y = 15;
			const int size_x_valid = 100;
			const int pos_x_view = 15 + pos_x + size_x;
			const int size_x_form = 30 + pos_x_view + size_x_view;
			const int size_y_form = 7 * (size_y + step_y) + pos_y_start;

			this->SuspendLayout();
			// 
			// id personnel
			// 
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
			this->label_view_id_article->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_id_article->Location = System::Drawing::Point(pos_x_view, pos_y_start);
			this->label_view_id_article->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_id_article->TabIndex = 1;
			this->label_view_id_article->Name = L"label_view_id_article";
			this->label_view_id_article->Text = ao->getIdArticle();
			this->label_view_id_article->BorderStyle = Forms::BorderStyle::FixedSingle;
			// 
			// nom
			// 
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
			this->label_view_designation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_designation->Location = System::Drawing::Point(pos_x_view, 1 * (size_y + step_y) + pos_y_start);
			this->label_view_designation->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_designation->TabIndex = 2;
			this->label_view_designation->Name = L"label_view_designation";
			this->label_view_designation->Text = ao->getDesignation();
			this->label_view_designation->BorderStyle = Forms::BorderStyle::FixedSingle;
			// 
			// prenom
			// 
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
			this->label_view_prixHT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_prixHT->Location = System::Drawing::Point(pos_x_view, 2 * (size_y + step_y) + pos_y_start);
			this->label_view_prixHT->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_prixHT->TabIndex = 3;
			this->label_view_prixHT->Name = L"label_view_prixHT";
			this->label_view_prixHT->Text = ao->getPrixHT() == "0" ? "" : ao->getPrixHT();
			this->label_view_prixHT->BorderStyle = Forms::BorderStyle::FixedSingle;
			// 
			// id superieur
			// 
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
			this->label_view_quantite_stock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_quantite_stock->Location = System::Drawing::Point(pos_x_view, 3 * (size_y + step_y) + pos_y_start);
			this->label_view_quantite_stock->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_quantite_stock->TabIndex = 4;
			this->label_view_quantite_stock->Name = L"label_view_quantite_stock";
			this->label_view_quantite_stock->Text = ao->getQuantiteStock() == "0" ? "" : ao->getQuantiteStock();
			this->label_view_quantite_stock->BorderStyle = Forms::BorderStyle::FixedSingle;
			// 
			// date embauche
			// 
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
			this->label_view_TVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_TVA->Location = System::Drawing::Point(pos_x_view, 4 * (size_y + step_y) + pos_y_start);
			this->label_view_TVA->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_TVA->TabIndex = 5;
			this->label_view_TVA->Name = L"label_view_TVA";
			this->label_view_TVA->Text = ao->getTVA() == "0" ? "" : ao->getTVA();
			this->label_view_TVA->BorderStyle = Forms::BorderStyle::FixedSingle;
			// 
			// id adresse
			// 
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
			this->label_view_seuil_reaprovisionnement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_seuil_reaprovisionnement->Location = System::Drawing::Point(pos_x_view, 5 * (size_y + step_y) + pos_y_start);
			this->label_view_seuil_reaprovisionnement->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_seuil_reaprovisionnement->TabIndex = 6;
			this->label_view_seuil_reaprovisionnement->Name = L"label_view_seuil_reaprovisionnement";
			this->label_view_seuil_reaprovisionnement->Text = ao->getSeuilReapprovisionnement() == "0" ? "" : ao->getSeuilReapprovisionnement();
			this->label_view_seuil_reaprovisionnement->BorderStyle = Forms::BorderStyle::FixedSingle;
			//
			// prix achat
			//
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
			this->label_view_prix_achat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_prix_achat->Location = System::Drawing::Point(pos_x_view, 6 * (size_y + step_y) + pos_y_start);
			this->label_view_prix_achat->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_prix_achat->TabIndex = 7;
			this->label_view_prix_achat->Name = L"label_view_prix_achat";
			this->label_view_prix_achat->Text = ao->getPrixAchat() == "0" ? "" : ao->getPrixAchat();
			this->label_view_prix_achat->BorderStyle = Forms::BorderStyle::FixedSingle;
			// 
			// ViewClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(size_x_form, size_y_form);//190+30+5
			this->Controls->Add(this->label_id_article);
			this->Controls->Add(this->label_view_id_article);
			this->Controls->Add(this->label_designation);
			this->Controls->Add(this->label_view_designation);
			this->Controls->Add(this->label_prixHT);
			this->Controls->Add(this->label_view_prixHT);
			this->Controls->Add(this->label_quantite_stock);
			this->Controls->Add(this->label_view_quantite_stock);
			this->Controls->Add(this->label_TVA);
			this->Controls->Add(this->label_view_TVA);
			this->Controls->Add(this->label_seuil_reaprovisionnement);
			this->Controls->Add(this->label_view_seuil_reaprovisionnement);
			this->Controls->Add(this->label_prix_achat);
			this->Controls->Add(this->label_view_prix_achat);

			this->Name = L"ViewArticleForm";
			this->Text = L"ViewArticle";
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	};
}