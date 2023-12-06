#pragma once
#include "ClientObject.h"

namespace Display {

	using namespace System::Windows;
	using namespace Object;

	public ref class ViewClientForm : public System::Windows::Forms::Form
	{
	public:
		ViewClientForm(ClientObject^ co) { InitializeComponent(co); }

	protected:
		~ViewClientForm() { if (components) { delete components; } }
	private:
		Forms::Label^ label_numero_client;
		Forms::Label^ label_view_numero_client;
		Forms::Label^ label_nom;
		Forms::Label^ label_view_nom;
		Forms::Label^ label_prenom;
		Forms::Label^ label_view_prenom;
		Forms::Label^ label_date_naissance;
		Forms::Label^ label_view_date_naissance;
		Forms::Label^ label_adresse_livraison;
		Forms::ComboBox^ cbobx_adresse_livraison;
		Forms::Label^ label_adresse_emission;
		Forms::ComboBox^ cbobx_adresse_emission;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(ClientObject^ co)
		{
			this->label_numero_client = (gcnew System::Windows::Forms::Label());
			this->label_view_numero_client = (gcnew System::Windows::Forms::Label());
			this->label_nom = (gcnew System::Windows::Forms::Label());
			this->label_view_nom = (gcnew System::Windows::Forms::Label());
			this->label_prenom = (gcnew System::Windows::Forms::Label());
			this->label_view_prenom = (gcnew System::Windows::Forms::Label());
			this->label_date_naissance = (gcnew System::Windows::Forms::Label());
			this->label_view_date_naissance = (gcnew System::Windows::Forms::Label());
			this->label_adresse_livraison = (gcnew System::Windows::Forms::Label());
			this->cbobx_adresse_livraison = (gcnew System::Windows::Forms::ComboBox());
			this->label_adresse_emission = (gcnew System::Windows::Forms::Label());
			this->cbobx_adresse_emission = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			//set size
			const int size_x = 220;
			const int size_x_view = 400;
			const int size_y = 30;
			const int pos_x = 15;
			const int pos_y_start = 15;
			const int step_y = 15;
			const int pos_x_view = 15+pos_x+size_x;
			const int size_x_form = 30 + pos_x_view + size_x_view;
			const int size_y_form = 7 * (size_y + step_y) + pos_y_start;
			// 
			// numero client
			// 
			this->label_numero_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_numero_client->Location = System::Drawing::Point(pos_x, pos_y_start);
			this->label_numero_client->Size = System::Drawing::Size(size_x, size_y);
			this->label_numero_client->TabStop = true;
			this->label_numero_client->Name = L"label_numero_client";
			this->label_numero_client->Text = L"numero client";
			// 
			// view numero client
			// 
			this->label_view_numero_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_numero_client->Location = System::Drawing::Point(pos_x_view, pos_y_start);
			this->label_view_numero_client->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_numero_client->TabIndex = 1;
			this->label_view_numero_client->Name = L"label_view_numero_client";
			this->label_view_numero_client->Text = co->getNumeroClient();
			this->label_view_numero_client->BorderStyle = Forms::BorderStyle::FixedSingle;
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
			this->label_view_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_nom->Location = System::Drawing::Point(pos_x_view, 1 * (size_y + step_y) + pos_y_start);
			this->label_view_nom->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_nom->TabIndex = 2;
			this->label_view_nom->Name = L"label_view_nom";
			this->label_view_nom->Text = co->getNom();
			this->label_view_nom->BorderStyle = Forms::BorderStyle::FixedSingle;
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
			this->label_view_prenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_prenom->Location = System::Drawing::Point(pos_x_view, 2 * (size_y + step_y) + pos_y_start);
			this->label_view_prenom->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_prenom->TabIndex = 3;
			this->label_view_prenom->Name = L"label_view_prenom";
			this->label_view_prenom->Text = co->getPrenom();
			this->label_view_prenom->BorderStyle = Forms::BorderStyle::FixedSingle;
			// 
			// id superieur
			// 
			this->label_date_naissance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_date_naissance->Location = System::Drawing::Point(pos_x, 3 * (size_y + step_y) + pos_y_start);//85+30+5
			this->label_date_naissance->Size = System::Drawing::Size(size_x, size_y);
			this->label_date_naissance->TabStop = true;
			this->label_date_naissance->Name = L"label_date_naissance";
			this->label_date_naissance->Text = L"Date de naissance";
			// 
			// view id superieur
			// 
			this->label_view_date_naissance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_date_naissance->Location = System::Drawing::Point(pos_x_view, 3 * (size_y + step_y) + pos_y_start);
			this->label_view_date_naissance->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_date_naissance->TabIndex = 4;
			this->label_view_date_naissance->Name = L"label_view_date_naissance";
			this->label_view_date_naissance->Text = co->getDateNaissanceAff();
			this->label_view_date_naissance->BorderStyle = Forms::BorderStyle::FixedSingle;
			// 
			// date embauche
			// 
			this->label_adresse_livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_adresse_livraison->Location = System::Drawing::Point(pos_x, 4 * (size_y + step_y) + pos_y_start); //120+30+5
			this->label_adresse_livraison->Size = System::Drawing::Size(size_x, size_y);
			this->label_adresse_livraison->TabStop = true;
			this->label_adresse_livraison->Name = L"label_adresse_livraison";
			this->label_adresse_livraison->Text = L"Ad. Livraison";
			// 
			// view date embauche
			// 
			this->cbobx_adresse_livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbobx_adresse_livraison->Location = System::Drawing::Point(pos_x_view, 4 * (size_y + step_y) + pos_y_start);
			this->cbobx_adresse_livraison->Size = System::Drawing::Size(size_x_view, size_y);
			this->cbobx_adresse_livraison->TabIndex = 5;
			this->cbobx_adresse_livraison->Name = L"cbobx_adresse_livraison";
			for each (AdressObject ^ adresse in co->getAdresseLivraison()) {
				this->cbobx_adresse_livraison->Items->Add(adresse->ToString());
			}
			this->cbobx_adresse_livraison->DropDownStyle = Forms::ComboBoxStyle::DropDownList;
			this->cbobx_adresse_livraison->SelectedIndex = 0;
			// 
			// id adresse
			// 
			this->label_adresse_emission->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_adresse_emission->Location = System::Drawing::Point(pos_x, 5 * (size_y + step_y) + pos_y_start);//155+30+5
			this->label_adresse_emission->Size = System::Drawing::Size(size_x, size_y);
			this->label_adresse_emission->TabStop = true;
			this->label_adresse_emission->Name = L"label_adresse_emission";
			this->label_adresse_emission->Text = L"Ad. Emission";
			// 
			// view id adresse
			// 
			this->cbobx_adresse_emission->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbobx_adresse_emission->Location = System::Drawing::Point(pos_x_view, 5 * (size_y + step_y) + pos_y_start);
			this->cbobx_adresse_emission->Size = System::Drawing::Size(size_x_view, size_y);
			this->cbobx_adresse_emission->TabIndex = 6;
			this->cbobx_adresse_emission->Name = L"label_view_id_adresse";
			for each (AdressObject ^ adresse in co->getAdresseEmission()) {
				this->cbobx_adresse_emission->Items->Add(adresse->ToString());
			}
			this->cbobx_adresse_emission->DropDownStyle = Forms::ComboBoxStyle::DropDownList;
			this->cbobx_adresse_emission->SelectedIndex = 0;
			// 
			// ViewClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Size = System::Drawing::Size(size_x_form, size_y_form);//190+30+5
			this->MinimumSize = this->Size;
			this->MaximumSize = this->Size;
			this->Controls->Add(this->label_numero_client);
			this->Controls->Add(this->label_view_numero_client);
			this->Controls->Add(this->label_nom);
			this->Controls->Add(this->label_view_nom);
			this->Controls->Add(this->label_prenom);
			this->Controls->Add(this->label_view_prenom);
			this->Controls->Add(this->label_date_naissance);
			this->Controls->Add(this->label_view_date_naissance);
			this->Controls->Add(this->label_adresse_livraison);
			this->Controls->Add(this->cbobx_adresse_livraison);
			this->Controls->Add(this->label_adresse_emission);
			this->Controls->Add(this->cbobx_adresse_emission);
			this->Name = L"ViewClientForm";
			this->Text = L"Client: " + co->getNom() + " " + co->getPrenom();
			this->Load += gcnew System::EventHandler(this, &ViewClientForm::ViewClientLoad);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ViewClientLoad(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
