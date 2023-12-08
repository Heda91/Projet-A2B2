#pragma once
#include "PersonnelObject.h"

namespace Display {

	using namespace System::Windows;
	using namespace Object;

	/// <summary>
	/// Description r�sum�e de ViewPersonnel
	/// </summary>
	public ref class ViewPersonnelForm : public System::Windows::Forms::Form
	{
	public:
		ViewPersonnelForm(PersonnelObject^ po)
		{
			InitializeComponent(po);
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~ViewPersonnelForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		Forms::Label^ label_id_personnel;
		Forms::Label^ label_view_id_personnel;
		Forms::Label^ label_nom;
		Forms::Label^ label_view_nom;
		Forms::Label^ label_prenom;
		Forms::Label^ label_view_prenom;
		Forms::Label^ label_id_superieur;
		Forms::Label^ label_view_id_superieur;
		Forms::Label^ label_date_embauche;
		Forms::Label^ label_view_date_embauche;
		Forms::Label^ label_id_adresse;
		Forms::Label^ label_view_id_adresse;

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
		void InitializeComponent(PersonnelObject^ po)
		{
			this->label_id_personnel = (gcnew System::Windows::Forms::Label());
			this->label_view_id_personnel = (gcnew System::Windows::Forms::Label());
			this->label_nom = (gcnew System::Windows::Forms::Label());
			this->label_view_nom = (gcnew System::Windows::Forms::Label());
			this->label_prenom = (gcnew System::Windows::Forms::Label());
			this->label_view_prenom = (gcnew System::Windows::Forms::Label());
			this->label_id_superieur = (gcnew System::Windows::Forms::Label());
			this->label_view_id_superieur = (gcnew System::Windows::Forms::Label());
			this->label_date_embauche = (gcnew System::Windows::Forms::Label());
			this->label_view_date_embauche = (gcnew System::Windows::Forms::Label());
			this->label_id_adresse = (gcnew System::Windows::Forms::Label());
			this->label_view_id_adresse = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// set size
			const int size_x = 220;
			const int size_x_view = 400;
			const int size_y = 30;
			const int pos_x = 15;
			const int pos_y_start = 15;
			const int step_y = 15;
			const int pos_x_view = 15 + pos_x + size_x;
			const int size_x_form = 30 + pos_x_view + size_x_view;
			const int size_y_form = 7 * (size_y + step_y) + pos_y_start;
			// 
			// id personnel
			// 
			this->label_id_personnel->AutoSize = true;
			this->label_id_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label_id_personnel->Location = System::Drawing::Point(15, 15);
			this->label_id_personnel->Size = System::Drawing::Size(235, 30);
=======
			this->label_id_personnel->Location = System::Drawing::Point(pos_x, pos_y_start);
			this->label_id_personnel->Size = System::Drawing::Size(size_x, 30);
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
			this->label_id_personnel->TabStop = true;
			this->label_id_personnel->Name = L"label_id_personnel";
			this->label_id_personnel->Text = L"id personnel";
			// 
			// view id personnel
			// 
			this->label_view_id_personnel->AutoSize = true;
			this->label_view_id_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label_view_id_personnel->Location = System::Drawing::Point(250, 15);
			this->label_view_id_personnel->Size = System::Drawing::Size(235, 30);
=======
			this->label_view_id_personnel->Location = System::Drawing::Point(pos_x_view, pos_y_start);
			this->label_view_id_personnel->Size = System::Drawing::Size(size_x_view, size_y);
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
			this->label_view_id_personnel->TabIndex = 1;
			this->label_view_id_personnel->Name = L"label_view_id_personnel";
			this->label_view_id_personnel->Text = po->getIdPersonnel();
			// 
			// nom
			// 
			this->label_nom->AutoSize = true;
			this->label_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label_nom->Location = System::Drawing::Point(15, 50); //15+30+5
			this->label_nom->Size = System::Drawing::Size(235, 30);
=======
			this->label_nom->Location = System::Drawing::Point(pos_x, 1 * (size_y + step_y) + pos_y_start); //15+30+5
			this->label_nom->Size = System::Drawing::Size(size_x, size_y);
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
			this->label_nom->TabStop = true;
			this->label_nom->Name = L"label_nom";
			this->label_nom->Text = L"Nom";
			// 
			// view nom
			// 
			this->label_view_nom->AutoSize = true;
			this->label_view_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label_view_nom->Location = System::Drawing::Point(250, 50);
			this->label_view_nom->Size = System::Drawing::Size(235, 30);
=======
			this->label_view_nom->Location = System::Drawing::Point(pos_x_view, 1 * (size_y + step_y) + pos_y_start);
			this->label_view_nom->Size = System::Drawing::Size(size_x_view, size_y);
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
			this->label_view_nom->TabIndex = 2;
			this->label_view_nom->Name = L"label_view_nom";
			this->label_view_nom->Text = po->getNom();
			// 
			// prenom
			// 
			this->label_prenom->AutoSize = true;
			this->label_prenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label_prenom->Location = System::Drawing::Point(15, 85);//50+30+5
			this->label_prenom->Size = System::Drawing::Size(235, 30);
=======
			this->label_prenom->Location = System::Drawing::Point(pos_x, 2 * (size_y + step_y) + pos_y_start);//50+30+5
			this->label_prenom->Size = System::Drawing::Size(size_x, size_y);
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
			this->label_prenom->TabStop = true;
			this->label_prenom->Name = L"label_prenom";
			this->label_prenom->Text = L"Prenom";
			// 
			// view prenom
			// 
			this->label_view_prenom->AutoSize = true;
			this->label_view_prenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label_view_prenom->Location = System::Drawing::Point(250, 85);
			this->label_view_prenom->Size = System::Drawing::Size(235, 30);
=======
			this->label_view_prenom->Location = System::Drawing::Point(pos_x_view, 2 * (size_y + step_y) + pos_y_start);
			this->label_view_prenom->Size = System::Drawing::Size(size_x_view, size_y);
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
			this->label_view_prenom->TabIndex = 3;
			this->label_view_prenom->Name = L"label_view_prenom";
			this->label_view_prenom->Text = po->getPrenom();
			// 
			// id superieur
			// 
			this->label_id_superieur->AutoSize = true;
			this->label_id_superieur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label_id_superieur->Location = System::Drawing::Point(15, 120);//85+30+5
			this->label_id_superieur->Size = System::Drawing::Size(235, 30);
=======
			this->label_id_superieur->Location = System::Drawing::Point(pos_x, 3 * (size_y + step_y) + pos_y_start);//85+30+5
			this->label_id_superieur->Size = System::Drawing::Size(size_x, size_y);
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
			this->label_id_superieur->TabStop = true;
			this->label_id_superieur->Name = L"label_id_superieur";
			this->label_id_superieur->Text = L"Id Superieur";
			// 
			// view id superieur
			// 
			this->label_view_id_superieur->AutoSize = true;
			this->label_view_id_superieur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label_view_id_superieur->Location = System::Drawing::Point(250, 120);
			this->label_view_id_superieur->Size = System::Drawing::Size(235, 30);
=======
			this->label_view_id_superieur->Location = System::Drawing::Point(pos_x_view, 3 * (size_y + step_y) + pos_y_start);
			this->label_view_id_superieur->Size = System::Drawing::Size(size_x_view, size_y);
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
			this->label_view_id_superieur->TabIndex = 4;
			this->label_view_id_superieur->Name = L"label_view_id_superieur";
			this->label_view_id_superieur->Text = po->getIdSuperieur();
			// 
			// date embauche
			// 
			this->label_date_embauche->AutoSize = true;
			this->label_date_embauche->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label_date_embauche->Location = System::Drawing::Point(15, 155); //120+30+5
			this->label_date_embauche->Size = System::Drawing::Size(235, 30);
=======
			this->label_date_embauche->Location = System::Drawing::Point(pos_x, 4 * (size_y + step_y) + pos_y_start); //120+30+5
			this->label_date_embauche->Size = System::Drawing::Size(size_x, size_y);
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
			this->label_date_embauche->TabStop = true;
			this->label_date_embauche->Name = L"label_date_embauche";
			this->label_date_embauche->Text = L"Date Embauche";
			// 
			// view date embauche
			// 
			this->label_view_date_embauche->AutoSize = true;
			this->label_view_date_embauche->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label_view_date_embauche->Location = System::Drawing::Point(250, 155);
			this->label_view_date_embauche->Size = System::Drawing::Size(235, 30);
			this->label_view_date_embauche->TabIndex = 1;
			this->label_view_date_embauche->Name = L"label_view_date_embauche";
			this->label_view_date_embauche->Text = po->getDateEmbauche();
=======
			this->label_view_date_embauche->Location = System::Drawing::Point(pos_x_view, 4 * (size_y + step_y) + pos_y_start);
			this->label_view_date_embauche->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_date_embauche->TabIndex = 5;
			this->label_view_date_embauche->Name = L"label_view_date_embauche";
			this->label_view_date_embauche->Text = po->getDateEmbaucheAff();
			this->label_view_date_embauche->BorderStyle = Forms::BorderStyle::FixedSingle;
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
			// 
			// id adresse
			// 
			this->label_id_adresse->AutoSize = true;
			this->label_id_adresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label_id_adresse->Location = System::Drawing::Point(15, 190);//155+30+5
			this->label_id_adresse->Size = System::Drawing::Size(235, 30);
			this->label_id_adresse->TabStop = true;
			this->label_id_adresse->Name = L"label_id_adresse";
			this->label_id_adresse->Text = L"Adresse";
=======
			this->label_adresse->Location = System::Drawing::Point(pos_x, 5 * (size_y + step_y) + pos_y_start);//155+30+5
			this->label_adresse->Size = System::Drawing::Size(size_x, size_y);
			this->label_adresse->TabStop = true;
			this->label_adresse->Name = L"label_id_adresse";
			this->label_adresse->Text = L"Adresse";
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
			// 
			// view id adresse
			// 
			this->label_view_id_adresse->AutoSize = true;
			this->label_view_id_adresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
<<<<<<< HEAD
			this->label_view_id_adresse->Location = System::Drawing::Point(250, 190);
			this->label_view_id_adresse->Size = System::Drawing::Size(235, 30);
			this->label_view_id_adresse->TabIndex = 1;
			this->label_view_id_adresse->Name = L"label_view_id_adresse";
			this->label_view_id_adresse->Text = "En attente";
=======
			this->label_view_adresse->Location = System::Drawing::Point(pos_x_view, 5 * (size_y + step_y) + pos_y_start);
			this->label_view_adresse->Size = System::Drawing::Size(size_x_view, size_y);
			this->label_view_adresse->TabIndex = 6;
			this->label_view_adresse->Name = L"label_view_id_adresse";
			this->label_view_adresse->Text = po->getAdresse();
			this->label_view_adresse->AutoEllipsis = true;
			this->label_view_adresse->BorderStyle = Forms::BorderStyle::FixedSingle;
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
			// 
			// ViewClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
<<<<<<< HEAD
			this->ClientSize = System::Drawing::Size(500, 225);//190+30+5
=======
			this->Size = System::Drawing::Size(size_x_form, size_y_form);//190+30+5
			this->MinimumSize = this->Size;
			this->MaximumSize = this->Size;
			this->Controls->Add(this->label_id_personnel);
			this->Controls->Add(this->label_view_id_personnel);
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
			this->Controls->Add(this->label_nom);
			this->Controls->Add(this->label_view_nom);
			this->Controls->Add(this->label_prenom);
			this->Controls->Add(this->label_view_prenom);
			this->Controls->Add(this->label_id_superieur);
			this->Controls->Add(this->label_view_id_superieur);
			this->Controls->Add(this->label_date_embauche);
			this->Controls->Add(this->label_view_date_embauche);
			this->Controls->Add(this->label_id_adresse);
			this->Controls->Add(this->label_view_id_adresse);
			this->Name = L"ViewPersonnelForm";
			this->Text = L"ViewPersonnel";
			this->Load += gcnew System::EventHandler(this, &ViewPersonnelForm::ViewPersonnelLoad);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ViewPersonnelLoad(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
