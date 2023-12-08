#pragma once
#include "ClientObject.h"
#include "AddAdressForm.h"

namespace Display {

	using namespace System::Windows;
	using namespace Object;

	public ref class ModifClientForm : public System::Windows::Forms::Form
	{
	public:
		ModifClientForm(ClientObject^ co) { InitializeComponent(co); }

	protected:
		~ModifClientForm() { if (components) { delete components; } }
		ClientObject^ co = nullptr;
	private:
		Forms::Label^ label_numero_client;
		Forms::Label^ label_view_numero_client;
		Forms::Label^ label_nom;
		Forms::TextBox^ txtbx_nom;
		Forms::Label^ label_prenom;
		Forms::TextBox^ txtbx_prenom;
		Forms::Label^ label_date_naissance;
		Forms::TextBox^ txtbx_date_naissance;
		Forms::Label^ label_adresse_livraison;
		Forms::ComboBox^ cbobx_adresse_livraison;
		Forms::Label^ label_adresse_emission;
		Forms::ComboBox^ cbobx_adresse_emission;
		Forms::Button^ button_add_livraison;
		Forms::Button^ button_del_livraison;
		Forms::Button^ button_add_emission;
		Forms::Button^ button_del_emission;
		Forms::Button^ button_valid;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(ClientObject^ co)
		{
			this->co = co;

			this->label_numero_client = (gcnew System::Windows::Forms::Label());
			this->label_view_numero_client = (gcnew System::Windows::Forms::Label());
			this->label_nom = (gcnew System::Windows::Forms::Label());
			this->txtbx_nom = (gcnew System::Windows::Forms::TextBox());
			this->label_prenom = (gcnew System::Windows::Forms::Label());
			this->txtbx_prenom = (gcnew System::Windows::Forms::TextBox());
			this->label_date_naissance = (gcnew System::Windows::Forms::Label());
			this->txtbx_date_naissance = (gcnew System::Windows::Forms::TextBox());
			this->label_adresse_livraison = (gcnew System::Windows::Forms::Label());
			this->cbobx_adresse_livraison = (gcnew System::Windows::Forms::ComboBox());
			this->label_adresse_emission = (gcnew System::Windows::Forms::Label());
			this->cbobx_adresse_emission = (gcnew System::Windows::Forms::ComboBox());
			this->button_add_livraison = gcnew Forms::Button();
			this->button_del_livraison = gcnew Forms::Button();
			this->button_add_emission = gcnew Forms::Button();
			this->button_del_emission = gcnew Forms::Button();
			this->button_valid = gcnew Forms::Button();
			this->SuspendLayout();
			//set size
			const int size_x = 280;
			const int size_x_view = 430;
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
			this->txtbx_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_nom->Location = System::Drawing::Point(pos_x_view, 1 * (size_y + step_y) + pos_y_start);
			this->txtbx_nom->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_nom->TabIndex = 2;
			this->txtbx_nom->Name = L"txtbx_nom";
			this->txtbx_nom->Text = co->getNom();
			this->txtbx_nom->BorderStyle = Forms::BorderStyle::FixedSingle;
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
			this->txtbx_prenom->Text = co->getPrenom();
			this->txtbx_prenom->BorderStyle = Forms::BorderStyle::FixedSingle;
			// 
			// date naissance
			// 
			this->label_date_naissance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_date_naissance->Location = System::Drawing::Point(pos_x, 3 * (size_y + step_y) + pos_y_start);//85+30+5
			this->label_date_naissance->Size = System::Drawing::Size(size_x, size_y);
			this->label_date_naissance->TabStop = true;
			this->label_date_naissance->Name = L"label_date_naissance";
			this->label_date_naissance->Text = L"Date de naissance";
			// 
			// view date naissanee
			// 
			this->txtbx_date_naissance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_date_naissance->Location = System::Drawing::Point(pos_x_view, 3 * (size_y + step_y) + pos_y_start);
			this->txtbx_date_naissance->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_date_naissance->TabIndex = 4;
			this->txtbx_date_naissance->Name = L"txtbx_date_naissance";
			this->txtbx_date_naissance->Text = co->getDateNaissanceAff();
			this->txtbx_date_naissance->BorderStyle = Forms::BorderStyle::FixedSingle;
			// 
			// adresse livraison
			// 
			this->label_adresse_livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_adresse_livraison->Location = System::Drawing::Point(pos_x, 4 * (size_y + step_y) + pos_y_start); //120+30+5
			this->label_adresse_livraison->Size = System::Drawing::Size(size_x, size_y);
			this->label_adresse_livraison->TabStop = true;
			this->label_adresse_livraison->Name = L"label_adresse_livraison";
			this->label_adresse_livraison->Text = L"Adresse de livraison";
			// 
			// label4
			// 
			//this->label4->AutoSize = true;
			this->cbobx_adresse_livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbobx_adresse_livraison->Location = System::Drawing::Point(pos_x_view, 4 * (size_y + step_y) + pos_y_start);
			this->cbobx_adresse_livraison->Size = System::Drawing::Size(size_x_view - 2 * (step_x_btn + size_y), size_y);
			this->cbobx_adresse_livraison->TabIndex = 5;
			this->cbobx_adresse_livraison->Name = L"cbobx_adresse_livraison";
			this->cbobx_adresse_livraison->Items->AddRange(co->getAdresseLivraison()->ToArray());
			this->cbobx_adresse_livraison->DropDownStyle = Forms::ComboBoxStyle::DropDownList;
			if (co->getAdresseLivraison()->Count != 0) { this->cbobx_adresse_livraison->SelectedIndex = 0; }
			//
			// button add livraison
			// 
			this->button_add_livraison->Location = System::Drawing::Point(pos_x_view+size_x_view-2*size_y-step_x_btn, 4 * (size_y + step_y) + pos_y_start);
			this->button_add_livraison->Margin = Forms::Padding(1);
			this->button_add_livraison->Size = System::Drawing::Size(size_y, size_y);
			this->button_add_livraison->UseVisualStyleBackColor = true;
			this->button_add_livraison->Name = L"button_add_livraison";
			this->button_add_livraison->Text = L"+";
			this->button_add_livraison->TabIndex = 6;
			this->button_add_livraison->Click += gcnew System::EventHandler(this, &Display::ModifClientForm::buttonAddLivraisonClick);
			//
			// button del livraison
			// 
			this->button_del_livraison->Location = System::Drawing::Point(pos_x_view + size_x_view - size_y, 4 * (size_y + step_y) + pos_y_start);
			this->button_del_livraison->Margin = Forms::Padding(1);
			this->button_del_livraison->Size = System::Drawing::Size(size_y, size_y);
			this->button_del_livraison->UseVisualStyleBackColor = true;
			this->button_del_livraison->Name = L"button_del_livraison";
			this->button_del_livraison->Text = L"-";
			this->button_del_livraison->TabIndex = 7;
			this->button_del_livraison->Click += gcnew System::EventHandler(this, &Display::ModifClientForm::buttonDelLivraisonClick);
			// 
			// adresse emission
			// 
			this->label_adresse_emission->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_adresse_emission->Location = System::Drawing::Point(pos_x, 5 * (size_y + step_y) + pos_y_start);//155+30+5
			this->label_adresse_emission->Size = System::Drawing::Size(size_x, size_y);
			this->label_adresse_emission->TabStop = true;
			this->label_adresse_emission->Name = L"label_adresse_emission";
			this->label_adresse_emission->Text = L"Adresse d'emission";
			// 
			// view adresse emission
			// 
			this->cbobx_adresse_emission->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbobx_adresse_emission->Location = System::Drawing::Point(pos_x_view, 5 * (size_y + step_y) + pos_y_start);
			this->cbobx_adresse_emission->Size = System::Drawing::Size(size_x_view - 2 * (step_x_btn + size_y), size_y);
			this->cbobx_adresse_emission->TabIndex = 8;
			this->cbobx_adresse_emission->Name = L"label_view_id_adresse";
			this->cbobx_adresse_emission->Items->AddRange(co->getAdresseEmission()->ToArray());
			this->cbobx_adresse_emission->DropDownStyle = Forms::ComboBoxStyle::DropDownList;
			if (co->getAdresseEmission()->Count != 0){ this->cbobx_adresse_emission->SelectedIndex = 0; }
			//
			// button add adresse
			// 
			this->button_add_emission->Location = System::Drawing::Point(pos_x_view + size_x_view - 2 * size_y - step_x_btn, 5 * (size_y + step_y) + pos_y_start);
			this->button_add_emission->Margin = Forms::Padding(1);
			this->button_add_emission->Size = System::Drawing::Size(size_y, size_y);
			this->button_add_emission->UseVisualStyleBackColor = true;
			this->button_add_emission->Name = L"button_add_emission";
			this->button_add_emission->Text = L"+";
			this->button_add_emission->TabIndex = 8;
			this->button_add_emission->Click += gcnew System::EventHandler(this, &Display::ModifClientForm::buttonAddEmissionClick);
			//
			// button del adresse
			// 
			this->button_del_emission->Location = System::Drawing::Point(pos_x_view + size_x_view - size_y, 5 * (size_y + step_y) + pos_y_start);
			this->button_del_emission->Margin = Forms::Padding(1);
			this->button_del_emission->Size = System::Drawing::Size(size_y, size_y);
			this->button_del_emission->UseVisualStyleBackColor = true;
			this->button_del_emission->Name = L"button_del_emission";
			this->button_del_emission->Text = L"-";
			this->button_del_emission->TabIndex = 9;
			this->button_del_emission->Click += gcnew System::EventHandler(this, &Display::ModifClientForm::buttonDelEmissionClick);
			//
			// valider
			// 
			this->button_valid->Location = System::Drawing::Point(pos_x_view + size_x_view - size_x_valid, 6 * (size_y + step_y) + pos_y_start);
			this->button_valid->Margin = Forms::Padding(1);
			this->button_valid->Size = System::Drawing::Size(size_x_valid, size_y);
			this->button_valid->UseVisualStyleBackColor = true;
			this->button_valid->Name = L"button_valid";
			this->button_valid->Text = L"Valider";
			this->button_valid->TabIndex = 10;
			this->button_valid->Click += gcnew System::EventHandler(this, &Display::ModifClientForm::buttonValidClick);
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
			this->Controls->Add(this->txtbx_nom);
			this->Controls->Add(this->label_prenom);
			this->Controls->Add(this->txtbx_prenom);
			this->Controls->Add(this->label_date_naissance);
			this->Controls->Add(this->txtbx_date_naissance);
			this->Controls->Add(this->label_adresse_livraison);
			this->Controls->Add(this->cbobx_adresse_livraison);
			this->Controls->Add(this->button_add_livraison);
			this->Controls->Add(this->button_del_livraison);
			this->Controls->Add(this->label_adresse_emission);
			this->Controls->Add(this->cbobx_adresse_emission);
			this->Controls->Add(this->button_add_emission);
			this->Controls->Add(this->button_del_emission);
			this->Controls->Add(this->button_valid);
			this->Name = L"ModifClientForm";
			this->Text = L"Client: " + co->getNom() + " " + co->getPrenom();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void buttonValidClick(System::Object^ sender, System::EventArgs^ e) {
			bool reussi = true;
			String^ nom = "";
			String^ prenom = "";
			DateTime date;
			//nom
			try {
				if (this->txtbx_nom->Text != "'" && this->txtbx_nom->Text->Replace("'", "") != "") {
					nom = this->txtbx_nom->Text->Replace("'", " ");
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

			//date naissance
			try {
				date = Convert::ToDateTime(this->txtbx_date_naissance->Text);
				this->txtbx_date_naissance->BackColor = System::Drawing::Color::White;
			}
			catch (System::FormatException^) {
				reussi = false;
				this->txtbx_date_naissance->BackColor = System::Drawing::Color::Red;
			}
			if (reussi) {
				co->setNom(txtbx_nom->Text);
				co->setPrenom(txtbx_prenom->Text);
				co->setdateNaissance(date);
				//adresses deja validées
				this->Close();
			}

		}
		void buttonAddLivraisonClick(System::Object^ sender, System::EventArgs^ e) {
			AdressObject^ adr_obj = gcnew AdressObject();
			AddAdressForm^ add_adr = gcnew AddAdressForm(adr_obj);
			add_adr->ShowDialog();
			if (adr_obj->getNumero() != "0") {//adresse créer
				co->addAdresseLivraison(adr_obj);
				int i = this->cbobx_adresse_livraison->Items->Add(adr_obj);
				this->cbobx_adresse_livraison->SelectedIndex = i;
			}
			this->Refresh();
		}
		void buttonDelLivraisonClick(System::Object^ sender, System::EventArgs^ e) {
			AdressObject^ adr_obj = (AdressObject^)this->cbobx_adresse_livraison->SelectedItem;
			adr_obj->deleteAdresse();
			this->cbobx_adresse_livraison->Items->Remove(adr_obj);
			this->Refresh();
		}
		void buttonAddEmissionClick(System::Object^ sender, System::EventArgs^ e) {
			AdressObject^ adr_obj = gcnew AdressObject();
			AddAdressForm^ add_adr = gcnew AddAdressForm(adr_obj);
			add_adr->ShowDialog();
			if (adr_obj->getNumero() != "0") {//adresse créer
				co->addAdresseEmission(adr_obj);
				int i = this->cbobx_adresse_emission->Items->Add(adr_obj);
				this->cbobx_adresse_emission->SelectedIndex = i;
			}
			this->Refresh();
		}
		void buttonDelEmissionClick(System::Object^ sender, System::EventArgs^ e) {
			AdressObject^ adr_obj = (AdressObject^)this->cbobx_adresse_emission->SelectedItem;
			adr_obj->deleteAdresse();
			this->cbobx_adresse_emission->Items->Remove(adr_obj);
			this->Refresh();
		}
	};
}
