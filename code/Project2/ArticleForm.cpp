#include "ArticleForm.h"
#include "ModifArticleForm.h"
#include "ViewArticleForm.h"
#include "ArticleObject.h"
#include "ArticleRepo.h"

using namespace Repository;
using namespace System::Windows::Forms;

void Display::ArticleForm::buttonAddClick(System::Object^ sender, System::EventArgs^ e) {
	ArticleObject^ ao = gcnew ArticleObject();
	ModifArticleForm^ add_personnel_form = gcnew ModifArticleForm(ao);
	add_personnel_form->ShowDialog();
	//if (ao->getDateEmbauche() != "NULL") {//regarde si la date embauche n'est pas NULL (donc a valid�)
//		ArticleRepo^ ar = gcnew AdressRepo(this->my_bdd);
//		ar->insertAdress(po->getAdresseVar());
//		this->pr->insertPersonnel(po);
	//}
	ar->insertArticle(ao);

	this->reload();
}
void Display::ArticleForm::buttonModifClick(System::Object^ sender, System::EventArgs^ e) {
	ArticleObject^ ao = (ArticleObject^)this->data_grid_view->SelectedRows[0]->Tag;
	ModifArticleForm^ modif_article_form = gcnew ModifArticleForm(ao);
	modif_article_form->ShowDialog();
	//	if (po->getAdresseVar()->getIdAdresse() == "0") {//nouvelle adresse
	//		Repository::AdressRepo^ ar = gcnew Repository::AdressRepo(this->my_bdd);
	//		ar->insertAdress(po->getAdresseVar());;
		//}
	ar->editArticle(ao);
	this->reload();
}
void Display::ArticleForm::buttonViewClick(System::Object^ sender, System::EventArgs^ e) {
	ViewArticleForm^ view_article_form = gcnew ViewArticleForm((ArticleObject^)this->data_grid_view->SelectedRows[0]->Tag);
	view_article_form->ShowDialog();
}

void Display::ArticleForm::buttonDelClick(System::Object^ sender, System::EventArgs^ e)
{
	ArticleObject^ ao = (ArticleObject^)this->data_grid_view->SelectedRows[0]->Tag;
	ar->deleteArticle(ao);
	this->reload();
}


void Display::ArticleForm::reload() {
	System::Collections::Generic::List<ArticleObject^>^ articles = ar->getArticles();

	this->data_grid_view->Rows->Clear();
	for each (ArticleObject ^ article in articles) {
		if (!article->isDeleted()) {
			DataGridViewRow^ dgvr = gcnew DataGridViewRow();
			DataGridViewTextBoxCell^ dgvtbc = gcnew DataGridViewTextBoxCell();
			dgvtbc->Value = Convert::ToString(article->getIdArticle());
			dgvr->Cells->Add(dgvtbc);
			DataGridViewTextBoxCell^ dgvtbc2 = gcnew DataGridViewTextBoxCell();
			dgvtbc2->Value = article->getDesignation();
			dgvr->Cells->Add(dgvtbc2);
			DataGridViewTextBoxCell^ dgvtbc3 = gcnew DataGridViewTextBoxCell();
			dgvtbc3->Value = article->getPrixHT();
			dgvr->Cells->Add(dgvtbc3);
			DataGridViewTextBoxCell^ dgvtbc4 = gcnew DataGridViewTextBoxCell();
			dgvtbc4->Value = article->getQuantiteStock();
			dgvr->Cells->Add(dgvtbc4);

			dgvr->Tag = article;
			this->data_grid_view->Rows->Add(dgvr);
		}
	}
}

void Display::ArticleForm::initDataGridView() {
	ar = gcnew Repository::ArticleRepo(my_bdd);

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
