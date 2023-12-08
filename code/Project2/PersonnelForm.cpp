#include "PersonnelForm.h"
#include "ModifPersonnelForm.h"
#include "ViewPersonnelForm.h"
#include "PersonnelObject.h"
#include "PersonnelRepo.h"

void Display::PersonnelForm::buttonAddClick(System::Object^ sender, System::EventArgs^ e) {
<<<<<<< HEAD
	ModifPersonnelForm add_personnel_form;
	add_personnel_form.ShowDialog();
=======
	PersonnelObject^ po = gcnew PersonnelObject();
	ModifPersonnelForm^ add_personnel_form = gcnew ModifPersonnelForm(po);
	add_personnel_form->ShowDialog();
	if (po->getDateEmbauche() != "NULL") {//regarde si la date embauche n'est pas NULL (donc a validé)
		Repository::AdressRepo^ ar = gcnew Repository::AdressRepo(this->my_bdd);
		ar->insertAdress(po->getAdresseVar());
		this->pr->insertPersonnel(po); 
		this->reload();
	}
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
}
void Display::PersonnelForm::buttonModifClick(System::Object^ sender, System::EventArgs^ e) {
	ModifPersonnelForm modif_personnel_form;
	modif_personnel_form.ShowDialog();
}
void Display::PersonnelForm::buttonViewClick(System::Object^ sender, System::EventArgs^ e) {
	this->data_grid_view->SelectedRows[0]->Tag;
	ViewPersonnelForm^ view_personnel_form = gcnew ViewPersonnelForm((PersonnelObject^)this->data_grid_view->SelectedRows[0]->Tag);
	view_personnel_form->ShowDialog();
}
/*
void Display::PersonnelForm::buttonDelClick(System::Object^ sender, System::EventArgs^ e)
{
	ModifPersonnelForm add_personnel_form;
	add_personnel_form.ShowDialog();
}
*/

void Display::PersonnelForm::reload() {
	System::Collections::Generic::List<PersonnelObject^>^ personnels = pr->getPersonnels();

	this->data_grid_view->Rows->Clear();
	for each (PersonnelObject^ personnel in personnels) {
		if (!personnel->isDelete()){
			DataGridViewRow^ dgvr = gcnew DataGridViewRow();
			DataGridViewTextBoxCell^ dgvtbc = gcnew DataGridViewTextBoxCell();
			dgvtbc->Value = Convert::ToString(personnel->getIdPersonnel());
			dgvr->Cells->Add(dgvtbc);
			DataGridViewTextBoxCell^ dgvtbc2 = gcnew DataGridViewTextBoxCell();
			dgvtbc2->Value = personnel->getNom();
			dgvr->Cells->Add(dgvtbc2);
			DataGridViewTextBoxCell^ dgvtbc3 = gcnew DataGridViewTextBoxCell();
			dgvtbc3->Value = personnel->getPrenom();
			dgvr->Cells->Add(dgvtbc3);
<<<<<<< HEAD
			DataGridViewTextBoxCell^ dgvtbc4 = gcnew DataGridViewTextBoxCell();
			dgvtbc4->Value = personnel->getDateEmbauche();
=======
			Forms::DataGridViewTextBoxCell^ dgvtbc4 = gcnew Forms::DataGridViewTextBoxCell();
			dgvtbc4->Value = personnel->getDateEmbaucheAff();
>>>>>>> a67132f0a5a18b9a958c96b6f624187e3e6c0286
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

