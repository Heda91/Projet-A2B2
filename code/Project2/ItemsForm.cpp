#include "ItemsForm.h"
#include "ModifItemsForm.h"
#include "ViewItemsForm.h"

void Display::ItemsForm::buttonAddClick(System::Object^ sender, System::EventArgs^ e) {
	ModifItemsForm add_items_form;
	add_items_form.ShowDialog();
}
void Display::ItemsForm::buttonModifClick(System::Object^ sender, System::EventArgs^ e) {
	ModifItemsForm modif_items_form;
	modif_items_form.ShowDialog();
}
void Display::ItemsForm::buttonViewClick(System::Object^ sender, System::EventArgs^ e) {
	ViewItemsForm view_items_form;
	view_items_form.ShowDialog();
}
/*
void Display::ItemsForm::buttonDelClick(System::Object^ sender, System::EventArgs^ e)
{
	ModifItemsForm add_items_form;
	add_items_form.ShowDialog();
}
*/

void Display::ItemsForm::reload() {

}

void Display::ItemsForm::initDataGridView() {
	Forms::DataGridViewTextBoxColumn^ dgvtbc = gcnew Forms::DataGridViewTextBoxColumn();
	dgvtbc->Name = "id article";
	this->data_grid_view->Columns->Add(dgvtbc);
	Forms::DataGridViewTextBoxColumn^ dgvtbc2 = gcnew Forms::DataGridViewTextBoxColumn();
	dgvtbc2->Name = "designation";
	this->data_grid_view->Columns->Add(dgvtbc2);
	Forms::DataGridViewTextBoxColumn^ dgvtbc3 = gcnew Forms::DataGridViewTextBoxColumn();
	dgvtbc3->Name = "prix";
	this->data_grid_view->Columns->Add(dgvtbc3);
	Forms::DataGridViewTextBoxColumn^ dgvtbc4 = gcnew Forms::DataGridViewTextBoxColumn();
	dgvtbc4->Name = "quantite stock";
	this->data_grid_view->Columns->Add(dgvtbc4);
}
