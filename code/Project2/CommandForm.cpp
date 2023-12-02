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
