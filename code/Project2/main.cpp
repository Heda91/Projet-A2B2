#include "BDD.h"
#include "MyForm.h"
#include "main.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]




int __clrcall WinMain(array<String^>^ args)
{
    BDD^ mabdd = gcnew BDD();
    System::String^ query = "USE master";
    //System::Diagnostics::Debug::WriteLine(mabdd->executeNonQuery(query));
    //query = "INSERT INTO [dbo.MSreplication_options] VALUES ('a',TRUE,1,1,1)";
//        USE[master]
//        GO
//
//        INSERT INTO[dbo].[MSreplication_options]
//        ([optname]
//            , [value]
//            , [major_version]
//            , [minor_version]
//            , [revision]
//            , [install_failures])
//        VALUES
//        (<optname, sysname, >
//            , <value, bit, >
//            , <major_version, int, >
//            , <minor_version, int, >
//            , <revision, int, >
//            , <install_failures, int, >)
//        GO



    mabdd->executeNonQuery(query);
    query = "SELECT[major_version] FROM [MSreplication_options]";
//    USE[master]
//        GO
//
//        SELECT[optname]
//        , [value]
//        , [major_version]
//        , [minor_version]
//       , [revision]
//       , [install_failures]
//       FROM[dbo].[MSreplication_options]
//
//        GO


    System::Diagnostics::Debug::WriteLine(mabdd->executeNonQuery(query));
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project2::MyForm monFormulaire;//ATTENTION : ici testWin est le nom du projet. Vous devez l'adapter au nom de votre projet

    Application::Run(% monFormulaire);
}