#pragma once
#include "AdressObject.h"

namespace Display {

	using namespace System::Windows;
	using namespace Object;

	/// <summary>
	/// Description r�sum�e de ViewPersonnel
	/// </summary>
	public ref class AddAdressForm : public System::Windows::Forms::Form
	{
	public:
		AddAdressForm(AdressObject^ ao) { InitializeComponent(ao); }

	protected:
		~AddAdressForm() { if (components) { delete components; } }
		AdressObject^ ao = nullptr;
	private:
		Forms::Label^ label_numero;
		Forms::TextBox^ txtbx_numero;
		Forms::Label^ label_rue;
		Forms::TextBox^ txtbx_rue;
		Forms::Label^ label_code_postale;
		Forms::TextBox^ txtbx_code_postale;
		Forms::Label^ label_ville;
		Forms::TextBox^ txtbx_ville;
		Forms::Button^ button_valid;

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(AdressObject^ ao)
		{
			this->ao = ao;

			this->label_numero = (gcnew System::Windows::Forms::Label());
			this->txtbx_numero = (gcnew System::Windows::Forms::TextBox());
			this->label_rue = (gcnew System::Windows::Forms::Label());
			this->txtbx_rue = (gcnew System::Windows::Forms::TextBox());
			this->label_code_postale = (gcnew System::Windows::Forms::Label());
			this->txtbx_code_postale = (gcnew System::Windows::Forms::TextBox());
			this->label_ville = (gcnew System::Windows::Forms::Label());
			this->txtbx_ville = (gcnew System::Windows::Forms::TextBox());
			this->button_valid = gcnew Forms::Button();
			this->SuspendLayout();
			// 
			//  numero
			// 
			this->label_numero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_numero->Location = System::Drawing::Point(15, 15);
			this->label_numero->Size = System::Drawing::Size(220, 30);
			this->label_numero->TabStop = true;
			this->label_numero->Name = L"label_numero";
			this->label_numero->Text = L"numero";
			// 
			// txtbx numero
			// 
			this->txtbx_numero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_numero->Location = System::Drawing::Point(250, 15);
			this->txtbx_numero->Size = System::Drawing::Size(220, 30);
			this->txtbx_numero->TabIndex = 1;
			this->txtbx_numero->Name = L"txtbx_nom";
			this->txtbx_numero->Text = "";
			// 
			// rue
			// 
			this->label_rue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_rue->Location = System::Drawing::Point(15, 50); //15+30+5
			this->label_rue->Size = System::Drawing::Size(220, 30);
			this->label_rue->TabStop = true;
			this->label_rue->Name = L"label_rue";
			this->label_rue->Text = L"Rue";
			// 
			// twtbx rue
			// 
			this->txtbx_rue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_rue->Location = System::Drawing::Point(250, 50);
			this->txtbx_rue->Size = System::Drawing::Size(220, 30);
			this->txtbx_rue->TabIndex = 2;
			this->txtbx_rue->Name = L"txtbx_rue";
			this->txtbx_rue->Text = "";
			// 
			// code postale
			// 
			this->label_code_postale->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_code_postale->Location = System::Drawing::Point(15, 85);//50+30+5
			this->label_code_postale->Size = System::Drawing::Size(220, 30);
			this->label_code_postale->TabStop = true;
			this->label_code_postale->Name = L"label_code_postale";
			this->label_code_postale->Text = L"Code Postale";
			// 
			// txtbx code postale
			// 
			this->txtbx_code_postale->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_code_postale->Location = System::Drawing::Point(250, 85);
			this->txtbx_code_postale->Size = System::Drawing::Size(220, 30);
			this->txtbx_code_postale->TabIndex = 3;
			this->txtbx_code_postale->Name = L"txtbx_code_postale";
			this->txtbx_code_postale->Text = "";
			// 
			// ville
			// 
			this->label_ville->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_ville->Location = System::Drawing::Point(15, 120);//85+30+5
			this->label_ville->Size = System::Drawing::Size(220, 30);
			this->label_ville->TabStop = true;
			this->label_ville->Name = L"label_ville";
			this->label_ville->Text = L"Ville";
			// 
			// txtbx ville
			// 
			this->txtbx_ville->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_ville->Location = System::Drawing::Point(250, 120);
			this->txtbx_ville->Size = System::Drawing::Size(220, 30);
			this->txtbx_ville->TabIndex = 4;
			this->txtbx_ville->Name = L"txtbx_ville";
			this->txtbx_ville->Text = "";
			//
			// valider
			// 
			this->button_valid->Location = System::Drawing::Point(370, 230);
			this->button_valid->Margin = Forms::Padding(1);
			this->button_valid->Size = System::Drawing::Size(100, 30);
			this->button_valid->UseVisualStyleBackColor = true;
			this->button_valid->Name = L"button_valid";
			this->button_valid->Text = L"Valider";
			this->button_valid->TabIndex = 5;
			this->button_valid->Click += gcnew System::EventHandler(this, &Display::AddAdressForm::buttonValidClick);
			// 
			// ViewClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Size = System::Drawing::Size(500, 300);//190+30+5
			this->MinimumSize = this->Size;
			this->MaximumSize = this->Size;
			this->Controls->Add(this->label_numero);
			this->Controls->Add(this->txtbx_numero);
			this->Controls->Add(this->label_rue);
			this->Controls->Add(this->txtbx_rue);
			this->Controls->Add(this->label_code_postale);
			this->Controls->Add(this->txtbx_code_postale);
			this->Controls->Add(this->label_ville);
			this->Controls->Add(this->txtbx_ville);
			this->Controls->Add(this->button_valid);
			this->Name = L"AddAdressForm";
			this->Text = L"Ajouter une addresse";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void buttonValidClick(System::Object^ sender, System::EventArgs^ e) {
			bool reussi = true;
			int num = 0;
			String^ code_postale = "0";
			String^ rue = "";
			String^ ville = "";
			//numero
			try {
				if (this->txtbx_numero->Text != "'" && this->txtbx_numero->Text->Replace("'", "") != "" && Convert::ToInt16(this->txtbx_numero->Text->Replace("'", "")) > 0) {
					num = Convert::ToInt16(this->txtbx_numero->Text->Replace("'", " ") == "" ? "0" : txtbx_numero->Text);
					this->txtbx_numero->BackColor = System::Drawing::Color::White;
				}
				else {
					reussi = false;
					this->txtbx_numero->BackColor = System::Drawing::Color::Red;
				}
			}
			catch (System::FormatException^) {
				reussi = false;
				this->txtbx_numero->BackColor = System::Drawing::Color::Red;
			}
			catch (System::OverflowException^) {
				reussi = false;
				this->txtbx_numero->BackColor = System::Drawing::Color::Red;
			}
			//rue
			try {
				if (this->txtbx_rue->Text != "'" && this->txtbx_rue->Text->Replace("'", "") != "") {
					rue = this->txtbx_rue->Text->Replace("'", " ");
					this->txtbx_rue->BackColor = System::Drawing::Color::White;
				}
				else {
					reussi = false;
					this->txtbx_rue->BackColor = System::Drawing::Color::Red;
				}
			}
			catch (System::FormatException^) {
				reussi = false;
				this->txtbx_rue->BackColor = System::Drawing::Color::Red;
			}
			//code postale
			try {
				if (this->txtbx_code_postale->Text != "'" && this->txtbx_code_postale->Text->Replace("'", "") != "" && Convert::ToInt32(this->txtbx_code_postale->Text->Replace("'", "")) > 0  && this->txtbx_code_postale->Text->Replace("'", "")->Length == 5) {
					code_postale = Convert::ToString(this->txtbx_code_postale->Text->Replace("'", " ") == "" ? "0" : txtbx_code_postale->Text->Replace("'", " "));
					this->txtbx_code_postale->BackColor = System::Drawing::Color::White;
				}
				else {
					reussi = false;
					this->txtbx_code_postale->BackColor = System::Drawing::Color::Red;
				}
			}
			catch (System::FormatException^) {
				reussi = false;
				this->txtbx_code_postale->BackColor = System::Drawing::Color::Red;
			}
			//Ville
			try {
				if (this->txtbx_ville->Text != "'" && this->txtbx_ville->Text->Replace("'", "") != "") {
					ville = this->txtbx_ville->Text->Replace("'", " ");
					this->txtbx_ville->BackColor = System::Drawing::Color::White;
				}
				else {
					reussi = false;
					this->txtbx_ville->BackColor = System::Drawing::Color::Red;
				}
			}
			catch (System::FormatException^) {
				reussi = false;
				this->txtbx_ville->BackColor = System::Drawing::Color::Red;
			}

			if (reussi) {
				ao->setNumero(num);
				ao->setRue(rue);
				ao->setCodePostale(code_postale);
				ao->setVille(ville);
				this->Close();
			}
		};
	};
}
