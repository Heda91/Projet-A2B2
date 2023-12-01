#include "BDD.h"
#include "MyForm.h"
#include "main.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int __clrcall WinMain(array<String^>^ args)
{
    BDD^ mabdd = gcnew BDD();
    System::String^ query = "SELECT TOP (10) [id_adresse], [numero_rue], [rue] FROM [projet].[dbo].[Adresse]";
    System::Diagnostics::Debug::WriteLine(mabdd->executeNonQuery(query));
    //query = "SELECT TOP (10) [id_adresse], [ville] FROM [Adresse]";

    System::Diagnostics::Debug::WriteLine(mabdd->executeNonQuery(query));

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project2::MyForm monFormulaire;//ATTENTION : ici testWin est le nom du projet. Vous devez l'adapter au nom de votre projet

    Application::Run(% monFormulaire);
}