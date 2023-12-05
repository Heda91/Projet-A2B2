#pragma once

using namespace System;
namespace Object {
    ref class PersonnelObject
    {

    private:
        int id_personnel = 0;
        int id_superieur = 0;
        String^ nom = "";
        String^ prenom = "";
        DateTime^ date_embauche = nullptr;
        bool supprime = false;

    public:
        void setIdPersonnel(int id_personnel);

        void setIdSuperieur(int id_superieur);

        void setNom(String^ name);

        void setPrenom(String^ prenom);

        void setDateEmbauche(DateTime^ date_embauche);

        void deletePersonnel();

        String^ getIdPersonnel();

        String^ getNom();

        String^ getPrenom();

        String^ getDateEmbauche();

        bool isDelete();

        String^ getIdSuperieur();

        String^ ToString() override;


    };

}