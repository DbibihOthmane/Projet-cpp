#include "Fournisseur.h"
#include <stdexcept>

using namespace std;

int Fournisseur::Id_fournisseur = 0;

Fournisseur::Fournisseur() : Personne()
{
	Id_fournisseur++;
	this->Etat_fournisseur = false;

}

Fournisseur::Fournisseur(string cin, string nom, string prenom, bool etat = false) : Personne(cin, nom, prenom)
{
	Id_fournisseur++;
	this->Etat_fournisseur = etat;
}

Fournisseur::~Fournisseur()
{

}

void Fournisseur::set_Etat(std::string etat)
{
	try {
		if (etat == "Paiement regle" || etat == "Paiment non regle")
		{
			etat == "Paiement regle" ? this->Etat_fournisseur = true
				: this->Etat_fournisseur = false;
		}
		else
		{
			throw runtime_error("Etat du fournisseur doit etre = Paiement regle || Paiement non regle");
		}
	}
	catch (const exception& e) {
		cerr << "Caught exception: " << e.what() << endl;
	}
	
}

void Fournisseur::Afficher_personne()
{
	Personne::Afficher_personne();
	string etat = this->Etat_fournisseur ? " Paiement regle " : " Paiement non regle ";
	cout << "Etat du fournisseur : " << etat << " | " << "ID du fournisseur : " << this->Id_fournisseur << endl;
}

