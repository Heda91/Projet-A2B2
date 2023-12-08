#pragma once

using namespace System;
namespace Object {
	ref class AdressObject
	{
	private:
		int id_adresse = 0;
		int numero = 0;
		String^ rue = "";
		String^ code_postale = "";
		String^ ville = "";
		bool supprime = false;
	public:
		void setIdAdresse(int);
		void setNumero(int);
		void setRue(String^);
		void setCodePostale(String^);
		void setVille(String^);

		void deleteAdresse();
		bool isDelete();

		String^ getIdAdresse();
		String^ getNumero();
		String^ getRue();
		String^ getCodePostale();
		String^ getVille();

		String^ ToString() override;
	};
}
