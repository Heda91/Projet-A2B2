#pragma once
#include "BDD.h"
#include "PersonnelForm.h"
#include "ClientForm.h"
#include "CommandForm2.h"
#include "ArticleForm.h"
#include "StatisticsForm.h"
#include <stdio.h>
#include <iostream>

using namespace Display;


namespace Display {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description resumee de MyForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(BDD^ bdd)
		{
			my_bdd = bdd;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			printf("%s\n", "b");
			System::Diagnostics::Debug::WriteLine("Connexion ok");
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisees.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button6;

	private:
		BDD^ my_bdd;
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Methode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette methode avec l'editeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(133, 42);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(288, 54);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Personnel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(133, 113);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(288, 53);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Clients";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(133, 190);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(288, 54);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Commandes";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(133, 276);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(288, 49);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Articles";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(133, 353);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(288, 50);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Statistiques";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(556, 453);
			this->MaximumSize = this->Size;
			this->MinimumSize = this->Size;
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Diagnostics::Debug::WriteLine("aaa\n\n\n\n\n\n\n\n\n\n\n\naaa");
		//MyForm1^ form1 = gcnew MyForm1(); // Creez une instance de MyForm1
		PersonnelForm Personnel(my_bdd);
		Personnel.ShowDialog(); // Affichez MyForm1
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		ClientForm Client(my_bdd);
		Client.ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		CommandForm2 Command(my_bdd);
		Command.ShowDialog(); // Affichez MyForm1
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		ArticleForm Article(my_bdd);
		Article.ShowDialog(); // Affichez MyForm1
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		StatistiquesForm Statistiques;
		Statistiques.ShowDialog(); // Affichez MyForm1
	}
	};
}
