#include "PrincipalForm.h"

using namespace Display;
using namespace System::Windows;
using namespace System::Drawing;

PrincipalForm::PrincipalForm(BDD^ bdd, String^ form_name) {
	this->my_bdd = bdd;
	this->form_name = form_name;
	this->InitializeComponent();
	this->initDataGridView();
	this->reload();
}

void PrincipalForm::InitializeComponent() {
	this->button_add = gcnew Forms::Button();
	this->button_modif = gcnew Forms::Button();
	this->button_del = gcnew Forms::Button();
	this->button_view = gcnew Forms::Button();
	this->data_grid_view = gcnew Forms::DataGridView();
	cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid_view)->BeginInit();
	this->SuspendLayout();
	//
	//button add
	//
	this->button_add->Location = Point(5, 5);
	this->button_add->Margin = Forms::Padding(4);
	this->button_add->Size = System::Drawing::Size(100, 30);
	this->button_add->UseVisualStyleBackColor = true;
	this->button_add->Name = L"buttonAdd";
	this->button_add->Text = L"Ajouter";
	this->button_add->TabIndex = 1;
	this->button_add->Click += gcnew System::EventHandler(this, &Display::PrincipalForm::buttonAddClick);
	//
	//button modify
	//
	this->button_modif->Location = Point(110, 5);
	this->button_modif->Margin = Forms::Padding(4);
	this->button_modif->Size = System::Drawing::Size(100, 30);
	this->button_modif->UseVisualStyleBackColor = true;
	this->button_modif->Name = L"buttonModif";
	this->button_modif->Text = L"Modifier";
	this->button_modif->TabIndex = 2;
	this->button_modif->Click += gcnew System::EventHandler(this, &Display::PrincipalForm::buttonModifClick);
	//
	//button view
	//
	this->button_view->Location = Point(215, 5);
	this->button_view->Margin = Forms::Padding(4);
	this->button_view->Size = System::Drawing::Size(100, 30);
	this->button_view->UseVisualStyleBackColor = true;
	this->button_view->Name = L"buttonView";
	this->button_view->Text = L"Inspecter";
	this->button_view->TabIndex = 3;
	this->button_view->Click += gcnew System::EventHandler(this, &Display::PrincipalForm::buttonViewClick);
	//
	//button delete
	//
	this->button_del->Location = Point(320, 5);
	this->button_del->Margin = Forms::Padding(4);
	this->button_del->Size = System::Drawing::Size(100, 30);
	this->button_del->UseVisualStyleBackColor = true;
	this->button_del->Name = L"buttonDel";
	this->button_del->Text = L"Supprimer";
	this->button_del->TabIndex = 4;
	this->button_del->Click += gcnew System::EventHandler(this, &Display::PrincipalForm::buttonDelClick);
	//
	//dataGridView
	//
	this->data_grid_view->ColumnHeadersHeightSizeMode = Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
	this->data_grid_view->Location = Point(5, 40);
	this->data_grid_view->Size = System::Drawing::Size(690, 455);
	this->data_grid_view->Margin = Forms::Padding(4);
	this->data_grid_view->Name = L"dataGirdView";
	this->data_grid_view->RowHeadersWidth = 50;
	this->data_grid_view->TabIndex = 5;
	this->data_grid_view->ReadOnly = true;
	this->data_grid_view->MultiSelect = false;
	this->data_grid_view->SelectionMode = Forms::DataGridViewSelectionMode::FullRowSelect;
	this->data_grid_view->AutoSizeColumnsMode = Forms::DataGridViewAutoSizeColumnsMode::Fill;
	//
	//PrincipalForm
	//
	this->AutoScaleDimensions = SizeF(8, 16);
	this->AutoScaleMode = Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(700, 500);
	this->MaximumSize = System::Drawing::Size(700, 500);
	this->MinimumSize = System::Drawing::Size(700, 500);


	this->Controls->Add(this->button_add);
	this->Controls->Add(this->button_modif);
	this->Controls->Add(this->button_view);
	this->Controls->Add(this->button_del);
	this->Controls->Add(this->data_grid_view);

	this->Margin = Forms::Padding(4);
	this->Name = L"PrincipalForm";
	this->Text = this->form_name;
	cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid_view)->EndInit();
	this->ResumeLayout(false);
}




