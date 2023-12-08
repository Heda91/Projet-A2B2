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

	/// <summary>
	/// Summary for StatisticsForm
	/// </summary>
	public ref class StatisticsForm : public System::Windows::Forms::Form
	{
	public:
		StatisticsForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		BDD^ bdd;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StatisticsForm()
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



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
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
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &StatisticsForm::comboBox1_SelectedIndexChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(377, 46);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(55, 20);
			this->radioButton1->TabIndex = 11;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"TVA";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &StatisticsForm::radioButton1_CheckedChanged);
			// 
			// StatisticsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(531, 444);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"StatisticsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Simulations";
			this->Load += gcnew System::EventHandler(this, &StatisticsForm::StatisticsForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void StatisticsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		/*String^*/Object^ articleSelectionne = comboBox1->SelectedItem/*->ToString()*/;

		String^ sqlQuery = "SELECT prixHT FROM Articles WHERE designation = '" + articleSelectionne + "'";
		DataSet^ result = bdd->executeQuery(sqlQuery);
		if (result && result->Tables->Count > 0 && result->Tables[0]->Rows->Count > 0) {
			double prixInitial = Convert::ToDouble(result->Tables[0]->Rows[0]/*["prixHT"]*/);

			double tva = 20.0;
			double prixTva = prixInitial * (tva / 100);
			if (radioButton1->Checked) {
				double prixFinaleAvecTVA = prixInitial + prixTva;
				textBox3->Text = prixFinaleAvecTVA.ToString();
			}
			else {
				textBox3->Text = "Article non sélectioné";
			}
		}
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ articleSelectionne = comboBox1->SelectedItem->ToString();

		String^ sqlQuery1 = "SELECT prixHT FROM Article WHERE designation = '" + articleSelectionne + "'";
		DataSet^ result1 = bdd->executeQuery(sqlQuery1);

		if (result1 && result1->Tables->Count > 0 && result1->Tables[0]->Rows->Count > 0) {
			double prixInitial1 = Convert::ToDouble(result1->Tables[0]->Rows[0]/*["prixHT"]*/);

			//Remise
			double remisePourcentage = Convert::ToDouble(textBox1->Text);
			double remise = prixInitial1 * (remisePourcentage / 100);
			double prixAvecRemise = prixInitial1 - remise;
			textBox3->Text = prixAvecRemise.ToString();
		}
		else {
			textBox3->Text = "Remise invalide";
		}

		//Marge commerciale
		String^ sqlQuery2 = "SELECT prixHT, prix_achat FROM Article WHERE designation = '" + articleSelectionne + "'";
		DataSet^ result2 = bdd->executeQuery(sqlQuery2);

		if (result2 && result2->Tables->Count > 0 && result2->Tables[0]->Rows->Count > 0) {
			double prixHT = Convert::ToDouble(result2->Tables[0]->Rows[0]/*["prixHT"] */ );
			double prixAchat = Convert::ToDouble(result2->Tables[0]->Rows[0]/*["prix_achat"]*/);

			double margeCommerciale = prixHT - prixAchat;
			textBox3->Text = margeCommerciale.ToString();
		}
		else {
			textBox3->Text = "Erreur de marge commerciale";
		}
	}
	};
}
