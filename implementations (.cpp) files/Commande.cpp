#include "Commande.h"

using namespace std;

Commande::Commande()
{
	this->Id_commande = 0;
	this->Date = " ";
}

Commande::Commande(int id, string date, vector<Produit>& produits)
{
	this->Id_commande = id;
	this->Date = date;

	for (auto produit : produits)
	{
		this->Produits.push_back(produit);
	}
}

Commande::Commande(int id, string date, Produit p)
{
	this->Id_commande = id;
	this->Date = date;
	this->Produits.push_back(p);
}