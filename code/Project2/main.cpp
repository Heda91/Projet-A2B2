#include "BDD.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int __clrcall WinMain()
{
    BDD^ mabdd = gcnew BDD();

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Display::MainForm monFormulaire(mabdd);//ATTENTION : ici testWin est le nom du projet. Vous devez l'adapter au nom de votre projet

    Application::Run(% monFormulaire);
}