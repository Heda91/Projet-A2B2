#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ViewPersonnel
	/// </summary>
	public ref class ViewPersonnel : public System::Windows::Forms::Form
	{
	public:
		ViewPersonnel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ViewPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox4;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(301, 9);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 38;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(158, 29);
			this->label6->TabIndex = 37;
			this->label6->Text = L"ID Personnel";
			this->label6->Click += gcnew System::EventHandler(this, &ViewPersonnel::label6_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->Enabled = false;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(301, 339);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 36;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 339);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(279, 29);
			this->label5->TabIndex = 35;
			this->label5->Text = L"Adresses de facturation";
			// 
			// comboBox1
			// 
			this->comboBox1->Enabled = false;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(301, 282);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 34;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 282);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(255, 29);
			this->label4->TabIndex = 33;
			this->label4->Text = L"Adresses de livraison";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(301, 178);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 31;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(301, 119);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 30;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 178);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 29);
			this->label2->TabIndex = 28;
			this->label2->Text = L"Prénom";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 29);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Nom";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(301, 230);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 40;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 230);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(211, 29);
			this->label7->TabIndex = 39;
			this->label7->Text = L"Date d\'embauche";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(301, 65);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 42;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 29);
			this->label3->TabIndex = 41;
			this->label3->Text = L"ID Supérieur";
			// 
			// ViewPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(454, 512);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ViewPersonnel";
			this->Text = L"ViewPersonnel";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
