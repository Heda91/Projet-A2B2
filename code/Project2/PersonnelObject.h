#pragma once

using namespace System;
namespace Object {
	ref class PersonnelObject
	{

	private:
		int id_personnel = 0;
		int id_superieur;
		String^ nom;
		String^ prenom;
		String^ date_embauche;
		bool supprime = false;

	public:
		void setId_personnel(int id_personnel);

		void setId_superieur(int id_superieur);

		void setNom(String^ name);

		void setPrenom(String^ prenom);

		void setDate_embauche(String^ date_embauche);

		void setSupprime();

		int getId_personnel();

		String^ getNom();

		String^ getPrenom();

		String^ getDate_embauche();

		bool getSupprime();

		int getId_superieur();

		String^ ToString() override;
		

	};

}