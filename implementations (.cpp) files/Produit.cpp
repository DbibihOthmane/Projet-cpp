#include "Produit.h"

using namespace std;

Produit::Produit()
{
	this->Id_produit = 0;
	this->Nom = " ";
	this->Prix = 0;
}

Produit::Produit(int id_produit, string nom, double prix)
{
	this->Id_produit = id_produit;
	this->Nom = nom;
	this->Prix = prix;
}

Produit::~Produit()
{

}

void Produit::afficher_produit()
{
	cout << "Les infos du produit " << " ***** " << this->Nom << " ***** " << endl
		<< "Id : " << this->Id_produit << endl
		<< "Prix : " << this->Prix << endl;
}

int Produit::get_Id_produit()
{
	return this->Id_produit;
}

string Produit::get_nom_produit()
{
	return this->Nom;
}

double Produit::get_prix_produit()
{
	return this->Prix;
}

void Produit::set_Id_produit(int id)
{
	this->Id_produit = id;
}

void Produit::set_nom_produit(string nom)
{
	this->Nom = nom;
}

void Produit::set_prix_produit(double prix)
{
	this->Prix = prix;
}