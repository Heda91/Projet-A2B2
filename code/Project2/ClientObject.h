#pragma once

using namespace System;
namespace Object {
    ref class ClientObject
    {

    private:
        int numero_client = 0;
        String^ name;
        String^ first_name;

    public:
        void setNumero_client(int idUser);

        int getNumero_client(void);

        void setNom(String^ name);

        void setFirstName(String^ name) { this->first_name = name; }

        String^ getNom();

        String^ getFirstName() { return this->first_name; }

        String^ ToString() override;

    };
}