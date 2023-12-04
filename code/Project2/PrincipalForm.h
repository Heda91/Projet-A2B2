#pragma once
#include <vector>
#include <string>

namespace Display {
	using namespace System::Windows;
	using namespace System;
	using namespace std;

	public ref class PrincipalForm : public System::Windows::Forms::Form
	{
	public:
		PrincipalForm(String^ form_name);
		virtual void reload() {};
	protected:
		~PrincipalForm() { if (components) { delete components; } };
		System::Windows::Forms::Button^ button_add;
		System::Windows::Forms::Button^ button_modif;
		System::Windows::Forms::Button^ button_view;
		System::Windows::Forms::Button^ button_del;
		System::Windows::Forms::DataGridView^ data_grid_view;

		virtual void buttonAddClick(System::Object^ sender, System::EventArgs^ e) {};
		virtual void buttonModifClick(System::Object^ sender, System::EventArgs^ e) {};
		virtual void buttonViewClick(System::Object^ sender, System::EventArgs^ e) {};
		virtual void buttonDelClick(System::Object^ sender, System::EventArgs^ e) {};

		virtual void initDataGridView() {};

	private:
		String^ form_name;
		System::ComponentModel::Container^ components;
		void InitializeComponent();
	};
}
