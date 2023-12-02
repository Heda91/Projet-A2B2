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
