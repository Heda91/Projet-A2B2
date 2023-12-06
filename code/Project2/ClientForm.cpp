#include "ClientForm.h"
#include "ModifClientForm.h"
#include "ViewClientForm.h"
#include "ClientObject.h"
#include "ClientRepo.h"
#include <vector>

using namespace Object;

void Display::ClientForm::buttonAddClick(System::Object^ sender, System::EventArgs^ e) {
	ModifClientForm add_client_form;
	add_client_form.ShowDialog();
}
void Display::ClientForm::buttonModifClick(System::Object^ sender, System::EventArgs^ e) {
	ModifClientForm modif_client_form;
	modif_client_form.ShowDialog();
}
void Display::ClientForm::buttonViewClick(System::Object^ sender, System::EventArgs^ e) {
	ViewClientForm^ view_client_form = gcnew ViewClientForm((ClientObject^)this->data_grid_view->SelectedRows[0]->Tag);
	view_client_form->ShowDialog();
}
/*
void Display::ClientForm::buttonDelClick(System::Object^ sender, System::EventArgs^ e)
{
	ModifClientForm add_client_form;
	add_client_form.ShowDialog();
}
*/

void Display::ClientForm::reload() {
	System::Collections::Generic::List<ClientObject^>^ clients = cr->getClients();

	this->data_grid_view->Rows->Clear();
	for each (ClientObject ^ client in clients) {
		DataGridViewRow^ dgvr = gcnew DataGridViewRow();
		DataGridViewTextBoxCell^ dgvtbc = gcnew DataGridViewTextBoxCell();
		dgvtbc->Value = Convert::ToString(client->getNumeroClient());
		dgvr->Cells->Add(dgvtbc);
		DataGridViewTextBoxCell^ dgvtbc2 = gcnew DataGridViewTextBoxCell();
		dgvtbc2->Value = client->getNom();
		dgvr->Cells->Add(dgvtbc2);
		DataGridViewTextBoxCell^ dgvtbc3 = gcnew DataGridViewTextBoxCell();
		dgvtbc3->Value = client->getPrenom();
		dgvr->Cells->Add(dgvtbc3);

		dgvr->Tag = client;
		this->data_grid_view->Rows->Add(dgvr);
	}
}

void Display::ClientForm::initDataGridView() {
	cr = gcnew Repository::ClientRepo(my_bdd);

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

