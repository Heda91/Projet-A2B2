/*#pragma once
#include "CommandObject.h"
namespace Display {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Object;

	/// <summary>
	/// Description r�sum�e de ModifyCommand
	/// </summary>
	public ref class ModifCommandForm : public System::Windows::Forms::Form
	{
	public:
		ModifCommandForm(CommandObject^ co)
		{
			InitializeComponent(co);
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~ModifCommandForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;

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
		void InitializeComponent(CommandObject^ co)
		{
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(491, 268);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(24, 23);
			this->button4->TabIndex = 26;
			this->button4->Text = L"-";
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ModifCommandForm::button4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(28, 207);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(266, 29);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Adresse de facturation";
			this->label5->Click += gcnew System::EventHandler(this, &ModifCommandForm::label5_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(454, 268);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(24, 23);
			this->button1->TabIndex = 22;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModifCommandForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(28, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(242, 29);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Adresse de livraison";
			this->label4->Click += gcnew System::EventHandler(this, &ModifCommandForm::label4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(317, 95);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 18;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &ModifCommandForm::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(317, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 17;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ModifCommandForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(28, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 29);
			this->label2->TabIndex = 15;
			this->label2->Text = L"ID Client";
			this->label2->Click += gcnew System::EventHandler(this, &ModifCommandForm::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 29);
			this->label1->TabIndex = 14;
			this->label1->Text = L"R�f�rence";
			this->label1->Click += gcnew System::EventHandler(this, &ModifCommandForm::label1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(317, 271);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 32;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(28, 268);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 29);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Articles";
			this->label6->Click += gcnew System::EventHandler(this, &ModifCommandForm::label6_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(317, 212);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 35;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(317, 155);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 34;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 417);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(203, 29);
			this->label3->TabIndex = 36;
			this->label3->Text = L"Solde, date, type";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(317, 425);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 37;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(423, 425);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 38;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(529, 425);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 39;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(635, 425);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(24, 23);
			this->button2->TabIndex = 40;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(33, 315);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(626, 82);
			this->dataGridView1->TabIndex = 41;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(33, 467);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(626, 82);
			this->dataGridView2->TabIndex = 42;
			// 
			// ModifyCommand
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(855, 591);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ModifCommand";
			this->Text = L"ModifCommand";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}



	};
}
*/


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
			this->button_valid->Click += gcnew System::EventHandler(this, &Display::ModifCommandForm::buttonValidClick);
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
