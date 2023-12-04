#include "CommandForm.h"
#include "ModifCommandForm.h"
#include "ViewCommandForm.h"

void Display::CommandForm::buttonAddClick(System::Object^ sender, System::EventArgs^ e) {
	ModifCommandForm add_command_form;
	add_command_form.ShowDialog();
}
void Display::CommandForm::buttonModifClick(System::Object^ sender, System::EventArgs^ e) {
	ModifCommandForm modif_command_form;
	modif_command_form.ShowDialog();
}
void Display::CommandForm::buttonViewClick(System::Object^ sender, System::EventArgs^ e) {
	ViewCommandForm view_command_form;
	view_command_form.ShowDialog();
}
/*
void Display::CommandForm::buttonDelClick(System::Object^ sender, System::EventArgs^ e)
{
	ModifCommandForm add_command_form;
	add_command_form.ShowDialog();
}
*/

void Display::CommandForm::reload() {

}

void Display::CommandForm::initDataGridView() {
	Forms::DataGridViewTextBoxColumn^ dgvtbc = gcnew Forms::DataGridViewTextBoxColumn();
	dgvtbc->Name = "Reference";
	this->data_grid_view->Columns->Add(dgvtbc);
	Forms::DataGridViewTextBoxColumn^ dgvtbc2 = gcnew Forms::DataGridViewTextBoxColumn();
	dgvtbc2->Name = "numero client";
	this->data_grid_view->Columns->Add(dgvtbc2);
	Forms::DataGridViewTextBoxColumn^ dgvtbc3 = gcnew Forms::DataGridViewTextBoxColumn();
	dgvtbc3->Name = "total";
	this->data_grid_view->Columns->Add(dgvtbc3);
	Forms::DataGridViewTextBoxColumn^ dgvtbc4 = gcnew Forms::DataGridViewTextBoxColumn();
	dgvtbc4->Name = "remise (%)";
	this->data_grid_view->Columns->Add(dgvtbc4);
}


