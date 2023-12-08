#pragma once
#include "ArticleObject.h"
namespace Display {

	using namespace System::Windows;
	using namespace Object;

	/// <summary>
	/// Description r�sum�e de ViewPersonnel
	/// </summary>
	public ref class ViewArticleForm : public System::Windows::Forms::Form
	{
	public:
		ViewArticleForm(ArticleObject^ ao)
		{
			InitializeComponent(ao);
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~ViewArticleForm()
		{
			if (components)
			{
				delete components;
			}
		}
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
			this->SuspendLayout();
			// 
			// id personnel
			// 
			this->label_id_article->AutoSize = true;
			this->label_id_article->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_id_article->Location = System::Drawing::Point(15, 15);
			this->label_id_article->Size = System::Drawing::Size(235, 30);
			this->label_id_article->TabStop = true;
			this->label_id_article->Name = L"label_id_article";
			this->label_id_article->Text = L"id article";
			// 
			// view id personnel
			// 
			this->label_view_id_article->AutoSize = true;
			this->label_view_id_article->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_id_article->Location = System::Drawing::Point(250, 15);
			this->label_view_id_article->Size = System::Drawing::Size(235, 30);
			this->label_view_id_article->TabIndex = 1;
			this->label_view_id_article->Name = L"label_view_id_article";
			this->label_view_id_article->Text = ao->getIdArticle();
			// 
			// nom
			// 
			this->label_designation->AutoSize = true;
			this->label_designation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_designation->Location = System::Drawing::Point(15, 50); //15+30+5
			this->label_designation->Size = System::Drawing::Size(235, 30);
			this->label_designation->TabStop = true;
			this->label_designation->Name = L"label_designation";
			this->label_designation->Text = L"Nom";
			// 
			// view nom
			// 
			this->label_view_designation->AutoSize = true;
			this->label_view_designation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_designation->Location = System::Drawing::Point(250, 50);
			this->label_view_designation->Size = System::Drawing::Size(235, 30);
			this->label_view_designation->TabIndex = 2;
			this->label_view_designation->Name = L"label_view_designation";
			this->label_view_designation->Text = ao->getDesignation();
			// 
			// prenom
			// 
			this->label_prixHT->AutoSize = true;
			this->label_prixHT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_prixHT->Location = System::Drawing::Point(15, 85);//50+30+5
			this->label_prixHT->Size = System::Drawing::Size(235, 30);
			this->label_prixHT->TabStop = true;
			this->label_prixHT->Name = L"label_prixHT";
			this->label_prixHT->Text = L"PrixHT";
			// 
			// view prenom
			// 
			this->label_view_prixHT->AutoSize = true;
			this->label_view_prixHT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_prixHT->Location = System::Drawing::Point(250, 85);
			this->label_view_prixHT->Size = System::Drawing::Size(235, 30);
			this->label_view_prixHT->TabIndex = 3;
			this->label_view_prixHT->Name = L"label_view_prixHT";
			this->label_view_prixHT->Text = ao->getPrixHT();
			// 
			// id superieur
			// 
			this->label_quantite_stock->AutoSize = true;
			this->label_quantite_stock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_quantite_stock->Location = System::Drawing::Point(15, 120);//85+30+5
			this->label_quantite_stock->Size = System::Drawing::Size(235, 30);
			this->label_quantite_stock->TabStop = true;
			this->label_quantite_stock->Name = L"label_quantite_stock";
			this->label_quantite_stock->Text = L"TVA";
			// 
			// view id superieur
			// 
			this->label_view_quantite_stock->AutoSize = true;
			this->label_view_quantite_stock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_quantite_stock->Location = System::Drawing::Point(250, 120);
			this->label_view_quantite_stock->Size = System::Drawing::Size(235, 30);
			this->label_view_quantite_stock->TabIndex = 4;
			this->label_view_quantite_stock->Name = L"label_view_quantite_stock";
			this->label_view_quantite_stock->Text = ao->getTVA();
			// 
			// date embauche
			// 
			this->label_TVA->AutoSize = true;
			this->label_TVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_TVA->Location = System::Drawing::Point(15, 155); //120+30+5
			this->label_TVA->Size = System::Drawing::Size(235, 30);
			this->label_TVA->TabStop = true;
			this->label_TVA->Name = L"label_TVA";
			this->label_TVA->Text = L"Qte stock";
			// 
			// view date embauche
			// 
			this->label_view_TVA->AutoSize = true;
			this->label_view_TVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_TVA->Location = System::Drawing::Point(250, 155);
			this->label_view_TVA->Size = System::Drawing::Size(235, 30);
			this->label_view_TVA->TabIndex = 1;
			this->label_view_TVA->Name = L"label_view_TVA";
			this->label_view_TVA->Text = ao->getQuantiteStock();
			// 
			// id adresse
			// 
			this->label_seuil_reaprovisionnement->AutoSize = true;
			this->label_seuil_reaprovisionnement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_seuil_reaprovisionnement->Location = System::Drawing::Point(15, 190);//155+30+5
			this->label_seuil_reaprovisionnement->Size = System::Drawing::Size(235, 30);
			this->label_seuil_reaprovisionnement->TabStop = true;
			this->label_seuil_reaprovisionnement->Name = L"label_seuil_reaprovisionnement";
			this->label_seuil_reaprovisionnement->Text = L"reaprovisionnement";
			// 
			// view id adresse
			// 
			this->label_view_seuil_reaprovisionnement->AutoSize = true;
			this->label_view_seuil_reaprovisionnement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_seuil_reaprovisionnement->Location = System::Drawing::Point(250, 190);
			this->label_view_seuil_reaprovisionnement->Size = System::Drawing::Size(235, 30);
			this->label_view_seuil_reaprovisionnement->TabIndex = 1;
			this->label_view_seuil_reaprovisionnement->Name = L"label_view_seuil_reaprovisionnement";
			this->label_view_seuil_reaprovisionnement->Text = ao->getSeuilReapprovisionnement();
			//
			// prix achat
			//
			this->label_prix_achat->AutoSize = true;
			this->label_prix_achat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_prix_achat->Location = System::Drawing::Point(15, 225);
			this->label_prix_achat->Size = System::Drawing::Size(235, 30);
			this->label_prix_achat->TabStop = true;
			this->label_prix_achat->Name = L"label_prix_achat";
			this->label_prix_achat->Text = L"prix achat";
			//
			// view prix achat
			//
			this->label_view_prix_achat->AutoSize = true;
			this->label_view_prix_achat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_prix_achat->Location = System::Drawing::Point(250, 225);
			this->label_view_prix_achat->Size = System::Drawing::Size(235, 30);
			this->label_view_prix_achat->TabIndex = 1;
			this->label_view_prix_achat->Name = L"label_view_prix_achat";
			this->label_view_prix_achat->Text = ao->getPrixAchat();

			// 
			// ViewClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(400, 300);//190+30+5
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
			this->Load += gcnew System::EventHandler(this, &ViewArticleForm::ViewArticleLoad);
			this->ResumeLayout(false);
			this->PerformLayout();
			this->label_view_id_article->BorderStyle = Forms::BorderStyle::FixedSingle;
			this->label_view_designation->BorderStyle = Forms::BorderStyle::FixedSingle;
			this->label_view_prixHT->BorderStyle = Forms::BorderStyle::FixedSingle;
			this->label_view_quantite_stock->BorderStyle = Forms::BorderStyle::FixedSingle;
			this->label_view_TVA->BorderStyle = Forms::BorderStyle::FixedSingle;
			this->label_view_seuil_reaprovisionnement->BorderStyle = Forms::BorderStyle::FixedSingle;
			this->label_view_prix_achat->BorderStyle = Forms::BorderStyle::FixedSingle;


		}
#pragma endregion
	private: System::Void ViewArticleLoad(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}