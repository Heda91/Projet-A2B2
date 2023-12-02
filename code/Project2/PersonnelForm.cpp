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
