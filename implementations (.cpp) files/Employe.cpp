#include "Employe.h"

using namespace std;

Employe::Employe() : Personne()
{
	this->Heures_travail = 0;
	this->Matricule = " ";
	this->Salaire = 0;
}

Employe::Employe(string cin, string nom, string prenom, string matricule, double salaire, int heure_travail ) 
	: Personne(cin, nom, prenom)
{
	this->Matricule = matricule;
	this->Salaire = salaire;
	this->Heures_travail = heure_travail;
}

Employe::~Employe()
{

}

void Employe::Afficher_personne()
{
	Personne::Afficher_personne();
	cout << "Matricule : " << this->Matricule << " | " << "Salaire : " << this->Salaire
		<< " | " << "Heure du travail : " << this->Heures_travail << endl;
}

