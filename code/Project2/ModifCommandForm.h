#pragma once
#include "CommandObject.h"
#include <iostream>
#include <string>

namespace Display {

	using namespace System::Windows;
	using namespace Object;

	/// <summary>
	/// Description r sum e de ViewPersonnel
	/// </summary>
	public ref class ModifCommandForm : public System::Windows::Forms::Form
	{
	public:
		ModifCommandForm(CommandObject^ co) { InitializeComponent(co); }

	protected:
		~ModifCommandForm() { if (components) { delete components; } }
		CommandObject^ co = nullptr;
	private:
		Forms::Label^ label_reference_commande;
		Forms::Label^ label_view_reference_commande;
		Forms::Label^ label_date_livraison;
		Forms::TextBox^ txtbx_date_livraison;
		Forms::Label^ label_date_emission;
		Forms::TextBox^ txtbx_date_emission;
		Forms::Label^ label_remise;
		Forms::TextBox^ txtbx_remise;
		Forms::Label^ label_total_commande;
		Forms::TextBox^ txtbx_total_commande;
		Forms::Label^ label_retrait;
		Forms::TextBox^ txtbx_retrait;
		Forms::Label^ label_id_adresse_livraison;
		Forms::TextBox^ txtbx_id_adresse_livraison;
		Forms::Label^ label_numero_client;
		Forms::TextBox^ txtbx_numero_client;
		Forms::Label^ label_id_adresse_facturation;
		Forms::TextBox^ txtbx_id_adresse_facturation;

		//		Forms::Button^ button_add_adresse;
		Forms::Button^ button_valid;

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(CommandObject^ co)
		{
			this->co = co;

			this->label_reference_commande = (gcnew System::Windows::Forms::Label());
			this->label_view_reference_commande = (gcnew System::Windows::Forms::Label());

			this->label_date_livraison = (gcnew System::Windows::Forms::Label());
			this->txtbx_date_livraison = (gcnew System::Windows::Forms::TextBox());

			this->label_date_emission = (gcnew System::Windows::Forms::Label());
			this->txtbx_date_emission = (gcnew System::Windows::Forms::TextBox());

			this->label_remise = (gcnew System::Windows::Forms::Label());
			this->txtbx_remise = (gcnew System::Windows::Forms::TextBox());

			this->label_total_commande = (gcnew System::Windows::Forms::Label());
			this->txtbx_total_commande = (gcnew System::Windows::Forms::TextBox());


			this->label_retrait = (gcnew System::Windows::Forms::Label());
			this->txtbx_retrait = (gcnew System::Windows::Forms::TextBox());

			this->label_id_adresse_livraison = (gcnew System::Windows::Forms::Label());
			this->txtbx_id_adresse_livraison = (gcnew System::Windows::Forms::TextBox());

			this->label_numero_client = (gcnew System::Windows::Forms::Label());
			this->txtbx_numero_client = (gcnew System::Windows::Forms::TextBox());


			this->label_id_adresse_facturation = (gcnew System::Windows::Forms::Label());
			this->txtbx_id_adresse_facturation = (gcnew System::Windows::Forms::TextBox());

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
			this->label_reference_commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_reference_commande->Location = System::Drawing::Point(pos_x, pos_y_start);
			this->label_reference_commande->Size = System::Drawing::Size(size_x, size_y);
			this->label_reference_commande->TabStop = true;
			this->label_reference_commande->Name = L"label_reference_commande";
			this->label_reference_commande->Text = L"id personnel";
			// 
			// view id personnel
			// 
			this->label_view_reference_commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_reference_commande->Location = System::Drawing::Point(pos_x_view, pos_y_start);
			this->label_view_reference_commande->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_reference_commande->TabIndex = 1;
			this->label_view_reference_commande->Name = L"label_view_reference_commande";
			//			this->label_view_reference_commande->Text = po->getIdPersonnel();
			this->label_view_reference_commande->BorderStyle = Forms::BorderStyle::FixedSingle;
			// 
			// date_livraison
			// 
			this->label_date_livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_date_livraison->Location = System::Drawing::Point(pos_x, 1 * (size_y + step_y) + pos_y_start); //15+30+5
			this->label_date_livraison->Size = System::Drawing::Size(size_x, size_y);
			this->label_date_livraison->TabStop = true;
			this->label_date_livraison->Name = L"label_date_livraison";
			this->label_date_livraison->Text = L"date_livraison";
			// 
			// view date_livraison
			// 
			this->txtbx_date_livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_date_livraison->Location = System::Drawing::Point(pos_x_view, 1 * (size_y + step_y) + pos_y_start);
			this->txtbx_date_livraison->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_date_livraison->TabIndex = 2;
			this->txtbx_date_livraison->Name = L"txtbx_date_livraison";
			//			this->txtbx_date_livraison->Text = po->getdate_livraison();
						// 
						// date_emission
						// 
			this->label_date_emission->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_date_emission->Location = System::Drawing::Point(pos_x, 2 * (size_y + step_y) + pos_y_start);//50+30+5
			this->label_date_emission->Size = System::Drawing::Size(size_x, size_y);
			this->label_date_emission->TabStop = true;
			this->label_date_emission->Name = L"label_date_emission";
			this->label_date_emission->Text = L"date_emission";
			// 
			// view date_emission
			// 
			this->txtbx_date_emission->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_date_emission->Location = System::Drawing::Point(pos_x_view, 2 * (size_y + step_y) + pos_y_start);
			this->txtbx_date_emission->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_date_emission->TabIndex = 3;
			this->txtbx_date_emission->Name = L"txtbx_date_emission";
			//			this->txtbx_date_emission->Text = po->getdate_emission();
						//
						// remise
						//
			this->label_remise->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_remise->Location = System::Drawing::Point(pos_x, 3 * (size_y + step_y) + pos_y_start);//85+30+5
			this->label_remise->Size = System::Drawing::Size(size_x, size_y);
			this->label_remise->TabStop = true;
			this->label_remise->Name = L"label_remise";
			this->label_remise->Text = L"Remise (%)";
			// 
			// view remise
			// 
			this->txtbx_remise->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_remise->Location = System::Drawing::Point(pos_x_view, 3 * (size_y + step_y) + pos_y_start);
			this->txtbx_remise->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_remise->TabIndex = 4;
			this->txtbx_remise->Name = L"txtbx_remise";
			//			this->txtbx_remise->Text = po->getremise();
						// 
						// id superieur
						// 
			this->label_total_commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_total_commande->Location = System::Drawing::Point(pos_x, 4 * (size_y + step_y) + pos_y_start);//85+30+5
			this->label_total_commande->Size = System::Drawing::Size(size_x, size_y);
			this->label_total_commande->TabStop = true;
			this->label_total_commande->Name = L"label_total_commande";
			this->label_total_commande->Text = L"Id Superieur";
			// 
			// view id superieur
			// 
			this->txtbx_total_commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_total_commande->Location = System::Drawing::Point(pos_x_view, 4 * (size_y + step_y) + pos_y_start);
			this->txtbx_total_commande->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_total_commande->TabIndex = 4;
			this->txtbx_total_commande->Name = L"txtbx_total_commande";
			//			this->txtbx_total_commande->Text = po->getIdSuperieur() == "NULL" ? "" : po->getIdSuperieur();
						// 
						// date embauche
						// 
			this->label_retrait->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_retrait->Location = System::Drawing::Point(pos_x, 5 * (size_y + step_y) + pos_y_start); //120+30+5
			this->label_retrait->Size = System::Drawing::Size(size_x, size_y);
			this->label_retrait->TabStop = true;
			this->label_retrait->Name = L"label_remise";
			this->label_retrait->Text = L"Date Embauche";
			// 
			// view date embauche
			// 
			this->txtbx_retrait->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_retrait->Location = System::Drawing::Point(pos_x_view, 5 * (size_y + step_y) + pos_y_start);
			this->txtbx_retrait->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_retrait->TabIndex = 5;
			this->txtbx_retrait->Name = L"txtbx_remise";
			//			this->txtbx_remise->Text = po->getDateEmbaucheAff() == "NULL" ? "" : po->getDateEmbaucheAff();
						// 
						// id adresse
						// 
			this->label_id_adresse_livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_id_adresse_livraison->Location = System::Drawing::Point(pos_x, 6 * (size_y + step_y) + pos_y_start);//155+30+5
			this->label_id_adresse_livraison->Size = System::Drawing::Size(size_x, size_y);
			this->label_id_adresse_livraison->TabStop = true;
			this->label_id_adresse_livraison->Name = L"label_supprime";
			this->label_id_adresse_livraison->Text = L"Adresse";
			// 
			// view id adresse
			// 
			this->txtbx_id_adresse_livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_id_adresse_livraison->Location = System::Drawing::Point(pos_x_view, 6 * (size_y + step_y) + pos_y_start);
			this->txtbx_id_adresse_livraison->Size = System::Drawing::Size(size_x_view - size_y - step_x_btn, size_y);
			this->txtbx_id_adresse_livraison->TabIndex = 6;
			this->txtbx_id_adresse_livraison->Name = L"txtbx_supprime";
			//			this->txtbx_id_adresse_livraison->Text = po->getAdresse();
			//			this->txtbx_id_adresse_livraison->BorderStyle = Forms::BorderStyle::FixedSingle;
						//
						// numero_client
						//
			this->label_numero_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_numero_client->Location = System::Drawing::Point(pos_x, 7 * (size_y + step_y) + pos_y_start);
			this->label_numero_client->Size = System::Drawing::Size(size_x, size_y);
			this->label_numero_client->TabStop = true;
			this->label_numero_client->Name = L"label_numero_client";
			this->label_numero_client->Text = L"label_numero_client";
			//
			// view numero_client
			//
			this->label_numero_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_numero_client->Location = System::Drawing::Point(pos_x_view, 7 * (size_y + step_y) + pos_y_start);
			this->label_numero_client->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_numero_client->TabIndex = 7;
			this->label_numero_client->Name = L"txtbx_label_numero_client";
			//
			// id_adresse_facturation
			//
			this->label_id_adresse_facturation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_id_adresse_facturation->Location = System::Drawing::Point(pos_x, 8 * (size_y + step_y) + pos_y_start);
			this->label_id_adresse_facturation->Size = System::Drawing::Size(size_x, size_y);
			this->label_id_adresse_facturation->TabStop = true;
			this->label_id_adresse_facturation->Name = L"label_id_adresse_facturation";
			this->label_id_adresse_facturation->Text = L"label_id_adresse_facturation";
			//
			// view id_adresse_facturation
			//
			this->label_id_adresse_facturation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_id_adresse_facturation->Location = System::Drawing::Point(pos_x_view, 8 * (size_y + step_y) + pos_y_start);
			this->txtbx_id_adresse_facturation->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_id_adresse_facturation->TabIndex = 8;
			this->txtbx_id_adresse_facturation->Name = L"txtbx_id_adresse_facturation";
			//
			// valider
			// 
			this->button_valid->Location = System::Drawing::Point(pos_x_view + size_x_view - size_x_valid, 9 * (size_y + step_y) + pos_y_start);
			this->button_valid->Margin = Forms::Padding(1);
			this->button_valid->Size = System::Drawing::Size(size_x_valid, size_y);
			this->button_valid->UseVisualStyleBackColor = true;
			this->button_valid->Name = L"button_valid";
			this->button_valid->Text = L"Valider";
			this->button_valid->TabIndex = 8;
			this->button_valid->Click += gcnew System::EventHandler(this, &ModifCommandForm::buttonValidClick);
			// 
			// ViewClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Size = System::Drawing::Size(size_x_form, size_y_form);//190+30+5
			this->MinimumSize = this->Size;
			this->MaximumSize = this->Size;
			this->Controls->Add(this->label_reference_commande);
			this->Controls->Add(this->label_view_reference_commande);
			this->Controls->Add(this->label_date_livraison);
			this->Controls->Add(this->txtbx_date_livraison);
			this->Controls->Add(this->label_date_emission);
			this->Controls->Add(this->txtbx_date_emission);
			this->Controls->Add(this->label_remise);
			this->Controls->Add(this->txtbx_remise);
			this->Controls->Add(this->label_total_commande);
			this->Controls->Add(this->txtbx_total_commande);
			this->Controls->Add(this->label_retrait);
			this->Controls->Add(this->txtbx_retrait);
			this->Controls->Add(this->label_id_adresse_livraison);
			this->Controls->Add(this->txtbx_id_adresse_livraison);
			this->Controls->Add(this->label_numero_client);
			this->Controls->Add(this->txtbx_numero_client);
			this->Controls->Add(this->label_id_adresse_facturation);
			this->Controls->Add(this->txtbx_id_adresse_facturation);
			this->Controls->Add(this->button_valid);
			this->Name = L"ModifPersonnelForm";
			//			this->Text = L"Personnel : " + co->getdate_livraison() + " " + co->getdate_emission();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void buttonValidClick(System::Object^ sender, System::EventArgs^ e) {
			bool reussi = true;
			String^ reference_commande;
			String^ date_livraison;
			String^ date_emmision;
			Decimal^ remise;
			Decimal^ total_remise;
			int retrait;
			int id_adresse_livraison;
			int numero_client;
			int id_adresse_facturation;

		};
	};
}
