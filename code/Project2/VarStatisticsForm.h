#pragma once
#include "BDD.h"
#include "StatisticsRepo.h"

namespace Display {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Repository;

	/// <summary>
	/// Summary for VarStatisticsForm
	/// </summary>
	public ref class VarStatisticsForm : public System::Windows::Forms::Form
	{
	public:
		VarStatisticsForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		BDD^ bdd;
		StatisticsRepo^ sr = gcnew Repository::StatisticsRepo(bdd);



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VarStatisticsForm()
		{
			if (components)
			{
				delete components;
			}
		}





	protected:
		void buttonVariations(System::Object^ sender, System::EventArgs^ e) {};
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ labelTVA;
	private: System::Windows::Forms::TextBox^ textBoxTVA;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::ComboBox^ comboBox1;
	//private: System::Windows::Forms::RadioButton^ radioButton1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelTVA = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxTVA = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(304, 94);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 50);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(304, 173);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(200, 50);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(304, 368);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(200, 50);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(304, 255);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(200, 50);
			this->textBox4->TabIndex = 3;
			//
			//label TVA
			//
			this->labelTVA->AutoSize = true;
			this->labelTVA->Location = System::Drawing::Point(374, 70);
			this->labelTVA->Name = L"labelTVA";
			this->labelTVA->Size = System::Drawing::Size(30, 16);
			this->labelTVA->TabIndex = 4;
			this->labelTVA->Text = L"TVA";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(361, 147);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Remise (en %)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(374, 226);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Marge";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(374, 421);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Prix final:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(362, 308);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Demarque";
			// 
			// comboBox1
			// 

			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(12, 46);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(259, 24);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &VarStatisticsForm::comboBox1_SelectedIndexChanged);
			//DataSet^ Items = sr->articlesMoins(); /*à l'origine de probleme*/
			/*int i = 0;
			while (i < Items->Tables[0]->Rows->Count) {
				this->comboBox1->Items->Add(Convert::ToString(Items->Tables[0]->Rows[i]));
				i++;
			}
			*/
			/*
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >() {
				Items;
			});
			*/
			this->textBoxTVA->Location = System::Drawing::Point(304, 10);
			this->textBoxTVA->Multiline = true;
			this->textBoxTVA->Name = L"textBoxTVA";
			this->textBoxTVA->Size = System::Drawing::Size(200, 50);
			this->textBoxTVA->TabIndex = 0;
			// 
			// VarStatisticsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(531, 444);
			this->Controls->Add(this->textBoxTVA);
			this->Controls->Add(this->labelTVA);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"VarStatisticsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Simulations";
			this->Load += gcnew System::EventHandler(this, &VarStatisticsForm::VarStatisticsForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void VarStatisticsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

		   /*
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ articleSelectionne = comboBox1->SelectedItem->ToString();

		String^ sqlQuery = "SELECT prixHT FROM Articles WHERE designation = '" + articleSelectionne + "'";
		DataSet^ result = bdd->executeQuery(sqlQuery);
		if (result && result->Tables->Count > 0 && result->Tables[0]->Rows->Count > 0) {
			double prixInitial = Convert::ToDouble(result->Tables[0]->Rows[0]["prixHT"]);

			double tva = 20.0;
			double prixTva = prixInitial * (tva / 100);
			if (radioButton1->Checked) {
				double prixFinaleAvecTVA = prixInitial + prixTva;
				textBox3->Text = prixFinaleAvecTVA.ToString();
			}
			else {
				textBox3->Text = "Article non selectione";
			}
		}
	}
	*/

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ articleSelectionne = comboBox1->SelectedItem->ToString();

		String^ sqlQuery = "SELECT prixHT FROM Article WHERE designation = '" + articleSelectionne + "'";
		DataSet^ result = bdd->executeQuery(sqlQuery);

		if (result && result->Tables->Count > 0 && result->Tables[0]->Rows->Count > 0) {
			double prixInitial = Convert::ToDouble(result->Tables[0]->Rows[0]/*["prixHT"]*/);

			//Remise
			double remisePourcentage = Convert::ToDouble(textBox1->Text);
			double remise = prixInitial * (remisePourcentage / 100);
			double prixAvecRemise = prixInitial - remise;
			textBox3->Text = prixAvecRemise.ToString();
		}
		else {
			textBox3->Text = "Remise invalide";
		}

		//Marge commerciale
		sqlQuery = "SELECT prixHT, prix_achat FROM Article WHERE designation = '" + articleSelectionne + "'";
		result = bdd->executeQuery(sqlQuery);

		if (result && result->Tables->Count > 0 && result->Tables[0]->Rows->Count > 0) {
			double prixHT = Convert::ToDouble(result->Tables[0]->Rows[0]/*["prixHT"]*/);
			double prixAchat = Convert::ToDouble(result->Tables[0]->Rows[0]/*["prix_achat"]*/ );

			double margeCommerciale = prixHT - prixAchat;
			textBox3->Text = margeCommerciale.ToString();
		}
		else {
			textBox3->Text = "Erreur de marge commerciale";
		}
	}
	};
}

