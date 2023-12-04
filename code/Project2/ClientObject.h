#pragma once

using namespace System;
namespace Object {
	ref class ClientObject
	{

	private:
		int idUser = 0;
		String^ name;
		String^ prenom;

	public:
		void setNumero_client(int idUser);

		void setNom(String^ name);

		void setPrenom(String^ prenom);

		int getNumero_client();

		String^ getNom();

		String^ getPrenom();

		String^ ToString() override;

	};
}
