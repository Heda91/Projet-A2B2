#pragma once
#include "CommandObject.h"
#include "CommandAddArticleForm.h"
#include "CommandAddClientForm.h"
#include "CommandRepo.h"
#include <vcclr.h>

namespace Display {

	using namespace System::Windows;
	using namespace Object;

	public ref class ModifCommandForm : public System::Windows::Forms::Form
	{
	public:
		ModifCommandForm(CommandObject^ co, Repository::CommandRepo^ cr) { InitializeComponent(co); this->cr = cr; }
		Forms::Button^ button_id_client;
	protected:
		~ModifCommandForm() { if (components) { delete components; } }
		CommandObject^ co = nullptr;
		Repository::CommandRepo^ cr = nullptr;
	private:
		Forms::Label^ label_reference_commande;
		Forms::Label^ label_view_reference_commande;
		Forms::Label^ label_numero_client;
		Forms::Label^ label_view_numero_client;
		Forms::Label^ label_date_livraison;
		Forms::TextBox^ txtbx_date_livraison;
		Forms::Label^ label_adresse_livraison;
		Forms::ComboBox^ cbobx_adresse_livraison;
		Forms::Label^ label_date_emission;
		Forms::Label^ label_view_date_emission;
		Forms::Label^ label_adresse_emission;
		Forms::ComboBox^ cbobx_adresse_emission;
		Forms::Label^ label_retrait;
		Forms::TextBox^ txtbx_retrait;
		Forms::Label^ label_reglement;
		Forms::Button^ button_add_reglement;
		Forms::Button^ button_del_reglement;
		Forms::DataGridView^ dgv_reglement;
		Forms::Label^ label_article;
		Forms::Button^ button_add_article;
		Forms::Button^ button_del_article;
		Forms::DataGridView^ dgv_article;
		Forms::Label^ label_remise;
		Forms::Label^ label_view_remise;
		Forms::Label^ label_total_commande;
		Forms::Label^ label_view_total_commande;
		Forms::Button^ button_valid;

	private:
		System::ComponentModel::Container^ components;
		
#pragma region Windows Form Designer generated code

		void InitializeComponent(CommandObject^ co)
		{
			this->co = co;

			this->label_reference_commande = gcnew Forms::Label;
			this->label_view_reference_commande = gcnew Forms::Label;
			this->label_numero_client = gcnew Forms::Label;
			this->label_view_numero_client = gcnew Forms::Label;
			this->button_id_client = gcnew Forms::Button;
			this->label_date_livraison = gcnew Forms::Label;
			this->txtbx_date_livraison = gcnew Forms::TextBox;
			this->label_adresse_livraison = gcnew Forms::Label;
			this->cbobx_adresse_livraison = gcnew Forms::ComboBox;
			this->label_date_emission = gcnew Forms::Label;
			this->label_view_date_emission = gcnew Forms::Label;
			this->label_adresse_emission = gcnew Forms::Label;
			this->cbobx_adresse_emission = gcnew Forms::ComboBox;
			this->label_retrait = gcnew Forms::Label;
			this->txtbx_retrait = gcnew Forms::TextBox;
			this->label_reglement = gcnew Forms::Label;
			this->button_add_reglement = gcnew Forms::Button;
			this->button_del_reglement = gcnew Forms::Button;
			this->dgv_reglement = gcnew Forms::DataGridView;
			this->label_article = gcnew Forms::Label;
			this->button_add_article = gcnew Forms::Button;
			this->button_del_article = gcnew Forms::Button;
			this->dgv_article = gcnew Forms::DataGridView;
			this->label_total_commande = gcnew Forms::Label;
			this->label_view_total_commande = gcnew Forms::Label;
			this->label_remise = gcnew Forms::Label;
			this->label_view_remise = gcnew Forms::Label;
			this->button_valid = gcnew Forms::Button;

			this->SuspendLayout();
			//set size
			const int size_x = 300;
			const int size_x_view = 500;
			const int size_y = 30;
			const int pos_x = 15;
			const int pos_y_start = 15;
			const int step_y = 15;
			const int pos_x_view = 15 + pos_x + size_x;
			const int size_x_valid = 100;
			const int step_x_btn = 5;
			const int size_x_form = 30 + pos_x_view + size_x_view;
			const int size_y_form = 19 * (size_y + step_y) + pos_y_start;

			const int size_x_dgv = size_x_form - (2 * pos_x);
			const int size_y_dgv = 2 * (size_y + step_y);
			// 
			// Reference commande
			// 
			this->label_reference_commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_reference_commande->Location = System::Drawing::Point(pos_x, pos_y_start);
			this->label_reference_commande->Size = System::Drawing::Size(size_x, size_y);
			this->label_reference_commande->TabStop = true;
			this->label_reference_commande->Name = L"label_reference_commande";
			this->label_reference_commande->Text = L"Reference commande";
			// 
			// view Reference commande
			// 
			this->label_view_reference_commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_reference_commande->Location = System::Drawing::Point(pos_x_view, pos_y_start);
			this->label_view_reference_commande->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_reference_commande->TabIndex = 1;
			this->label_view_reference_commande->Name = L"label_view_reference_commande";
			this->label_view_reference_commande->Text = co->getReferenceCommand();
			this->label_view_reference_commande->BorderStyle = Forms::BorderStyle::FixedSingle;
			// 
			// Numero client
			// 
			this->label_numero_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_numero_client->Location = System::Drawing::Point(pos_x, 1 * (size_y + step_y) + pos_y_start); //15+30+5
			this->label_numero_client->Size = System::Drawing::Size(size_x, size_y);
			this->label_numero_client->TabStop = true;
			this->label_numero_client->Name = L"label_numero_client";
			this->label_numero_client->Text = L"Numero client";
			// 
			// view Numero client
			// 
			this->label_view_numero_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_numero_client->Location = System::Drawing::Point(pos_x_view, 1 * (size_y + step_y) + pos_y_start);
			this->label_view_numero_client->Size = System::Drawing::Size(size_x_view - size_x_valid, size_y);
			this->label_view_numero_client->Name = L"label_view_numero_client";
			this->label_view_numero_client->Text = co->getClient()->getNumeroClient();
			this->label_view_numero_client->BorderStyle = Forms::BorderStyle::FixedSingle;
			//
			// bouton modif client
			// 
			this->button_id_client->Location = System::Drawing::Point(pos_x_view + size_x_view - size_x_valid, 1 * (size_y + step_y) + pos_y_start);
			this->button_id_client->Margin = Forms::Padding(1);
			this->button_id_client->Size = System::Drawing::Size(size_x_valid, size_y);
			this->button_id_client->UseVisualStyleBackColor = true;
			this->button_id_client->Name = L"button_id_client";
			this->button_id_client->Text = L"Modifier";
			this->button_id_client->TabIndex = 2;
			this->button_id_client->Click += gcnew System::EventHandler(this, &Display::ModifCommandForm::buttonModifClient);
			// 
			// Date livraison
			// 
			this->label_date_livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_date_livraison->Location = System::Drawing::Point(pos_x, 2 * (size_y + step_y) + pos_y_start);//50+30+5
			this->label_date_livraison->Size = System::Drawing::Size(size_x, size_y);
			this->label_date_livraison->TabStop = true;
			this->label_date_livraison->Name = L"label_date_livraison";
			this->label_date_livraison->Text = L"Date livraison";
			// 
			// view Date livraison
			// 
			this->txtbx_date_livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_date_livraison->Location = System::Drawing::Point(pos_x_view, 2 * (size_y + step_y) + pos_y_start);
			this->txtbx_date_livraison->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_date_livraison->TabIndex = 3;
			this->txtbx_date_livraison->Name = L"txtbx_date_livraison";
			this->txtbx_date_livraison->Text = co->getDateLivraisonAff();
			this->txtbx_date_livraison->BorderStyle = Forms::BorderStyle::FixedSingle;
			// 
			// adresse livraison
			// 
			this->label_adresse_livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_adresse_livraison->Location = System::Drawing::Point(pos_x, 3 * (size_y + step_y) + pos_y_start);//85+30+5
			this->label_adresse_livraison->Size = System::Drawing::Size(size_x, size_y);
			this->label_adresse_livraison->TabStop = true;
			this->label_adresse_livraison->Name = L"label_adresse_livraison";
			this->label_adresse_livraison->Text = L"Adresse livraison";
			// 
			// view adresse livraison
			// 
			this->cbobx_adresse_livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbobx_adresse_livraison->Location = System::Drawing::Point(pos_x_view, 3 * (size_y + step_y) + pos_y_start);
			this->cbobx_adresse_livraison->Size = System::Drawing::Size(size_x_view, size_y);
			this->cbobx_adresse_livraison->TabIndex = 4;
			this->cbobx_adresse_livraison->Name = L"cbobx_adresse_livraison";
			this->cbobx_adresse_livraison->Text = co->getAdresseLivraison()->ToString();
			this->cbobx_adresse_livraison->Items->AddRange(co->getClient()->getAdresseLivraison()->ToArray());
			this->cbobx_adresse_livraison->DropDownStyle = Forms::ComboBoxStyle::DropDownList;
			int i = co->getClient()->getAdresseLivraison()->IndexOf(co->getAdresseLivraison());
			if (co->getClient()->getAdresseLivraison()->Count != 0) { this->cbobx_adresse_livraison->SelectedIndex = i; }
			// 
			// date emission
			// 
			this->label_date_emission->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_date_emission->Location = System::Drawing::Point(pos_x, 4 * (size_y + step_y) + pos_y_start); //120+30+5
			this->label_date_emission->Size = System::Drawing::Size(size_x, size_y);
			this->label_date_emission->TabStop = true;
			this->label_date_emission->Name = L"label_date_emission";
			this->label_date_emission->Text = L"Date emission";
			// 
			// view date emission
			// 
			this->label_view_date_emission->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_date_emission->Location = System::Drawing::Point(pos_x_view, 4 * (size_y + step_y) + pos_y_start);
			this->label_view_date_emission->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_date_emission->TabIndex = 5;
			this->label_view_date_emission->Name = L"label_view_date_emission";
			this->label_view_date_emission->Text = co->getDateEmissionAff();
			this->label_view_date_emission->BorderStyle = Forms::BorderStyle::FixedSingle;
			//
			// adresse emission
			// 
			this->label_adresse_emission->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_adresse_emission->Location = System::Drawing::Point(pos_x, 5 * (size_y + step_y) + pos_y_start);//155+30+5
			this->label_adresse_emission->Size = System::Drawing::Size(size_x, size_y);
			this->label_adresse_emission->TabStop = true;
			this->label_adresse_emission->Name = L"label_adresse_emission";
			this->label_adresse_emission->Text = L"Adresse facturation";
			// 
			// view adresse emission
			// 
			this->cbobx_adresse_emission->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbobx_adresse_emission->Location = System::Drawing::Point(pos_x_view, 5 * (size_y + step_y) + pos_y_start);
			this->cbobx_adresse_emission->Size = System::Drawing::Size(size_x_view, size_y);
			this->cbobx_adresse_emission->TabIndex = 6;
			this->cbobx_adresse_emission->Name = L"cbobx_adresse_emission";
			this->cbobx_adresse_emission->Text = co->getAdresseFacturation()->ToString();
			this->cbobx_adresse_emission->Items->AddRange(co->getClient()->getAdresseEmission()->ToArray());
			this->cbobx_adresse_emission->DropDownStyle = Forms::ComboBoxStyle::DropDownList;
			i = co->getClient()->getAdresseEmission()->IndexOf(co->getAdresseFacturation());
			if (co->getClient()->getAdresseEmission()->Count != 0) { this->cbobx_adresse_emission->SelectedIndex = i; }
			//
			// retrait
			// 
			this->label_retrait->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_retrait->Location = System::Drawing::Point(pos_x, 6 * (size_y + step_y) + pos_y_start);//155+30+5
			this->label_retrait->Size = System::Drawing::Size(size_x, size_y);
			this->label_retrait->TabStop = true;
			this->label_retrait->Name = L"label_retrait";
			this->label_retrait->Text = L"Moyen de retrait";
			// 
			// view retrait
			// 
			this->txtbx_retrait->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_retrait->Location = System::Drawing::Point(pos_x_view, 6 * (size_y + step_y) + pos_y_start);
			this->txtbx_retrait->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_retrait->TabIndex = 7;
			this->txtbx_retrait->Name = L"txtbx_retrait";
			this->txtbx_retrait->Text = co->getRetrait();
			this->txtbx_retrait->BorderStyle = Forms::BorderStyle::FixedSingle;
			//
			// reglements
			// 
			this->label_reglement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_reglement->Location = System::Drawing::Point(pos_x, 7 * (size_y + step_y) + pos_y_start);//155+30+5
			this->label_reglement->Size = System::Drawing::Size(size_x, size_y);
			this->label_reglement->TabStop = true;
			this->label_reglement->Name = L"label_reglement";
			this->label_reglement->Text = L"Reglements";
			//
			// bouton add reglement
			//
			this->button_add_reglement->Location = System::Drawing::Point(pos_x_view + size_x_view - 2 * size_x_valid - step_x_btn, 7 * (size_y + step_y) + pos_y_start);
			this->button_add_reglement->Margin = Forms::Padding(1);
			this->button_add_reglement->Size = System::Drawing::Size(size_x_valid, size_y);
			this->button_add_reglement->UseVisualStyleBackColor = true;
			this->button_add_reglement->Name = L"button_add_reglement";
			this->button_add_reglement->Text = L"Ajouter";
			this->button_add_reglement->TabIndex = 8;
			this->button_add_reglement->Click += gcnew System::EventHandler(this, &Display::ModifCommandForm::buttonAddReglement);
			this->button_add_reglement->Enabled = false;
			//
			// bouton del reglement
			// 
			this->button_del_reglement->Location = System::Drawing::Point(pos_x_view + size_x_view - size_x_valid, 7 * (size_y + step_y) + pos_y_start);
			this->button_del_reglement->Margin = Forms::Padding(1);
			this->button_del_reglement->Size = System::Drawing::Size(size_x_valid, size_y);
			this->button_del_reglement->UseVisualStyleBackColor = true;
			this->button_del_reglement->Name = L"button_del_reglement";
			this->button_del_reglement->Text = L"Supprimer";
			this->button_del_reglement->TabIndex = 9;
			this->button_del_reglement->Click += gcnew System::EventHandler(this, &Display::ModifCommandForm::buttonDelReglement);
			this->button_del_reglement->Enabled = false;
			// 
			// data grid view reglements
			// 
			this->dgv_reglement->ColumnHeadersHeightSizeMode = Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_reglement->Location = System::Drawing::Point(pos_x, 8 * (size_y + step_y) + pos_y_start);
			this->dgv_reglement->Size = System::Drawing::Size(size_x_dgv, size_y_dgv);
			this->dgv_reglement->Margin = Forms::Padding(1);
			this->dgv_reglement->Name = L"dgv_reglement";
			this->dgv_reglement->RowHeadersWidth = 50;
			this->dgv_reglement->TabIndex = 10;
			this->dgv_reglement->ReadOnly = true;
			this->dgv_reglement->MultiSelect = false;
			this->dgv_reglement->SelectionMode = Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgv_reglement->AutoSizeColumnsMode = Forms::DataGridViewAutoSizeColumnsMode::Fill;
			Forms::DataGridViewTextBoxColumn^ dgvtbc = gcnew Forms::DataGridViewTextBoxColumn();
			dgvtbc->Name = "Date paiement";
			this->dgv_reglement->Columns->Add(dgvtbc);
			Forms::DataGridViewTextBoxColumn^ dgvtbc2 = gcnew Forms::DataGridViewTextBoxColumn();
			dgvtbc2->Name = "Solde paiement";
			this->dgv_reglement->Columns->Add(dgvtbc2);
			Forms::DataGridViewTextBoxColumn^ dgvtbc3 = gcnew Forms::DataGridViewTextBoxColumn();
			dgvtbc3->Name = "moyen paiement";
			this->dgv_reglement->Columns->Add(dgvtbc3);
			//
			// article
			// 
			this->label_article->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_article->Location = System::Drawing::Point(pos_x, 8 * (size_y + step_y) + pos_y_start + size_y_dgv);//155+30+5
			this->label_article->Size = System::Drawing::Size(size_x, size_y);
			this->label_article->TabStop = true;
			this->label_article->Name = L"label_article";
			this->label_article->Text = L"Panier";
			//
			// bouton add article
			//
			this->button_add_article->Location = System::Drawing::Point(pos_x_view + size_x_view - 2 * size_x_valid - step_x_btn, 8 * (size_y + step_y) + pos_y_start + size_y_dgv);
			this->button_add_article->Margin = Forms::Padding(1);
			this->button_add_article->Size = System::Drawing::Size(size_x_valid, size_y);
			this->button_add_article->UseVisualStyleBackColor = true;
			this->button_add_article->Name = L"button_add_article";
			this->button_add_article->Text = L"Ajouter";
			this->button_add_article->TabIndex = 11;
			this->button_add_article->Click += gcnew System::EventHandler(this, &Display::ModifCommandForm::buttonAddArticle);
			this->button_add_article->Enabled = false;
			//
			// bouton del article
			// 
			this->button_del_article->Location = System::Drawing::Point(pos_x_view + size_x_view - size_x_valid, 8 * (size_y + step_y) + pos_y_start + size_y_dgv);
			this->button_del_article->Margin = Forms::Padding(1);
			this->button_del_article->Size = System::Drawing::Size(size_x_valid, size_y);
			this->button_del_article->UseVisualStyleBackColor = true;
			this->button_del_article->Name = L"button_del_article";
			this->button_del_article->Text = L"Supprimer";
			this->button_del_article->TabIndex = 12;
			this->button_del_article->Click += gcnew System::EventHandler(this, &Display::ModifCommandForm::buttonDelArticle);
			this->button_del_article->Enabled = false;
			// 
			// data grid view article
			// 
			this->dgv_article->ColumnHeadersHeightSizeMode = Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_article->Location = System::Drawing::Point(pos_x, 9 * (size_y + step_y) + pos_y_start + size_y_dgv);
			this->dgv_article->Size = System::Drawing::Size(size_x_dgv, size_y_dgv * 2);
			this->dgv_article->Margin = Forms::Padding(1);
			this->dgv_article->Name = L"dgv_article";
			this->dgv_article->RowHeadersWidth = 50;
			this->dgv_article->TabIndex = 13;
			this->dgv_article->ReadOnly = true;
			this->dgv_article->MultiSelect = false;
			this->dgv_article->SelectionMode = Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgv_article->AutoSizeColumnsMode = Forms::DataGridViewAutoSizeColumnsMode::Fill;
			Forms::DataGridViewTextBoxColumn^ dgvtbc_1 = gcnew Forms::DataGridViewTextBoxColumn();
			dgvtbc_1->Name = "Id article";
			this->dgv_article->Columns->Add(dgvtbc_1);
			Forms::DataGridViewTextBoxColumn^ dgvtbc_2 = gcnew Forms::DataGridViewTextBoxColumn();
			dgvtbc_2->Name = "Nom";
			this->dgv_article->Columns->Add(dgvtbc_2);
			Forms::DataGridViewTextBoxColumn^ dgvtbc_3 = gcnew Forms::DataGridViewTextBoxColumn();
			dgvtbc_3->Name = "quantite";
			this->dgv_article->Columns->Add(dgvtbc_3);
			Forms::DataGridViewTextBoxColumn^ dgvtbc_4 = gcnew Forms::DataGridViewTextBoxColumn();
			dgvtbc_4->Name = "Prix HT";
			this->dgv_article->Columns->Add(dgvtbc_4);
			Forms::DataGridViewTextBoxColumn^ dgvtbc_5 = gcnew Forms::DataGridViewTextBoxColumn();
			dgvtbc_5->Name = "TVA (%)";
			this->dgv_article->Columns->Add(dgvtbc_5);
			Forms::DataGridViewTextBoxColumn^ dgvtbc_6 = gcnew Forms::DataGridViewTextBoxColumn();
			dgvtbc_6->Name = "Prix TTC";
			this->dgv_article->Columns->Add(dgvtbc_6);
			//
			// remise
			// 
			this->label_remise->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_remise->Location = System::Drawing::Point(pos_x, 15 * (size_y + step_y) + pos_y_start);//155+30+5
			this->label_remise->Size = System::Drawing::Size(size_x, size_y);
			this->label_remise->TabStop = true;
			this->label_remise->Name = L"label_remise";
			this->label_remise->Text = L"Remise commande (%)";
			// 
			// view remise
			// 
			this->label_view_remise->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_remise->Location = System::Drawing::Point(pos_x_view, 15 * (size_y + step_y) + pos_y_start);
			this->label_view_remise->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_remise->TabIndex = 14;
			this->label_view_remise->Name = L"label_view_remise";
			this->label_view_remise->Text = co->getRemise();
			this->label_view_remise->BorderStyle = Forms::BorderStyle::FixedSingle;
			//
			// total commande
			// 
			this->label_total_commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_total_commande->Location = System::Drawing::Point(pos_x, 16 * (size_y + step_y) + pos_y_start);//155+30+5
			this->label_total_commande->Size = System::Drawing::Size(size_x, size_y);
			this->label_total_commande->TabStop = true;
			this->label_total_commande->Name = L"label_total_commande";
			this->label_total_commande->Text = L"Total commande";
			// 
			// view total commande
			// 
			this->label_view_total_commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_total_commande->Location = System::Drawing::Point(pos_x_view, 16 * (size_y + step_y) + pos_y_start);
			this->label_view_total_commande->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_total_commande->TabIndex = 15;
			this->label_view_total_commande->Name = L"label_view_total_commande";
			this->label_view_total_commande->Text = co->getTotalCommand();
			this->label_view_total_commande->BorderStyle = Forms::BorderStyle::FixedSingle;
			//
			// valider
			// 
			this->button_valid->Location = System::Drawing::Point(pos_x_view + size_x_view - size_x_valid, 17 * (size_y + step_y) + pos_y_start);
			this->button_valid->Margin = Forms::Padding(1);
			this->button_valid->Size = System::Drawing::Size(size_x_valid, size_y);
			this->button_valid->UseVisualStyleBackColor = true;
			this->button_valid->Name = L"button_valid";
			this->button_valid->Text = L"Valider";
			this->button_valid->TabIndex = 16;
			this->button_valid->Click += gcnew System::EventHandler(this, &Display::ModifCommandForm::buttonValidClick);
			// 
			// ViewClient
			// 
			this->reload();
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Size = System::Drawing::Size(size_x_form, size_y_form);//190+30+5
			this->MinimumSize = this->Size;
			this->MaximumSize = this->Size;
			this->Controls->Add(this->label_reference_commande);
			this->Controls->Add(this->label_view_reference_commande);
			this->Controls->Add(this->label_numero_client);
			this->Controls->Add(this->label_view_numero_client);
			this->Controls->Add(this->button_id_client);
			this->Controls->Add(this->label_date_livraison);
			this->Controls->Add(this->txtbx_date_livraison);
			this->Controls->Add(this->label_adresse_livraison);
			this->Controls->Add(this->cbobx_adresse_livraison);
			this->Controls->Add(this->label_date_emission);
			this->Controls->Add(this->label_view_date_emission);
			this->Controls->Add(this->label_adresse_emission);
			this->Controls->Add(this->cbobx_adresse_emission);
			this->Controls->Add(this->label_retrait);
			this->Controls->Add(this->txtbx_retrait);
			this->Controls->Add(this->label_reglement);
			this->Controls->Add(this->button_del_reglement);
			this->Controls->Add(this->button_add_reglement);
			this->Controls->Add(this->dgv_reglement);
			this->Controls->Add(this->label_article);
			this->Controls->Add(this->dgv_article);
			this->Controls->Add(this->button_del_article);
			this->Controls->Add(this->button_add_article);
			this->Controls->Add(this->label_total_commande);
			this->Controls->Add(this->label_view_total_commande);
			this->Controls->Add(this->label_remise);
			this->Controls->Add(this->label_view_remise);
			this->Controls->Add(this->button_valid);
			this->Name = L"ModifClientForm";
			
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void buttonAddReglement(System::Object^ sender, System::EventArgs^ e) {}
		void buttonDelReglement(System::Object^ sender, System::EventArgs^ e) {}
		void buttonAddArticle(System::Object^ sender, System::EventArgs^ e) {
			CommandAddArticleForm^ command_add_art_form = gcnew CommandAddArticleForm(this->cr->bdd, this->co);
			command_add_art_form->ShowDialog();
			//calcule montant
			Decimal prixTTC = command_add_art_form->getPrixTTC();
			if (prixTTC != Decimal::Zero) {
				co->setTotalCommand(prixTTC * (1 - Convert::ToDecimal(co->getRemise())) + Convert::ToDecimal(co->getTotalCommand()));
				this->label_view_total_commande->Text = co->getTotalCommand();
			}
			this->reload();
			this->Refresh();
		}
		void buttonDelArticle(System::Object^ sender, System::EventArgs^ e) {
			Cart^ panier = (Cart^)this->dgv_article->SelectedRows[0]->Tag;
			this->co->getPanier()->Remove(panier);
			Repository::CommandRepo^ cr = gcnew Repository::CommandRepo(this->cr->bdd);
			cr->delinkCommandArticle(this->co->getReferenceCommand(), Convert::ToInt32(panier->article->getIdArticle()));
			//calcule montant
			co->setTotalCommand(Convert::ToDecimal(co->getTotalCommand()) - (panier->getTotalTTC()) * (1 - Convert::ToDecimal(co->getRemise())));
			this->label_view_total_commande->Text = co->getTotalCommand();
			this->reload();
			this->Refresh();
		}
		void buttonModifClient(System::Object^ sender, System::EventArgs^ e) {
			Repository::CommandRepo^ cr = gcnew Repository::CommandRepo(this->cr->bdd);
			CommandAddClientForm^ command_add_client_form = gcnew CommandAddClientForm(this->cr->bdd, this->co);
			command_add_client_form->ShowDialog();
			this->label_view_numero_client->Text = co->getClient()->ToString();
			this->cbobx_adresse_livraison->Items->Clear();
			this->cbobx_adresse_livraison->Items->AddRange(co->getClient()->getAdresseLivraison()->ToArray());
			if (co->getClient()->getAdresseLivraison()->Count != 0) { this->cbobx_adresse_livraison->SelectedIndex = 0; }
			this->cbobx_adresse_emission->Items->Clear();
			this->cbobx_adresse_emission->Items->AddRange(co->getClient()->getAdresseEmission()->ToArray());
			if (co->getClient()->getAdresseEmission()->Count != 0) { this->cbobx_adresse_emission->SelectedIndex = 0; }
			//reductions
			DateTime^ commande1 = cr->getFirstCommand(co->getClient());
			if (co->getClient()->getDateNaissanceVar()->Day == co->getDateEmissionVar()->Day && co->getClient()->getDateNaissanceVar()->Month == co->getDateEmissionVar()->Month) {
				co->setRemise(Decimal(10));
			}
			else if (commande1->Day == co->getDateEmissionVar()->Day && commande1->Month == co->getDateEmissionVar()->Month) {
				co->setRemise(Decimal(5));
			}
			this->label_view_remise->Text = co->getRemise();
			//ref commande -> PpNnAAAAVvvNNN
			String^ prenom = co->getClient()->getPrenom() + "..";
			String^ nom = co->getClient()->getNom() + "..";
			String^ ref = prenom->Substring(0, 2) + nom->Substring(0, 2);
			ref += co->getDateEmission()->Substring(6, 4);
			ref += co->getAdresseLivraison()->getVille()->Substring(0, 3);
			ref += cr->getNombreCommand(co).ToString();
			co->setReferenceCommand(ref);
			this->label_view_reference_commande->Text = co->getReferenceCommand();
			this->button_add_article->Enabled = true;
			this->button_del_article->Enabled = true;
			this->button_add_reglement->Enabled = true;
			this->button_add_reglement->Enabled = true;
			this->Refresh();
		}

		void buttonValidClick(System::Object^ sender, System::EventArgs^ e) {
			bool reussi = true;
			DateTime^ date_liv, ^date_emi;
			String^ retrait;
			//date livraison
			try {
				date_liv = Convert::ToDateTime(this->txtbx_date_livraison->Text);
				this->txtbx_date_livraison->BackColor = System::Drawing::Color::White;
			}
			catch (System::FormatException^) {
				reussi = false;
				this->txtbx_date_livraison->BackColor = System::Drawing::Color::Red;
			}
			//date emission
			try {
				date_emi = Convert::ToDateTime(this->label_view_date_emission->Text);
				this->label_view_date_emission->BackColor = System::Drawing::Color::White;
			}
			catch (System::FormatException^) {
				reussi = false;
				this->label_view_date_emission->BackColor = System::Drawing::Color::Red;
			}
			//retrait
			try {
				if (this->txtbx_retrait->Text != "'" && this->txtbx_retrait->Text->Replace("'", "") != "") {
					retrait = this->txtbx_retrait->Text->Replace("'", " ");
					this->txtbx_retrait->BackColor = System::Drawing::Color::White;
				}
				else {
					reussi = false;
					this->txtbx_retrait->BackColor = System::Drawing::Color::Red;
				}
			}
			catch (System::FormatException^) {
				reussi = false;
				this->txtbx_retrait->BackColor = System::Drawing::Color::Red;
			}
			if (reussi) {
				//set numero client (client) import client
				co->setDateLivraison(date_liv);
				co->setAdresseLivraison((AdressObject^)cbobx_adresse_livraison->SelectedItem);
				co->setDateEmission(date_emi);
				co->setAdresseFacturation((AdressObject^)cbobx_adresse_emission->SelectedItem);
				co->setRetrait(retrait);
				co->setRemise(Convert::ToDecimal(label_view_remise->Text)); // pas sur
				co->setTotalCommand(Convert::ToDecimal(label_view_total_commande->Text)); // pas sur
				this->Close();
			}
		}

		void reload() {
			//reload data grid view
			this->dgv_article->Rows->Clear();
			for each (Cart ^ cart in co->getPanier()) {
				Forms::DataGridViewRow^ dgvr = gcnew Forms::DataGridViewRow();
				Forms::DataGridViewTextBoxCell^ dgvtbc = gcnew Forms::DataGridViewTextBoxCell();
				dgvtbc->Value = Convert::ToString(cart->article->getIdArticle());
				dgvr->Cells->Add(dgvtbc);
				Forms::DataGridViewTextBoxCell^ dgvtbc2 = gcnew Forms::DataGridViewTextBoxCell();
				dgvtbc2->Value = Convert::ToString(cart->article->getDesignation());
				dgvr->Cells->Add(dgvtbc2);
				Forms::DataGridViewTextBoxCell^ dgvtbc3 = gcnew Forms::DataGridViewTextBoxCell();
				dgvtbc3->Value = Convert::ToString(cart->quantite);
				dgvr->Cells->Add(dgvtbc3);
				Forms::DataGridViewTextBoxCell^ dgvtbc4 = gcnew Forms::DataGridViewTextBoxCell();
				dgvtbc4->Value = Convert::ToString(cart->article->getPrixHT());
				dgvr->Cells->Add(dgvtbc4);
				Forms::DataGridViewTextBoxCell^ dgvtbc5 = gcnew Forms::DataGridViewTextBoxCell();
				dgvtbc5->Value = Convert::ToString(cart->article->getTVA());
				dgvr->Cells->Add(dgvtbc5);
				Forms::DataGridViewTextBoxCell^ dgvtbc6 = gcnew Forms::DataGridViewTextBoxCell();
				dgvtbc6->Value = Convert::ToString(cart->getTotalTTC());
				dgvr->Cells->Add(dgvtbc6);

				dgvr->Tag = cart;
				this->dgv_article->Rows->Add(dgvr);
			}
			this->dgv_reglement->Rows->Clear();
			for each (ReglementObject ^ reglement in co->getReglement()) {
				Forms::DataGridViewRow^ dgvr = gcnew Forms::DataGridViewRow();
				Forms::DataGridViewTextBoxCell^ dgvtbc = gcnew Forms::DataGridViewTextBoxCell();
				dgvtbc->Value = Convert::ToString(reglement->getDatePaiementAff());
				dgvr->Cells->Add(dgvtbc);
				Forms::DataGridViewTextBoxCell^ dgvtbc2 = gcnew Forms::DataGridViewTextBoxCell();
				dgvtbc2->Value = Convert::ToString(reglement->getSoldePaiement());
				dgvr->Cells->Add(dgvtbc2);
				Forms::DataGridViewTextBoxCell^ dgvtbc3 = gcnew Forms::DataGridViewTextBoxCell();
				dgvtbc3->Value = Convert::ToString(reglement->getMoyenPaiement());
				dgvr->Cells->Add(dgvtbc3);

				dgvr->Tag = reglement;
				this->dgv_reglement->Rows->Add(dgvr);
			}
		}
	};

}
