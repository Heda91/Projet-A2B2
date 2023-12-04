#include "PersonnelForm.h"
#include "ModifPersonnelForm.h"
#include "ViewPersonnelForm.h"

void Display::PersonnelForm::buttonAddClick(System::Object^ sender, System::EventArgs^ e) {
	ModifPersonnelForm add_personnel_form;
	add_personnel_form.ShowDialog();
}
void Display::PersonnelForm::buttonModifClick(System::Object^ sender, System::EventArgs^ e) {
	ModifPersonnelForm modif_personnel_form;
	modif_personnel_form.ShowDialog();
}
void Display::PersonnelForm::buttonViewClick(System::Object^ sender, System::EventArgs^ e) {
	ViewPersonnelForm view_personnel_form;
	view_personnel_form.ShowDialog();
}
/*
void Display::PersonnelForm::buttonDelClick(System::Object^ sender, System::EventArgs^ e)
{
	ModifPersonnelForm add_personnel_form;
	add_personnel_form.ShowDialog();
}
*/

void Display::PersonnelForm::reload() {

}

void Display::PersonnelForm::initDataGridView() {
	Forms::DataGridViewTextBoxColumn^ dgvtbc = gcnew Forms::DataGridViewTextBoxColumn();
	dgvtbc->Name = "id personnel";
	this->data_grid_view->Columns->Add(dgvtbc);
	Forms::DataGridViewTextBoxColumn^ dgvtbc2 = gcnew Forms::DataGridViewTextBoxColumn();
	dgvtbc2->Name = "nom";
	this->data_grid_view->Columns->Add(dgvtbc2);
	Forms::DataGridViewTextBoxColumn^ dgvtbc3 = gcnew Forms::DataGridViewTextBoxColumn();
	dgvtbc3->Name = "prenom";
	this->data_grid_view->Columns->Add(dgvtbc3);
}

