#include "ClientForm.h"
#include "ModifClientForm.h"
#include "ViewClientForm.h"
#include "ClientRepo.h"
#include <vector>

using namespace Object;

void Display::ClientForm::insertAdresses(ClientObject^ co) {
	Repository::AdressRepo^ ar = gcnew Repository::AdressRepo(this->my_bdd);
	for each (AdressObject ^ ao in co->getAdresseEmission()) {
		if (ao->getIdAdresse() == "0") { 
			ar->insertAdress(ao); 
			this->cr->linkClientAdresse(Convert::ToInt32(co->getNumeroClient()), Convert::ToInt32(ao->getIdAdresse()), 0);
		}//nouvelle adresse
	}
	for each (AdressObject ^ ao in co->getAdresseLivraison()) {
		if (ao->getIdAdresse() == "0") { 
			ar->insertAdress(ao);
			this->cr->linkClientAdresse(Convert::ToInt32(co->getNumeroClient()), Convert::ToInt32(ao->getIdAdresse()), 1);
		}//nouvelle adresse
	}
}

void Display::ClientForm::buttonAddClick(System::Object^ sender, System::EventArgs^ e) {
	ClientObject^ co = gcnew ClientObject();
	ModifClientForm^ modif_client_form = gcnew ModifClientForm(co);
	modif_client_form->ShowDialog();
	if (co->getNom() != "") {//regarde si le nom n'est pas vide (donc a valide)
		this->cr->insertClient(co);
		this->insertAdresses(co);
		this->reload();
	}
}
void Display::ClientForm::buttonModifClick(System::Object^ sender, System::EventArgs^ e) {
	ClientObject^ co = (ClientObject^)this->data_grid_view->SelectedRows[0]->Tag;
	ModifClientForm^ modif_client_form = gcnew ModifClientForm(co);
	modif_client_form->ShowDialog();
	this->insertAdresses(co);
	this->cr->editClient(co);
	this->reload();
}
void Display::ClientForm::buttonViewClick(System::Object^ sender, System::EventArgs^ e) {
	ViewClientForm^ view_client_form = gcnew ViewClientForm((ClientObject^)this->data_grid_view->SelectedRows[0]->Tag);
	view_client_form->ShowDialog();
}
void Display::ClientForm::buttonDelClick(System::Object^ sender, System::EventArgs^ e){
	this->cr->deleteClient((ClientObject^)this->data_grid_view->SelectedRows[0]->Tag);
	this->reload();
}

void Display::ClientForm::reload() {
	System::Collections::Generic::List<ClientObject^>^ clients = cr->getClients();

	this->data_grid_view->Rows->Clear();
	for each (ClientObject ^ client in clients) {
		Forms::DataGridViewRow^ dgvr = gcnew Forms::DataGridViewRow();
		Forms::DataGridViewTextBoxCell^ dgvtbc = gcnew Forms::DataGridViewTextBoxCell();
		dgvtbc->Value = Convert::ToString(client->getNumeroClient());
		dgvr->Cells->Add(dgvtbc);
		Forms::DataGridViewTextBoxCell^ dgvtbc2 = gcnew Forms::DataGridViewTextBoxCell();
		dgvtbc2->Value = client->getNom();
		dgvr->Cells->Add(dgvtbc2);
		Forms::DataGridViewTextBoxCell^ dgvtbc3 = gcnew Forms::DataGridViewTextBoxCell();
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

