#pragma once

namespace Display {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de ModifPersonnel
	/// </summary>
	public ref class ModifPersonnelForm : public System::Windows::Forms::Form
	{
	public:
		ModifPersonnelForm(void)
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
		~ModifPersonnelForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
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
			// button3
			// 
			this->button3->Location = System::Drawing::Point(479, 244);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(24, 23);
			this->button3->TabIndex = 27;
			this->button3->Text = L"-";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(479, 187);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(24, 23);
			this->button4->TabIndex = 26;
			this->button4->Text = L"-";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(442, 244);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(24, 23);
			this->button2->TabIndex = 25;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(301, 244);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 24;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label5->Location = System::Drawing::Point(12, 244);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(266, 29);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Adresse de facturation";
=======
			this->label_id_personnel->Location = System::Drawing::Point(pos_x, pos_y_start);
			this->label_id_personnel->Size = System::Drawing::Size(size_x, size_y);
			this->label_id_personnel->TabStop = true;
			this->label_id_personnel->Name = L"label_id_personnel";
			this->label_id_personnel->Text = L"id personnel";
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(442, 187);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(24, 23);
			this->button1->TabIndex = 22;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(301, 187);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label4->Location = System::Drawing::Point(12, 187);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(242, 29);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Adresse de livraison";
=======
			this->label_view_id_personnel->Location = System::Drawing::Point(pos_x_view, pos_y_start);
			this->label_view_id_personnel->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_id_personnel->TabIndex = 1;
			this->label_view_id_personnel->Name = L"label_view_id_personnel";
			this->label_view_id_personnel->Text = po->getIdPersonnel();
			this->label_view_id_personnel->BorderStyle = Forms::BorderStyle::FixedSingle;
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(301, 128);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 19;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(301, 68);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 18;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(301, 9);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label3->Location = System::Drawing::Point(12, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(211, 29);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Date d\'embauche";
=======
			this->label_nom->Location = System::Drawing::Point(pos_x, 1 * (size_y + step_y) + pos_y_start); //15+30+5
			this->label_nom->Size = System::Drawing::Size(size_x, size_y);
			this->label_nom->TabStop = true;
			this->label_nom->Name = L"label_nom";
			this->label_nom->Text = L"Nom";
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label2->Location = System::Drawing::Point(12, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 29);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Pr�nom";
=======
			this->txtbx_nom->Location = System::Drawing::Point(pos_x_view, 1 * (size_y + step_y) + pos_y_start);
			this->txtbx_nom->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_nom->TabIndex = 2;
			this->txtbx_nom->Name = L"txtbx_nom";
			this->txtbx_nom->Text = po->getNom();
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 29);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Nom";
=======
			this->label_prenom->Location = System::Drawing::Point(pos_x, 2 * (size_y + step_y) + pos_y_start);//50+30+5
			this->label_prenom->Size = System::Drawing::Size(size_x, size_y);
			this->label_prenom->TabStop = true;
			this->label_prenom->Name = L"label_prenom";
			this->label_prenom->Text = L"Prenom";
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(301, 307);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 29;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label6->Location = System::Drawing::Point(12, 307);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(153, 29);
			this->label6->TabIndex = 28;
			this->label6->Text = L"ID Sup�rieur";
			// 
			// ModifPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(527, 355);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ModifPersonnel";
			this->Text = L"ModifPersonnel";
=======
			this->txtbx_prenom->Location = System::Drawing::Point(pos_x_view, 2 * (size_y + step_y) + pos_y_start);
			this->txtbx_prenom->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_prenom->TabIndex = 3;
			this->txtbx_prenom->Name = L"txtbx_prenom";
			this->txtbx_prenom->Text = po->getPrenom();
			// 
			// id superieur
			// 
			this->label_id_superieur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_id_superieur->Location = System::Drawing::Point(pos_x, 3 * (size_y + step_y) + pos_y_start);//85+30+5
			this->label_id_superieur->Size = System::Drawing::Size(size_x, size_y);
			this->label_id_superieur->TabStop = true;
			this->label_id_superieur->Name = L"label_id_superieur";
			this->label_id_superieur->Text = L"Id Superieur";
			// 
			// view id superieur
			// 
			this->txtbx_id_superieur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_id_superieur->Location = System::Drawing::Point(pos_x_view, 3 * (size_y + step_y) + pos_y_start);
			this->txtbx_id_superieur->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_id_superieur->TabIndex = 4;
			this->txtbx_id_superieur->Name = L"txtbx_id_superieur";
			this->txtbx_id_superieur->Text = po->getIdSuperieur()=="NULL"?"":po->getIdSuperieur();
			// 
			// date embauche
			// 
			this->label_date_embauche->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_date_embauche->Location = System::Drawing::Point(pos_x, 4 * (size_y + step_y) + pos_y_start); //120+30+5
			this->label_date_embauche->Size = System::Drawing::Size(size_x, size_y);
			this->label_date_embauche->TabStop = true;
			this->label_date_embauche->Name = L"label_date_embauche";
			this->label_date_embauche->Text = L"Date Embauche";
			// 
			// view date embauche
			// 
			this->txtbx_date_embauche->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbx_date_embauche->Location = System::Drawing::Point(pos_x_view, 4 * (size_y + step_y) + pos_y_start);
			this->txtbx_date_embauche->Size = System::Drawing::Size(size_x_view, size_y);
			this->txtbx_date_embauche->TabIndex = 5;
			this->txtbx_date_embauche->Name = L"txtbx_date_embauche";
			this->txtbx_date_embauche->Text = po->getDateEmbaucheAff()=="NULL"?"":po->getDateEmbaucheAff();
			// 
			// id adresse
			// 
			this->label_adresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_adresse->Location = System::Drawing::Point(pos_x, 5 * (size_y + step_y) + pos_y_start);//155+30+5
			this->label_adresse->Size = System::Drawing::Size(size_x, size_y);
			this->label_adresse->TabStop = true;
			this->label_adresse->Name = L"label_id_adresse";
			this->label_adresse->Text = L"Adresse";
			// 
			// view id adresse
			// 
			this->label_view_adresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_view_adresse->Location = System::Drawing::Point(pos_x_view, 5 * (size_y + step_y) + pos_y_start);
			this->label_view_adresse->Size = System::Drawing::Size(size_x_view-size_y-step_x_btn, size_y);
			this->label_view_adresse->TabIndex = 6;
			this->label_view_adresse->Name = L"txtbx_id_adresse";
			this->label_view_adresse->Text = po->getAdresse();
			this->label_view_adresse->AutoEllipsis = true;
			this->label_view_adresse->BorderStyle = Forms::BorderStyle::FixedSingle;
			//
			// button add adresse
			// 
			this->button_add_adresse->Location = System::Drawing::Point(pos_x_view+size_x_view-size_y, 5 * (size_y + step_y) + pos_y_start);
			this->button_add_adresse->Margin = Forms::Padding(1);
			this->button_add_adresse->Size = System::Drawing::Size(size_y, size_y);
			this->button_add_adresse->UseVisualStyleBackColor = true;
			this->button_add_adresse->Name = L"button_add_adresse";
			this->button_add_adresse->Text = L"+";
			this->button_add_adresse->TabIndex = 7;
			this->button_add_adresse->Click += gcnew System::EventHandler(this, &Display::ModifPersonnelForm::buttonAddAdresseClick);
			//
			// valider
			// 
			this->button_valid->Location = System::Drawing::Point(pos_x_view + size_x_view - size_x_valid, 6 * (size_y + step_y) + pos_y_start);
			this->button_valid->Margin = Forms::Padding(1);
			this->button_valid->Size = System::Drawing::Size(size_x_valid, size_y);
			this->button_valid->UseVisualStyleBackColor = true;
			this->button_valid->Name = L"button_valid";
			this->button_valid->Text = L"Valider";
			this->button_valid->TabIndex = 8;
			this->button_valid->Click += gcnew System::EventHandler(this, &Display::ModifPersonnelForm::buttonValidClick);
			// 
			// ViewClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Size = System::Drawing::Size(size_x_form, size_y_form);//190+30+5
			this->MinimumSize = this->Size;
			this->MaximumSize = this->Size;
			this->Controls->Add(this->label_id_personnel);
			this->Controls->Add(this->label_view_id_personnel);
			this->Controls->Add(this->label_nom);
			this->Controls->Add(this->txtbx_nom);
			this->Controls->Add(this->label_prenom);
			this->Controls->Add(this->txtbx_prenom);
			this->Controls->Add(this->label_id_superieur);
			this->Controls->Add(this->txtbx_id_superieur);
			this->Controls->Add(this->label_date_embauche);
			this->Controls->Add(this->txtbx_date_embauche);
			this->Controls->Add(this->label_adresse);
			this->Controls->Add(this->label_view_adresse);
			this->Controls->Add(this->button_add_adresse);
			this->Controls->Add(this->button_valid);
			this->Name = L"ModifPersonnelForm";
			this->Text = L"Personnel : "+po->getNom()+" "+po->getPrenom();
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
