#include "ClientForm.h"
#include "ModifClientForm.h"
#include "ViewClientForm.h"

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
