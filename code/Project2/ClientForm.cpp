#include "ClientForm.h"
#include "ModifClientForm.h"
#include "ViewClientForm.h"
#include <vector>

void Display::ClientForm::buttonAddClick(System::Object^ sender, System::EventArgs^ e) {
	ModifClientForm add_client_form;
	add_client_form.ShowDialog();
}
void Display::ClientForm::buttonModifClick(System::Object^ sender, System::EventArgs^ e) {
	ModifClientForm modif_client_form;
	modif_client_form.ShowDialog();
}
void Display::ClientForm::buttonViewClick(System::Object^ sender, System::EventArgs^ e) {
	ViewClientForm view_client_form;
	view_client_form.ShowDialog();
}
/*
void Display::ClientForm::buttonDelClick(System::Object^ sender, System::EventArgs^ e)
{
	ModifClientForm add_client_form;
	add_client_form.ShowDialog();
}
*/

void Display::ClientForm::reload() {
	
}

void Display::ClientForm::initDataGridView() {
	Forms::DataGridViewTextBoxColumn^ dgvtbc = gcnew Forms::DataGridViewTextBoxColumn();
	dgvtbc->Name = "Numero Client";
	this->data_grid_view->Columns->Add(dgvtbc);
	Forms::DataGridViewTextBoxColumn^ dgvtbc2 = gcnew Forms::DataGridViewTextBoxColumn();
	dgvtbc2->Name = "Nom";
	this->data_grid_view->Columns->Add(dgvtbc2);
	Forms::DataGridViewTextBoxColumn^ dgvtbc3 = gcnew Forms::DataGridViewTextBoxColumn();
	dgvtbc3->Name = "Prenom";
	this->data_grid_view->Columns->Add(dgvtbc3);
}

