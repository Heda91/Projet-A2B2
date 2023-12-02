#include "MyForm.h"

using namespace System::Windows::Forms;
using namespace ProjectDisplay;

Display::Display() { 
	this->InitializeComponent();
}
Display::~Display() {
	if (this->components) { delete components; }
}





