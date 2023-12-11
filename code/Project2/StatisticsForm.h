#pragma once
#include "BDD.h"
#include "StatisticsRepo.h"
#include "VarStatisticsForm.h"

namespace Display {

	using namespace Repository;
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
		BDD^ bdd = gcnew BDD();
		StatisticsRepo^ sr = gcnew StatisticsRepo(bdd);

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

	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ filter;
	protected:
		void buttonVariations(System::Object^ sender, System::EventArgs^ e) {};

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->filter = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(204, 71);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(470, 311);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->SelectionMode = Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->AutoSizeColumnsMode = Forms::DataGridViewAutoSizeColumnsMode::Fill;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Panier moyen", L"Chiffre d\'affaire", L"Produit sous le seuil de réapprovisionnement",
					L"Montant totale (Client)", L"Articles les plus vendus", L"Articles les moins vendus", L"Valeur commerciale", L"Valeur d\'achat du stock"
			});
			this->comboBox1->Location = System::Drawing::Point(12, 71);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(175, 24);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &StatisticsForm::comboBox1_SelectedIndexChanged);
			//
			// filtre
			//
			this->filter->Location = System::Drawing::Point(12, 100);
			this->filter->Multiline = true;
			this->filter->Name = L"textBox1";
			this->filter->Size = System::Drawing::Size(175, 23);
			this->filter->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Location = System::Drawing::Point(30, 170);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 23);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Variations prix";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &StatisticsForm::label1_Click);
			// 
			// StatisticsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(715, 444);
			this->MaximumSize = System::Drawing::Size(715, 444);
			this->MinimumSize = System::Drawing::Size(715, 444);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->filter);
			this->Name = L"StatisticsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StatisticsForm";
			this->Load += gcnew System::EventHandler(this, &StatisticsForm::StatisticsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void StatisticsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ selectedStat = comboBox1->SelectedItem->ToString();
		if (selectedStat == "Panier moyen") {
			dtgv_panier_moyen();
		}
		else if (selectedStat == "Chiffre d'affaire") {
			dtgv_chiffre_d_affaire();
		}
		else if (selectedStat == "Produit sous le seuil de réapprovisionnement") {
			dtgv_seuil_stock();
		}
		else if (selectedStat == "Montant totale (Client)") {
			dtgv_total_achat();
		}
		else if (selectedStat == "Articles les plus vendus") {
			dtgv_articles_plus();
		}
		else if (selectedStat == "Articles les moins vendus") {
			dtgv_articles_moins();
		}
		else if (selectedStat == "Valeur commerciale") {
			dtgv_valeur_commerciale();
		}
		else if (selectedStat == "Valeur d\'achat du stock") {
			dtgv_valeur_achat();
		}

	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		VarStatisticsForm^ varStats = gcnew VarStatisticsForm();
		varStats->Show();
	}

		   void clear_data() {
			   dataGridView1->Rows->Clear();
			   dataGridView1->Columns->Clear();
		   }
		   void dtgv_panier_moyen() {
			   clear_data();

			   DataGridViewTextBoxColumn^ dgvtbco = gcnew DataGridViewTextBoxColumn();
			   dgvtbco->Name = "panier_moyen";
			   this->dataGridView1->Columns->Add(dgvtbco);

			   DataGridViewRow^ dgvr = gcnew DataGridViewRow();
			   DataGridViewTextBoxCell^ dgvtbc = gcnew DataGridViewTextBoxCell();
			   dgvtbc->Value = Convert::ToString(sr->panierMoyen());
			   dgvr->Cells->Add(dgvtbc);
			   this->dataGridView1->Rows->Add(dgvr);
		   }

		   void dtgv_chiffre_d_affaire() {
			   clear_data();

			   DataGridViewTextBoxColumn^ dgvtbcoca = gcnew DataGridViewTextBoxColumn();
			   dgvtbcoca->Name = "chiffre d'affaire";
			   this->dataGridView1->Columns->Add(dgvtbcoca);

			   DataGridViewRow^ dgvrca = gcnew DataGridViewRow();
			   DataGridViewTextBoxCell^ dgvtbcca = gcnew DataGridViewTextBoxCell();
			   dgvtbcca->Value = Convert::ToString(sr->chiffreA());
			   dgvrca->Cells->Add(dgvtbcca);
			   this->dataGridView1->Rows->Add(dgvrca);
		   }

		   void dtgv_seuil_stock() {
			   clear_data();

			   DataGridViewTextBoxColumn^ dgvtbcost = gcnew DataGridViewTextBoxColumn();
			   dgvtbcost->Name = "designation";
			   this->dataGridView1->Columns->Add(dgvtbcost);
			   DataGridViewTextBoxColumn^ dgvtbcost1 = gcnew DataGridViewTextBoxColumn();
			   dgvtbcost1->Name = "id_article";
			   this->dataGridView1->Columns->Add(dgvtbcost1);
			   DataSet^ ds = sr->seuilStock();
			   for (int i = 0; i < ds->Tables[0]->Rows->Count; i++) {
				   DataGridViewRow^ dgvrst = gcnew DataGridViewRow();
				   DataGridViewTextBoxCell^ dgvtbcst = gcnew DataGridViewTextBoxCell();
				   dgvtbcst->Value = Convert::ToString(ds->Tables[0]->Rows[i]->ItemArray[0]);
				   dgvrst->Cells->Add(dgvtbcst);
				   DataGridViewTextBoxCell^ dgvtbcst1 = gcnew DataGridViewTextBoxCell();
				   dgvtbcst1->Value = Convert::ToString(ds->Tables[0]->Rows[i]->ItemArray[1]);
				   dgvrst->Cells->Add(dgvtbcst1);
				   this->dataGridView1->Rows->Add(dgvrst);
			   }
		   }
		   void dtgv_total_achat() {
			   clear_data();
			   DataGridViewTextBoxColumn^ dgvtbcprenom = gcnew DataGridViewTextBoxColumn();
			   dgvtbcprenom->Name = "prenom";
			   this->dataGridView1->Columns->Add(dgvtbcprenom);

			   DataGridViewTextBoxColumn^ dgvtbcnom = gcnew DataGridViewTextBoxColumn();
			   dgvtbcnom->Name = "nom";
			   this->dataGridView1->Columns->Add(dgvtbcnom);

			   DataGridViewTextBoxColumn^ dgvtbctotal = gcnew DataGridViewTextBoxColumn();
			   dgvtbctotal->Name = "total";
			   this->dataGridView1->Columns->Add(dgvtbctotal);

			   DataSet^ ds = sr->totalAchat();
			   for (int i = 0; i < ds->Tables[0]->Rows->Count; i++) {
				   DataGridViewRow^ dgvr = gcnew DataGridViewRow();
				   DataGridViewTextBoxCell^ dgvtbc = gcnew DataGridViewTextBoxCell();
				   dgvtbc->Value = Convert::ToString(ds->Tables[0]->Rows[i]->ItemArray[0]);
				   dgvr->Cells->Add(dgvtbc);
				   DataGridViewTextBoxCell^ dgvtbc1 = gcnew DataGridViewTextBoxCell();
				   dgvtbc1->Value = Convert::ToString(ds->Tables[0]->Rows[i]->ItemArray[1]);
				   dgvr->Cells->Add(dgvtbc1);
				   DataGridViewTextBoxCell^ dgvtbc2 = gcnew DataGridViewTextBoxCell();
				   dgvtbc2->Value = Convert::ToString(ds->Tables[0]->Rows[i]->ItemArray[2]);
				   dgvr->Cells->Add(dgvtbc2);
				   this->dataGridView1->Rows->Add(dgvr);
			   }
		   }

		   void dtgv_articles_plus() {
			   clear_data();
			   DataGridViewTextBoxColumn^ dgvtbcprenom = gcnew DataGridViewTextBoxColumn();
			   dgvtbcprenom->Name = "id_article";
			   this->dataGridView1->Columns->Add(dgvtbcprenom);

			   DataGridViewTextBoxColumn^ dgvtbcnom = gcnew DataGridViewTextBoxColumn();
			   dgvtbcnom->Name = "designation";
			   this->dataGridView1->Columns->Add(dgvtbcnom);


			   DataSet^ ds = sr->articlesPlus();
			   for (int i = 0; i < ds->Tables[0]->Rows->Count; i++) {
				   DataGridViewRow^ dgvr = gcnew DataGridViewRow();
				   DataGridViewTextBoxCell^ dgvtbc = gcnew DataGridViewTextBoxCell();
				   dgvtbc->Value = Convert::ToString(ds->Tables[0]->Rows[i]->ItemArray[0]);
				   dgvr->Cells->Add(dgvtbc);
				   DataGridViewTextBoxCell^ dgvtbc1 = gcnew DataGridViewTextBoxCell();
				   dgvtbc1->Value = Convert::ToString(ds->Tables[0]->Rows[i]->ItemArray[1]);
				   dgvr->Cells->Add(dgvtbc1);
				   this->dataGridView1->Rows->Add(dgvr);
			   }
		   }

		   void dtgv_articles_moins() {
			   clear_data();
			   DataGridViewTextBoxColumn^ dgvtbcprenom = gcnew DataGridViewTextBoxColumn();
			   dgvtbcprenom->Name = "id_article";
			   this->dataGridView1->Columns->Add(dgvtbcprenom);

			   DataGridViewTextBoxColumn^ dgvtbcnom = gcnew DataGridViewTextBoxColumn();
			   dgvtbcnom->Name = "designation";
			   this->dataGridView1->Columns->Add(dgvtbcnom);


			   DataSet^ ds = sr->articlesMoins();
			   for (int i = 0; i < ds->Tables[0]->Rows->Count; i++) {
				   DataGridViewRow^ dgvr = gcnew DataGridViewRow();
				   DataGridViewTextBoxCell^ dgvtbc = gcnew DataGridViewTextBoxCell();
				   dgvtbc->Value = Convert::ToString(ds->Tables[0]->Rows[i]->ItemArray[0]);
				   dgvr->Cells->Add(dgvtbc);
				   DataGridViewTextBoxCell^ dgvtbc1 = gcnew DataGridViewTextBoxCell();
				   dgvtbc1->Value = Convert::ToString(ds->Tables[0]->Rows[i]->ItemArray[1]);
				   dgvr->Cells->Add(dgvtbc1);
				   this->dataGridView1->Rows->Add(dgvr);
			   }
		   }

		   void dtgv_valeur_commerciale() {
			   clear_data();

			   DataGridViewTextBoxColumn^ dgvtbco = gcnew DataGridViewTextBoxColumn();
			   dgvtbco->Name = "valeur_commerciale";
			   this->dataGridView1->Columns->Add(dgvtbco);

			   DataGridViewRow^ dgvr = gcnew DataGridViewRow();
			   DataGridViewTextBoxCell^ dgvtbc = gcnew DataGridViewTextBoxCell();
			   dgvtbc->Value = Convert::ToString(sr->valeurCommerciale());
			   dgvr->Cells->Add(dgvtbc);
			   this->dataGridView1->Rows->Add(dgvr);
		   }
		   void dtgv_valeur_achat() {
			   clear_data();

			   DataGridViewTextBoxColumn^ dgvtbco = gcnew DataGridViewTextBoxColumn();
			   dgvtbco->Name = "valeur_achat";
			   this->dataGridView1->Columns->Add(dgvtbco);

			   DataGridViewRow^ dgvr = gcnew DataGridViewRow();
			   DataGridViewTextBoxCell^ dgvtbc = gcnew DataGridViewTextBoxCell();
			   dgvtbc->Value = Convert::ToString(sr->valeurAchat());
			   dgvr->Cells->Add(dgvtbc);
			   this->dataGridView1->Rows->Add(dgvr);
		   }

	};
}
