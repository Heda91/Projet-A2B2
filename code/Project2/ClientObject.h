#pragma once
#include "AdressObject.h"

using namespace System;
using namespace System::Collections::Generic;
namespace Object {
    ref class ClientObject
    {

    private:
        int numero_client = 0;
        String^ nom = "";
        String^ prenom = "";
        DateTime^ date_naissance = nullptr;
        List<AdressObject^>^ adresse_livraison = gcnew List<AdressObject^>();
        List<AdressObject^>^ adresse_emission = gcnew List<AdressObject^>();
        bool supprime = false;
    public:
        void setNumeroClient(int num) { this->numero_client = num; }
        void setNom(String^ nom) { this->nom = nom; }
        void setPrenom(String^ prenom) { this->prenom = prenom; }
        void setdateNaissance(DateTime^ date) { this->date_naissance = date; }

        void addAdresseLivraison(AdressObject^ adresse) { this->adresse_livraison->Add(adresse); }
        void addAdresseEmission(AdressObject^ adresse) { this->adresse_emission->Add(adresse); }
        void deleteAdresseLivraison(AdressObject^ adresse) { this->adresse_livraison->Remove(adresse); }
        void deleteAdresseEmission(AdressObject^ adresse) { this->adresse_emission->Remove(adresse); }

        String^ getNumeroClient();
        String^ getNom();
        String^ getPrenom();
        String^ getDateNaissance();
        String^ getDateNaissanceAff();
        DateTime^ getDateNaissanceVar() { return this->date_naissance; }
        List<AdressObject^>^ getAdresseLivraison();
        List<AdressObject^>^ getAdresseEmission();

        bool isDeleted() { return supprime; }
        void deleteClient() { this->supprime = true; }

        String^ ToString() override;
    };
}