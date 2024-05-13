
#include "Personne.h"


using namespace std;



Personne::Personne()
{
	this->Nom = " ";
	this->Prenom = " ";
	this->Cin = " ";
}

Personne::Personne(string cin, string nom, string prenom)
{
	this->Nom = nom;
	this->Prenom = prenom;
	this->Cin = cin;
}

Personne::~Personne()
{
	
}



void Personne::Afficher_personne()
{
	cout << "Cin : " << this->Cin << " | " << "Nom : " 
		<< this->Nom << " | " << "Prenom : " << this->Prenom << " | ";

}