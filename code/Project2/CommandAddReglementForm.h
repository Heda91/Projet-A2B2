#pragma once
#include "ReglementObject.h"

namespace Display {
	using namespace Object;
	using namespace System::Windows;
	ref class CommandAddReglementForm : public Forms::Form
	{
	public:
		CommandAddReglementForm(ReglementObject^ ro) { InitializeComponent(ro); }

	protected:
		~CommandAddReglementForm() { if (components) { delete components; } }
		ReglementObject^ ro = nullptr;
	private:
		Forms::Label^ label_date_paiement;
		Forms::Label^ label_view_date_paiement;
		Forms::Label^ label_moyen_paiement;
		Forms::TextBox^ txtbx_moyen_paiement;;
		Forms::Label^ label_solde_paiement;
		Forms::TextBox^ txtbx_solde_paiement;
		Forms::Button^ button_valid;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(ReglementObject^ ro) {
			this->ro = ro;

			this->label_date_paiement = gcnew Forms::Label();
			this->label_view_date_paiement = gcnew Forms::Label();
			this->label_moyen_paiement = gcnew Forms::Label();
			this->txtbx_moyen_paiement = gcnew Forms::TextBox();
			this->label_solde_paiement = gcnew Forms::Label();
			this->txtbx_solde_paiement = gcnew Forms::TextBox();
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
			const int size_y_form = 5 * (size_y + step_y) + pos_y_start;
			// 
			// numero client
			// 
			this->label_date_paiement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_date_paiement->Location = System::Drawing::Point(pos_x, pos_y_start);
			this->label_date_paiement->Size = System::Drawing::Size(size_x, size_y);
			this->label_date_paiement->TabStop = true;
			this->label_date_paiement->Name = L"label_date_paiement";
			this->label_date_paiement->Text = L"Date";
			// 
			// view numero client
			// 
			this->label_view_date_paiement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_date_paiement->Location = System::Drawing::Point(pos_x_view, pos_y_start);
			this->label_view_date_paiement->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_date_paiement->TabIndex = 1;
			this->label_view_date_paiement->Name = L"label_view_date_paiement";
			DateTime^ now = gcnew DateTime();
			this->label_view_date_paiement->Text = now->Today.ToString("dd/MM/yyyy");
			this->label_view_date_paiement->BorderStyle = Forms::BorderStyle::FixedSingle;
			// 
			// nom
			// 
			this->label_moyen_paiement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_moyen_paiement->Location = System::Drawing::Point(pos_x, 1 * (size_y + step_y) + pos_y_start); //15+30+5
			this->label_moyen_paiement->Size = System::Drawing::Size(size_x, size_y);
			this->label_moyen_paiement->TabStop = true;
			this->label_moyen_paiement->Name = L"label_moyen_paiement";
			this->label_moyen_paiement->Text = L"Moyen";
			// 
			// view nom
			// 
			this->txtbx_moyen_paiement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_moyen_paiement->Location = System::Drawing::Point(pos_x_view, 1 * (size_y + step_y) + pos_y_start);
			this->txtbx_moyen_paiement->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_moyen_paiement->TabIndex = 2;
			this->txtbx_moyen_paiement->Name = L"txtbx_moyen_paiement";
			this->txtbx_moyen_paiement->Text = "";
			this->txtbx_moyen_paiement->BorderStyle = Forms::BorderStyle::FixedSingle;
			// 
			// prenom
			// 
			this->label_solde_paiement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_solde_paiement->Location = System::Drawing::Point(pos_x, 2 * (size_y + step_y) + pos_y_start);//50+30+5
			this->label_solde_paiement->Size = System::Drawing::Size(size_x, size_y);
			this->label_solde_paiement->TabStop = true;
			this->label_solde_paiement->Name = L"label_solde_paiement";
			this->label_solde_paiement->Text = L"Solde";
			// 
			// view prenom
			// 
			this->txtbx_solde_paiement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_solde_paiement->Location = System::Drawing::Point(pos_x_view, 2 * (size_y + step_y) + pos_y_start);
			this->txtbx_solde_paiement->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_solde_paiement->TabIndex = 3;
			this->txtbx_solde_paiement->Name = L"txtbx_solde_paiement";
			this->txtbx_solde_paiement->Text = "";
			this->txtbx_solde_paiement->BorderStyle = Forms::BorderStyle::FixedSingle;
			//
			// valider
			// 
			this->button_valid->Location = System::Drawing::Point(pos_x_view + size_x_view - size_x_valid, 3 * (size_y + step_y) + pos_y_start);
			this->button_valid->Margin = Forms::Padding(1);
			this->button_valid->Size = System::Drawing::Size(size_x_valid, size_y);
			this->button_valid->UseVisualStyleBackColor = true;
			this->button_valid->Name = L"button_valid";
			this->button_valid->Text = L"Valider";
			this->button_valid->TabIndex = 4;
			this->button_valid->Click += gcnew System::EventHandler(this, &Display::CommandAddReglementForm::buttonValidClick);
			//CommandAddReglementForm
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Size = System::Drawing::Size(size_x_form, size_y_form);//190+30+5
			this->MinimumSize = this->Size;
			this->MaximumSize = this->Size;
			this->Controls->Add(this->label_date_paiement);
			this->Controls->Add(this->label_view_date_paiement);
			this->Controls->Add(this->label_moyen_paiement);
			this->Controls->Add(this->txtbx_moyen_paiement);
			this->Controls->Add(this->label_solde_paiement);
			this->Controls->Add(this->txtbx_solde_paiement);
			this->Controls->Add(this->button_valid);
			this->Name = L"CommandAddReglementForm";
			this->Text = "Ajouter reglement";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void buttonValidClick(System::Object^ sender, System::EventArgs^ e) {
			bool reussi = true;
			String^ moyen;
			Decimal^ solde;
			//moyen
			try {
				if (this->txtbx_moyen_paiement->Text != "'" && this->txtbx_moyen_paiement->Text->Replace("'", "") != "") {
					moyen = this->txtbx_moyen_paiement->Text->Replace("'", " ");
					this->txtbx_moyen_paiement->BackColor = System::Drawing::Color::White;
				}
				else {
					reussi = false;
					this->txtbx_moyen_paiement->BackColor = System::Drawing::Color::Red;
				}
			}
			catch (System::FormatException^) {
				reussi = false;
				this->txtbx_moyen_paiement->BackColor = System::Drawing::Color::Red;
			}
			//solde
			try {
				if (this->txtbx_solde_paiement->Text != "'" && this->txtbx_solde_paiement->Text->Replace("'", "") != "" && Convert::ToSingle(this->txtbx_solde_paiement->Text->Replace("'", "")) > 0) {
					solde = Convert::ToDecimal(this->txtbx_solde_paiement->Text->Replace("'", " "));
					this->txtbx_solde_paiement->BackColor = System::Drawing::Color::White;
				}
				else {
					reussi = false;
					this->txtbx_solde_paiement->BackColor = System::Drawing::Color::Red;
				}
			}
			catch (System::FormatException^) {
				reussi = false;
				this->txtbx_solde_paiement->BackColor = System::Drawing::Color::Red;
			}
			catch (System::OverflowException^) {
				reussi = false;
				this->txtbx_solde_paiement->BackColor = System::Drawing::Color::Red;
			}

			if (reussi) {
				ro->setDatePaiement(Convert::ToDateTime(label_view_date_paiement->Text));
				ro->setMoyenPaiement(moyen);
				ro->setSoldePaiement(solde);

				this->Close();
			};
		}
	};
}
