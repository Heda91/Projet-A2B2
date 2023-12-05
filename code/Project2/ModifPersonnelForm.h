#pragma once
#include "PersonnelObject.h"
#include <iostream>
#include <string>

namespace Display {

	using namespace System::Windows;
	using namespace Object;

	/// <summary>
	/// Description r�sum�e de ViewPersonnel
	/// </summary>
	public ref class ModifPersonnelForm : public System::Windows::Forms::Form
	{
	public:
		ModifPersonnelForm(PersonnelObject^ po) { InitializeComponent(po); }

	protected:
		~ModifPersonnelForm() { if (components) { delete components; } }
		PersonnelObject^ po = nullptr;
	private:
		Forms::Label^ label_id_personnel;
		Forms::Label^ label_view_id_personnel;
		Forms::Label^ label_nom;
		Forms::TextBox^ txtbx_nom;
		Forms::Label^ label_prenom;
		Forms::TextBox^ txtbx_prenom;
		Forms::Label^ label_id_superieur;
		Forms::TextBox^ txtbx_id_superieur;
		Forms::Label^ label_date_embauche;
		Forms::TextBox^ txtbx_date_embauche;
		Forms::Label^ label_id_adresse;
		Forms::Label^ label_view_id_adresse;
		Forms::Button^ button_add_adresse;
		Forms::Button^ button_valid;

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(PersonnelObject^ po)
		{
			this->po = po;

			this->label_id_personnel = (gcnew System::Windows::Forms::Label());
			this->label_view_id_personnel = (gcnew System::Windows::Forms::Label());
			this->label_nom = (gcnew System::Windows::Forms::Label());
			this->txtbx_nom = (gcnew System::Windows::Forms::TextBox());
			this->label_prenom = (gcnew System::Windows::Forms::Label());
			this->txtbx_prenom = (gcnew System::Windows::Forms::TextBox());
			this->label_id_superieur = (gcnew System::Windows::Forms::Label());
			this->txtbx_id_superieur = (gcnew System::Windows::Forms::TextBox());
			this->label_date_embauche = (gcnew System::Windows::Forms::Label());
			this->txtbx_date_embauche = (gcnew System::Windows::Forms::TextBox());
			this->label_id_adresse = (gcnew System::Windows::Forms::Label());
			this->label_view_id_adresse = (gcnew System::Windows::Forms::Label());
			this->button_add_adresse = gcnew Forms::Button();
			this->button_valid = gcnew Forms::Button();
			this->SuspendLayout();
			// 
			// id personnel
			// 
			this->label_id_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_id_personnel->Location = System::Drawing::Point(15, 15);
			this->label_id_personnel->Size = System::Drawing::Size(220, 30);
			this->label_id_personnel->TabStop = true;
			this->label_id_personnel->Name = L"label_id_personnel";
			this->label_id_personnel->Text = L"id personnel";
			// 
			// view id personnel
			// 
			this->label_view_id_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_id_personnel->Location = System::Drawing::Point(250, 15);
			this->label_view_id_personnel->Size = System::Drawing::Size(220, 30);
			this->label_view_id_personnel->TabIndex = 1;
			this->label_view_id_personnel->Name = L"label_view_id_personnel";
			this->label_view_id_personnel->Text = po->getIdPersonnel();
			this->label_view_id_personnel->BorderStyle = Forms::BorderStyle::FixedSingle;
			// 
			// nom
			// 
			this->label_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nom->Location = System::Drawing::Point(15, 50); //15+30+5
			this->label_nom->Size = System::Drawing::Size(220, 30);
			this->label_nom->TabStop = true;
			this->label_nom->Name = L"label_nom";
			this->label_nom->Text = L"Nom";
			// 
			// view nom
			// 
			this->txtbx_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_nom->Location = System::Drawing::Point(250, 50);
			this->txtbx_nom->Size = System::Drawing::Size(220, 30);
			this->txtbx_nom->TabIndex = 2;
			this->txtbx_nom->Name = L"txtbx_nom";
			this->txtbx_nom->Text = po->getNom();
			// 
			// prenom
			// 
			this->label_prenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_prenom->Location = System::Drawing::Point(15, 85);//50+30+5
			this->label_prenom->Size = System::Drawing::Size(220, 30);
			this->label_prenom->TabStop = true;
			this->label_prenom->Name = L"label_prenom";
			this->label_prenom->Text = L"Prenom";
			// 
			// view prenom
			// 
			this->txtbx_prenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_prenom->Location = System::Drawing::Point(250, 85);
			this->txtbx_prenom->Size = System::Drawing::Size(220, 30);
			this->txtbx_prenom->TabIndex = 3;
			this->txtbx_prenom->Name = L"txtbx_prenom";
			this->txtbx_prenom->Text = po->getPrenom();
			// 
			// id superieur
			// 
			this->label_id_superieur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_id_superieur->Location = System::Drawing::Point(15, 120);//85+30+5
			this->label_id_superieur->Size = System::Drawing::Size(220, 30);
			this->label_id_superieur->TabStop = true;
			this->label_id_superieur->Name = L"label_id_superieur";
			this->label_id_superieur->Text = L"Id Superieur";
			// 
			// view id superieur
			// 
			this->txtbx_id_superieur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_id_superieur->Location = System::Drawing::Point(250, 120);
			this->txtbx_id_superieur->Size = System::Drawing::Size(220, 30);
			this->txtbx_id_superieur->TabIndex = 4;
			this->txtbx_id_superieur->Name = L"txtbx_id_superieur";
			this->txtbx_id_superieur->Text = po->getIdSuperieur()=="NULL"?"":po->getIdSuperieur();
			// 
			// date embauche
			// 
			this->label_date_embauche->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_date_embauche->Location = System::Drawing::Point(15, 155); //120+30+5
			this->label_date_embauche->Size = System::Drawing::Size(220, 30);
			this->label_date_embauche->TabStop = true;
			this->label_date_embauche->Name = L"label_date_embauche";
			this->label_date_embauche->Text = L"Date Embauche";
			// 
			// view date embauche
			// 
			this->txtbx_date_embauche->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_date_embauche->Location = System::Drawing::Point(250, 155);
			this->txtbx_date_embauche->Size = System::Drawing::Size(220, 30);
			this->txtbx_date_embauche->TabIndex = 5;
			this->txtbx_date_embauche->Name = L"txtbx_date_embauche";
			this->txtbx_date_embauche->Text = po->getDateEmbauche()=="NULL"?"":po->getDateEmbauche();
			// 
			// id adresse
			// 
			this->label_id_adresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_id_adresse->Location = System::Drawing::Point(15, 190);//155+30+5
			this->label_id_adresse->Size = System::Drawing::Size(220, 30);
			this->label_id_adresse->TabStop = true;
			this->label_id_adresse->Name = L"label_id_adresse";
			this->label_id_adresse->Text = L"Adresse";
			// 
			// view id adresse
			// 
			this->label_view_id_adresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_id_adresse->Location = System::Drawing::Point(250, 190);
			this->label_view_id_adresse->Size = System::Drawing::Size(185, 30);
			this->label_view_id_adresse->TabIndex = 6;
			this->label_view_id_adresse->Name = L"txtbx_id_adresse";
			this->label_view_id_adresse->Text = "En attente";
			this->label_view_id_adresse->BorderStyle = Forms::BorderStyle::FixedSingle;
			//
			// button add adresse
			// 
			this->button_add_adresse->Location = System::Drawing::Point(440, 190);
			this->button_add_adresse->Margin = Forms::Padding(1);
			this->button_add_adresse->Size = System::Drawing::Size(30, 30);
			this->button_add_adresse->UseVisualStyleBackColor = true;
			this->button_add_adresse->Name = L"button_add_adresse";
			this->button_add_adresse->Text = L"+";
			this->button_add_adresse->TabIndex = 7;
			this->button_add_adresse->Click += gcnew System::EventHandler(this, &Display::ModifPersonnelForm::buttonAddAdresseClick);
			//
			// valider
			// 
			this->button_valid->Location = System::Drawing::Point(370, 230);
			this->button_valid->Margin = Forms::Padding(1);
			this->button_valid->Size = System::Drawing::Size(100, 30);
			this->button_valid->UseVisualStyleBackColor = true;
			this->button_valid->Name = L"button_valid";
			this->button_valid->Text = L"Valider";
			this->button_valid->TabIndex = 8;
			this->button_valid->Click += gcnew System::EventHandler(this, &Display::ModifPersonnelForm::buttonValidClick);
			// 
			// ViewClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Size = System::Drawing::Size(500, 300);//190+30+5
			this->MinimumSize = this->Size;
			this->MaximumSize = this->Size;
			this->Controls->Add(this->label_id_personnel);
			this->Controls->Add(this->label_view_id_personnel);
			this->Controls->Add(this->label_nom);
			this->Controls->Add(this->txtbx_nom);
			this->Controls->Add(this->label_prenom);
			this->Controls->Add(this->txtbx_prenom);
			this->Controls->Add(this->label_id_superieur);
			this->Controls->Add(this->txtbx_id_superieur);
			this->Controls->Add(this->label_date_embauche);
			this->Controls->Add(this->txtbx_date_embauche);
			this->Controls->Add(this->label_id_adresse);
			this->Controls->Add(this->label_view_id_adresse);
			this->Controls->Add(this->button_add_adresse);
			this->Controls->Add(this->button_valid);
			this->Name = L"ModifPersonnelForm";
			this->Text = L"Personnel : "+po->getNom()+" "+po->getPrenom();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void buttonValidClick(System::Object^ sender, System::EventArgs^ e) {
			bool reussi = true;
			int id_sup=0, id_ad=0;
			DateTime date;
			//id_superieur
			try { 
				int id_sup = Convert::ToInt32(this->txtbx_id_superieur->Text == "" ? "0" : txtbx_id_superieur->Text); //si rien est mis -> mettre a NULL
				//regarde si l'id_superieur existe
				this->txtbx_id_superieur->BackColor = System::Drawing::Color::White;
			}
			catch (System::FormatException^) { 
				reussi = false;
				this->txtbx_id_superieur->BackColor = System::Drawing::Color::Red;
			}
			//date embauche
			try {
				date = Convert::ToDateTime(this->txtbx_date_embauche->Text);
				this->txtbx_date_embauche->BackColor = System::Drawing::Color::White;
			}
			catch (System::FormatException^){
				reussi = false;
				this->txtbx_date_embauche->BackColor = System::Drawing::Color::Red;
			}
			//id_adresse
			//set id adresse

			if (reussi) { 
				po->setNom(this->txtbx_nom->Text);
				po->setPrenom(this->txtbx_prenom->Text);
				po->setIdSuperieur(id_sup);
				po->setDateEmbauche(date);
				//set id_adresse
				this->Close();
			}
		};
		void buttonAddAdresseClick(System::Object^ sender, System::EventArgs^ e){}
	};
}
