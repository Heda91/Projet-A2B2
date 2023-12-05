#include "PersonnelForm.h"
#include "ModifPersonnelForm.h"
#include "ViewPersonnelForm.h"
#include "PersonnelObject.h"
#include "PersonnelRepo.h"


void Display::PersonnelForm::buttonAddClick(System::Object^ sender, System::EventArgs^ e) {
	PersonnelObject^ po = gcnew PersonnelObject();
	ModifPersonnelForm^ add_personnel_form = gcnew ModifPersonnelForm(po);
	add_personnel_form->ShowDialog();
	if (po->getNom() != "") { this->pr->insertPersonnel(po); }//regarde si le nom n'est pas vide (donc a validé)
	this->reload();
}
void Display::PersonnelForm::buttonModifClick(System::Object^ sender, System::EventArgs^ e) {
	PersonnelObject^ po = (PersonnelObject^)this->data_grid_view->SelectedRows[0]->Tag;
	ModifPersonnelForm^ modif_personnel_form = gcnew ModifPersonnelForm(po);
	modif_personnel_form->ShowDialog();
	this->pr->editPersonnel(po);
	this->reload();
}
void Display::PersonnelForm::buttonViewClick(System::Object^ sender, System::EventArgs^ e) {
	ViewPersonnelForm^ view_personnel_form = gcnew ViewPersonnelForm((PersonnelObject^)this->data_grid_view->SelectedRows[0]->Tag);
	view_personnel_form->ShowDialog();
}

void Display::PersonnelForm::buttonDelClick(System::Object^ sender, System::EventArgs^ e){
	this->pr->deletePersonnel((PersonnelObject^)this->data_grid_view->SelectedRows[0]->Tag);
	this->reload();
}


void Display::PersonnelForm::reload() {
	System::Collections::Generic::List<PersonnelObject^>^ personnels = pr->getPersonnels();

	this->data_grid_view->Rows->Clear();
	for each (PersonnelObject^ personnel in personnels) {
		if (!personnel->isDelete()){
			Forms::DataGridViewRow^ dgvr = gcnew Forms::DataGridViewRow();
			Forms::DataGridViewTextBoxCell^ dgvtbc = gcnew Forms::DataGridViewTextBoxCell();
			dgvtbc->Value = Convert::ToString(personnel->getIdPersonnel());
			dgvr->Cells->Add(dgvtbc);
			Forms::DataGridViewTextBoxCell^ dgvtbc2 = gcnew Forms::DataGridViewTextBoxCell();
			dgvtbc2->Value = personnel->getNom();
			dgvr->Cells->Add(dgvtbc2);
			Forms::DataGridViewTextBoxCell^ dgvtbc3 = gcnew Forms::DataGridViewTextBoxCell();
			dgvtbc3->Value = personnel->getPrenom();
			dgvr->Cells->Add(dgvtbc3);
			Forms::DataGridViewTextBoxCell^ dgvtbc4 = gcnew Forms::DataGridViewTextBoxCell();
			dgvtbc4->Value = personnel->getDateEmbauche();
			dgvr->Cells->Add(dgvtbc4);
		
			dgvr->Tag = personnel;
			this->data_grid_view->Rows->Add(dgvr);
		}
	}
}

void Display::PersonnelForm::initDataGridView() {
	pr = gcnew Repository::PersonnelRepo(my_bdd);

	Forms::DataGridViewTextBoxColumn^ dgvtbc = gcnew Forms::DataGridViewTextBoxColumn();
	dgvtbc->Name = "Id personnel";
	this->data_grid_view->Columns->Add(dgvtbc);
	Forms::DataGridViewTextBoxColumn^ dgvtbc2 = gcnew Forms::DataGridViewTextBoxColumn();
	dgvtbc2->Name = "Nom";
	this->data_grid_view->Columns->Add(dgvtbc2);
	Forms::DataGridViewTextBoxColumn^ dgvtbc3 = gcnew Forms::DataGridViewTextBoxColumn();
	dgvtbc3->Name = "Prenom";
	this->data_grid_view->Columns->Add(dgvtbc3);
	Forms::DataGridViewTextBoxColumn^ dgvtbc4 = gcnew Forms::DataGridViewTextBoxColumn();
	dgvtbc4->Name = "Embauche";
	this->data_grid_view->Columns->Add(dgvtbc4);
}

