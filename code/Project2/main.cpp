#include "BDD.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int __clrcall WinMain()
{
    BDD^ mabdd = gcnew BDD();
    //System::String^ query = "SELECT TOP (10) [id_adresse], [numero_rue], [rue] FROM [projet].[dbo].[Adresse]";
    //System::Diagnostics::Debug::WriteLine(mabdd->executeNonQuery(query));
    //query = "SELECT TOP (10) [id_adresse], [ville] FROM [Adresse]";

    //System::Diagnostics::Debug::WriteLine(mabdd->executeNonQuery(query));

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Display::MainForm monFormulaire(mabdd);//ATTENTION : ici testWin est le nom du projet. Vous devez l'adapter au nom de votre projet

    Application::Run(% monFormulaire);
}