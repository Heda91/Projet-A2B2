#pragma once
#include "PersonnelObject.h"
#include "AddAdressForm.h"
#include "PersonnelAddSuperieurForm.h"
#include <iostream>
#include <string>

namespace Display {

	using namespace System::Windows;
	using namespace Object;
	using namespace System;

	/// <summary>
	/// Description r�sum�e de ViewPersonnel
	/// </summary>
	public ref class ModifPersonnelForm : public System::Windows::Forms::Form
	{
	public:
		ModifPersonnelForm(BDD^ bdd, PersonnelObject^ po) { InitializeComponent(po); this->bdd = bdd; }
		BDD^ bdd = nullptr;
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
		Forms::Label^ label_view_id_superieur;
		Forms::Button^ button_id_superieur;
		Forms::Label^ label_date_embauche;
		Forms::TextBox^ txtbx_date_embauche;
		Forms::Label^ label_adresse;
		Forms::Label^ label_view_adresse;
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
			this->label_view_id_superieur = (gcnew System::Windows::Forms::Label());
			this->button_id_superieur = gcnew Forms::Button();
			this->label_date_embauche = (gcnew System::Windows::Forms::Label());
			this->txtbx_date_embauche = (gcnew System::Windows::Forms::TextBox());
			this->label_adresse = (gcnew System::Windows::Forms::Label());
			this->label_view_adresse = (gcnew System::Windows::Forms::Label());
			this->button_add_adresse = gcnew Forms::Button();
			this->button_valid = gcnew Forms::Button();
			this->SuspendLayout();
			//set size
			const int size_x = 220;
			const int size_x_view = 400;
			const int size_y = 30;
			const int pos_x = 15;
			const int pos_y_start = 15;
			const int step_y = 15;
			const int size_x_valid = 100;
			const int step_x_btn = 5;
			const int pos_x_view = 15 + pos_x + size_x;
			const int size_x_form = 30 + pos_x_view + size_x_view;
			const int size_y_form = 8 * (size_y + step_y) + pos_y_start;
			// 
			// id personnel
			// 
			this->label_id_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_id_personnel->Location = System::Drawing::Point(pos_x, pos_y_start);
			this->label_id_personnel->Size = System::Drawing::Size(size_x, size_y);
			this->label_id_personnel->TabStop = true;
			this->label_id_personnel->Name = L"label_id_personnel";
			this->label_id_personnel->Text = L"id personnel";
			// 
			// view id personnel
			// 
			this->label_view_id_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_id_personnel->Location = System::Drawing::Point(pos_x_view, pos_y_start);
			this->label_view_id_personnel->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_id_personnel->TabIndex = 1;
			this->label_view_id_personnel->Name = L"label_view_id_personnel";
			this->label_view_id_personnel->Text = po->getIdPersonnel();
			this->label_view_id_personnel->BorderStyle = Forms::BorderStyle::FixedSingle;
			// 
			// nom
			// 
			this->label_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nom->Location = System::Drawing::Point(pos_x, 1 * (size_y + step_y) + pos_y_start); //15+30+5
			this->label_nom->Size = System::Drawing::Size(size_x, size_y);
			this->label_nom->TabStop = true;
			this->label_nom->Name = L"label_nom";
			this->label_nom->Text = L"Nom";
			// 
			// view nom
			// 
			this->txtbx_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_nom->Location = System::Drawing::Point(pos_x_view, 1 * (size_y + step_y) + pos_y_start);
			this->txtbx_nom->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_nom->TabIndex = 2;
			this->txtbx_nom->Name = L"txtbx_nom";
			this->txtbx_nom->Text = po->getNom();
			// 
			// prenom
			// 
			this->label_prenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_prenom->Location = System::Drawing::Point(pos_x, 2 * (size_y + step_y) + pos_y_start);//50+30+5
			this->label_prenom->Size = System::Drawing::Size(size_x, size_y);
			this->label_prenom->TabStop = true;
			this->label_prenom->Name = L"label_prenom";
			this->label_prenom->Text = L"Prenom";
			// 
			// view prenom
			// 
			this->txtbx_prenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_prenom->Location = System::Drawing::Point(pos_x_view, 2 * (size_y + step_y) + pos_y_start);
			this->txtbx_prenom->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_prenom->TabIndex = 3;
			this->txtbx_prenom->Name = L"txtbx_prenom";
			this->txtbx_prenom->Text = po->getPrenom();
			// 
			// id superieur
			// 
			this->label_id_superieur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_id_superieur->Location = System::Drawing::Point(pos_x, 3 * (size_y + step_y) + pos_y_start);//85+30+5
			this->label_id_superieur->Size = System::Drawing::Size(size_x, size_y);
			this->label_id_superieur->TabStop = true;
			this->label_id_superieur->Name = L"label_id_superieur";
			this->label_id_superieur->Text = L"Id Superieur";
			// 
			// view id superieur
			// 
			this->label_view_id_superieur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_id_superieur->Location = System::Drawing::Point(pos_x_view, 3 * (size_y + step_y) + pos_y_start);
			this->label_view_id_superieur->Size = System::Drawing::Size(size_x_view-size_x_valid, size_y);
			this->label_view_id_superieur->Name = L"label_view_id_superieur";
			this->label_view_id_superieur->Text = po->getIdSuperieur()=="NULL"?"":po->getIdSuperieur();
			this->label_view_id_superieur->BorderStyle = Forms::BorderStyle::FixedSingle;
			//
			// button id superieur
			// 
			this->button_id_superieur->Location = System::Drawing::Point(pos_x_view + size_x_view - size_x_valid, 3 * (size_y + step_y) + pos_y_start);
			this->button_id_superieur->Margin = Forms::Padding(1);
			this->button_id_superieur->Size = System::Drawing::Size(size_x_valid, size_y);
			this->button_id_superieur->UseVisualStyleBackColor = true;
			this->button_id_superieur->Name = L"button_id_superieur";
			this->button_id_superieur->Text = L"Modifier";
			this->button_id_superieur->TabIndex = 4;
			this->button_id_superieur->Click += gcnew System::EventHandler(this, &Display::ModifPersonnelForm::buttonAddPersonnel);
			// 
			// date embauche
			// 
			this->label_date_embauche->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_date_embauche->Location = System::Drawing::Point(pos_x, 4 * (size_y + step_y) + pos_y_start); //120+30+5
			this->label_date_embauche->Size = System::Drawing::Size(size_x, size_y);
			this->label_date_embauche->TabStop = true;
			this->label_date_embauche->Name = L"label_date_embauche";
			this->label_date_embauche->Text = L"Date Embauche";
			// 
			// view date embauche
			// 
			this->txtbx_date_embauche->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_date_embauche->Location = System::Drawing::Point(pos_x_view, 4 * (size_y + step_y) + pos_y_start);
			this->txtbx_date_embauche->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_date_embauche->TabIndex = 5;
			this->txtbx_date_embauche->Name = L"txtbx_date_embauche";
			this->txtbx_date_embauche->Text = po->getDateEmbaucheAff()=="NULL"?"":po->getDateEmbaucheAff();
			// 
			// id adresse
			// 
			this->label_adresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_adresse->Location = System::Drawing::Point(pos_x, 5 * (size_y + step_y) + pos_y_start);//155+30+5
			this->label_adresse->Size = System::Drawing::Size(size_x, size_y);
			this->label_adresse->TabStop = true;
			this->label_adresse->Name = L"label_id_adresse";
			this->label_adresse->Text = L"Adresse";
			// 
			// view id adresse
			// 
			this->label_view_adresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_adresse->Location = System::Drawing::Point(pos_x_view, 5 * (size_y + step_y) + pos_y_start);
			this->label_view_adresse->Size = System::Drawing::Size(size_x_view-size_y-step_x_btn, size_y);
			this->label_view_adresse->TabIndex = 6;
			this->label_view_adresse->Name = L"txtbx_id_adresse";
			this->label_view_adresse->Text = po->getAdresse();
			this->label_view_adresse->AutoEllipsis = true;
			this->label_view_adresse->BorderStyle = Forms::BorderStyle::FixedSingle;
			//
			// button add adresse
			// 
			this->button_add_adresse->Location = System::Drawing::Point(pos_x_view+size_x_view-size_y, 5 * (size_y + step_y) + pos_y_start);
			this->button_add_adresse->Margin = Forms::Padding(1);
			this->button_add_adresse->Size = System::Drawing::Size(size_y, size_y);
			this->button_add_adresse->UseVisualStyleBackColor = true;
			this->button_add_adresse->Name = L"button_add_adresse";
			this->button_add_adresse->Text = L"+";
			this->button_add_adresse->TabIndex = 7;
			this->button_add_adresse->Click += gcnew System::EventHandler(this, &Display::ModifPersonnelForm::buttonAddAdresseClick);
			//
			// valider
			// 
			this->button_valid->Location = System::Drawing::Point(pos_x_view + size_x_view - size_x_valid, 6 * (size_y + step_y) + pos_y_start);
			this->button_valid->Margin = Forms::Padding(1);
			this->button_valid->Size = System::Drawing::Size(size_x_valid, size_y);
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
			this->Size = System::Drawing::Size(size_x_form, size_y_form);//190+30+5
			this->MinimumSize = this->Size;
			this->MaximumSize = this->Size;
			this->Controls->Add(this->label_id_personnel);
			this->Controls->Add(this->label_view_id_personnel);
			this->Controls->Add(this->label_nom);
			this->Controls->Add(this->txtbx_nom);
			this->Controls->Add(this->label_prenom);
			this->Controls->Add(this->txtbx_prenom);
			this->Controls->Add(this->label_id_superieur);
			this->Controls->Add(this->label_view_id_superieur);
			this->Controls->Add(this->button_id_superieur);
			this->Controls->Add(this->label_date_embauche);
			this->Controls->Add(this->txtbx_date_embauche);
			this->Controls->Add(this->label_adresse);
			this->Controls->Add(this->label_view_adresse);
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
			int id_ad=0;
			String^ nom = "";
			String^ prenom = "";
			DateTime date;

			//nom
			try {
				if (this->txtbx_nom->Text != "'" && this->txtbx_nom->Text->Replace("'", "") != ""){
				nom = this->txtbx_nom->Text->Replace("'"," ");
				this->txtbx_nom->BackColor = System::Drawing::Color::White;
				}
				else {
					reussi = false;
					this->txtbx_nom->BackColor = System::Drawing::Color::Red;
				}
			}
			catch (System::FormatException^) {
				reussi = false;
				this->txtbx_nom->BackColor = System::Drawing::Color::Red;
			}

			// prenom
			try {
				if (this->txtbx_prenom->Text != "'" && this->txtbx_prenom->Text->Replace("'", "") != "") {
					prenom = this->txtbx_prenom->Text->Replace("'", " ");
					this->txtbx_prenom->BackColor = System::Drawing::Color::White;
				}
				else {
					reussi = false;
					this->txtbx_prenom->BackColor = System::Drawing::Color::Red;
				}
			}
			catch (System::FormatException^) {
				reussi = false;
				this->txtbx_prenom->BackColor = System::Drawing::Color::Red;
			}
			//date embauche
			try {
				if (this->txtbx_date_embauche->Text != "'" && this->txtbx_date_embauche->Text->Replace("'", "") != "" && Convert::ToSingle(this->label_view_id_superieur->Text->Replace("'", "")) > 0) {
					date = Convert::ToDateTime(this->txtbx_date_embauche->Text == "" ? "01/01/2000" : txtbx_date_embauche->Text);
					this->txtbx_date_embauche->BackColor = System::Drawing::Color::White;
				}
				else {
					reussi = false;
					this->txtbx_date_embauche->BackColor = System::Drawing::Color::Red;
				}
			}
			catch (System::FormatException^) {
				reussi = false;
				this->txtbx_date_embauche->BackColor = System::Drawing::Color::Red;
			}
			//adresse
			if (po->getAdresseVar()->getNumero() == "0") {//dans le cas du "Add" regarde si il a modifie l'adresse
				reussi = false;
				this->label_view_adresse->BackColor = System::Drawing::Color::Red;
			}
			else { this->label_view_adresse->BackColor = System::Drawing::Color::White; }
			if (reussi) { 
				po->setNom(nom);
				po->setPrenom(prenom);
				po->setDateEmbauche(date);
				//adresse deja valider
				this->Close();
			}
		};
		void buttonAddAdresseClick(System::Object^ sender, System::EventArgs^ e){
			AdressObject^ adress_obj = gcnew AdressObject();
			AddAdressForm^ add_adress_form = gcnew AddAdressForm(adress_obj);
			add_adress_form->ShowDialog();
			if (adress_obj->getNumero()!="0"){
				po->setAdresse(adress_obj);
				this->label_view_adresse->Text = po->getAdresse();
				this->Refresh();
			}//adresse créer
		}
		void buttonAddPersonnel(System::Object^ sender, System::EventArgs^ e) {
			PersonnelAddSuperieur^ pas = gcnew PersonnelAddSuperieur(this->bdd, this->po);
			pas->ShowDialog();
			this->label_view_id_superieur->Text = this->po->getIdSuperieur();
		}
	};
}
