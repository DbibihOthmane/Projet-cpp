#include "Client.h"

using namespace std;

int Client::Id_client = 0;
Client::Client() : Personne()
{
	Id_client++;
	this->Etat_client = false;
	
}

Client::Client(string cin, string nom, string prenom, bool etat = false) : Personne(cin, nom, prenom)
{
	Id_client++;
	this->Etat_client = etat;
}

Client::~Client()
{

}

void Client::set_etat(std::string etat)
{
	etat == "Paiement regle" ? this->Etat_client = true
		: this->Etat_client = false;
}

void Client::Afficher_personne()
{
	Personne::Afficher_personne();
	string etat = this->Etat_client ? " Paiement regle " : " Paiement non regle ";
	cout << "Etat du client : " << etat << " | " << "ID du client : " << this->Id_client << endl;
}
