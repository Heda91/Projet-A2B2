#include "CommandForm.h"
#include "ModifCommandForm.h"
#include "ViewCommandForm.h"
#include "CommandRepo.h"
#include "CommandObject.h"

using namespace Display;

void CommandForm::buttonAddClick(System::Object^ sender, System::EventArgs^ e) {
	CommandObject^ co = gcnew CommandObject();
	ModifCommandForm^ add_command_form = gcnew ModifCommandForm(co);
	add_command_form->ShowDialog();
}
void CommandForm::buttonModifClick(System::Object^ sender, System::EventArgs^ e) {
	CommandObject^ co = gcnew CommandObject();
	ModifCommandForm^ add_command_form = gcnew ModifCommandForm(co);
	add_command_form->ShowDialog();
}
void CommandForm::buttonViewClick(System::Object^ sender, System::EventArgs^ e) {
	ViewCommandForm^ view_command_form = gcnew ViewCommandForm((CommandObject^)this->data_grid_view->SelectedRows[0]->Tag);
	view_command_form->ShowDialog();
}
void CommandForm::buttonDelClick(System::Object^ sender, System::EventArgs^ e) {
	CommandObject^ co = (CommandObject^)this->data_grid_view->SelectedRows[0]->Tag;
	//	ModifItemsForm^ modif_items_form = gcnew ModifItemsForm(ao);
	cr->deleteCommand(co);
	this->reload();
}

void CommandForm::reload() {
	System::Collections::Generic::List<CommandObject^>^ Commands = cr->getCommands();

	this->data_grid_view->Rows->Clear();
	for each (CommandObject ^ command in Commands) {
		if (!command->isDeleted()) {
			Forms::DataGridViewRow^ dgvr = gcnew Forms::DataGridViewRow();
			Forms::DataGridViewTextBoxCell^ dgvtbc = gcnew Forms::DataGridViewTextBoxCell();
			dgvtbc->Value = Convert::ToString(command->getReferenceCommand());
			dgvr->Cells->Add(dgvtbc);
			Forms::DataGridViewTextBoxCell^ dgvtbc2 = gcnew Forms::DataGridViewTextBoxCell();
			dgvtbc2->Value = command->getClient()->getNumeroClient();
			dgvr->Cells->Add(dgvtbc2);
			Forms::DataGridViewTextBoxCell^ dgvtbc3 = gcnew Forms::DataGridViewTextBoxCell();
			dgvtbc3->Value = command->getTotalCommand();
			dgvr->Cells->Add(dgvtbc3);
			Forms::DataGridViewTextBoxCell^ dgvtbc4 = gcnew Forms::DataGridViewTextBoxCell();
			dgvtbc4->Value = command->getRemise();
			dgvr->Cells->Add(dgvtbc4);

			dgvr->Tag = command;
			this->data_grid_view->Rows->Add(dgvr);
		}
	}
}
void CommandForm::initDataGridView() {
	cr = gcnew Repository::CommandRepo(my_bdd);

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
