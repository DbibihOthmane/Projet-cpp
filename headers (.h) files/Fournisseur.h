
#if !defined(Fournisseur_h)
#define Fournisseur_h

#include "Personne.h"

#include<iostream>

class Fournisseur : public Personne
{

protected:
	static int Id_fournisseur;
	bool Etat_fournisseur;

public:
	Fournisseur();
	Fournisseur(std::string, std::string, std::string, bool);
	~Fournisseur();
	void set_Etat(std::string);
	void Afficher_personne();


};

#endif