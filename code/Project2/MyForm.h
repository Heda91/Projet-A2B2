#pragma once
#include "BDD.h"

namespace ProjectDisplay {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Display
	/// </summary>
	public ref class Display : public System::Windows::Forms::Form
	{
	public:
		Display(void);

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Display();
	private: 
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::Button^ button3;
		System::Windows::Forms::Button^ button4;
		System::Windows::Forms::Button^ button5;

	    System::ComponentModel::IContainer^ components;

		void InitializeComponent() {
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(25, 5);
			this->button1->Name = L"btnPersonnel";
			this->button1->Size = System::Drawing::Size(400, 95);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Personnel";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(25, 105);
			this->button2->Name = L"btnClient";
			this->button2->Size = System::Drawing::Size(400, 95);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Client";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(25, 205);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(400, 95);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Commande";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(25, 305);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(400, 95);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Stock";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(25, 405);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(400, 95);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Statistiques";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// Display
			// 
			this->ClientSize = System::Drawing::Size(450, 505);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->MinimumSize = System::Drawing::Size(450, 505);
			this->Name = L"Display";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form Test";
			this->ResumeLayout(false);

		}
	};
}
