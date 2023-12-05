#pragma once

namespace Display {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de ViewClient
	/// </summary>
	public ref class ViewClientForm : public System::Windows::Forms::Form
	{
	public:
		ViewClientForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~ViewClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: //id, nom, prenom, naissance, livraison, factu
		Forms::Label^ label_id;
		Forms::Label^ label_view_id;
		Forms::Label^ label_nom;
		Forms::Label^ label_view_nom;
		Forms::Label^ label_prenom;
		Forms::Label^ label_view_prenom;
		Forms::Label^ label_naissance;
		Forms::Label^ label_view_naissance;
		Forms::Label^ label_livraison;
		Forms::ComboBox^ comboBox_livraison;
		Forms::Label^ label_facturation;
		Forms::ComboBox^ comboBox_facturation;

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
		void InitializeComponent(void)
		{
			this->label_id = (gcnew System::Windows::Forms::Label());
			this->label_view_id = (gcnew System::Windows::Forms::Label());
			this->label_nom = (gcnew System::Windows::Forms::Label());
			this->label_view_nom = (gcnew System::Windows::Forms::Label());
			this->label_prenom = (gcnew System::Windows::Forms::Label());
			this->label_view_prenom = (gcnew System::Windows::Forms::Label());
			this->label_naissance = (gcnew System::Windows::Forms::Label());
			this->label_view_naissance = (gcnew System::Windows::Forms::Label());
			this->label_livraison = (gcnew System::Windows::Forms::Label());
			this->comboBox_livraison = (gcnew System::Windows::Forms::ComboBox());
			this->label_facturation = (gcnew System::Windows::Forms::Label());
			this->comboBox_facturation = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			/*
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(301, 9);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 26;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 29);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 29);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Prenom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 182);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(223, 29);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Date de naissance";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(301, 63);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 17;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(301, 122);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 18;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(301, 182);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 19;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 244);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(255, 29);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Adresses de livraison";
			// 
			// comboBox1
			// 
			this->comboBox1->Enabled = false;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(301, 244);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 301);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(279, 29);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Adresses de facturation";
			// 
			// comboBox2
			// 
			this->comboBox2->Enabled = false;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(301, 301);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 24;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 29);
			this->label6->TabIndex = 25;
			this->label6->Text = L"ID Client";
			this->label6->Click += gcnew System::EventHandler(this, &ViewClientForm::label6_Click);
			// 
			// ViewClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(433, 426);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ViewClientForm";
			this->Text = L"ViewClient";
			this->Load += gcnew System::EventHandler(this, &ViewClientForm::ViewClient_Load);
			*/
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ViewClient_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
