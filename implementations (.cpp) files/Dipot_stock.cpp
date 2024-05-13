#include "Dipot_stock.h"

using namespace std;

Dipot_stock::Dipot_stock() 
{
	this->Capacite_maximal = 0;
	this->Adresse = "";
	this->estPlein = false;
}

Dipot_stock::Dipot_stock(std::vector<Produit>& produits, int id, std::string adresse, int capacite)
{
	this->Id_dipot = id;
	this->Adresse = adresse;
	this->Capacite_maximal = capacite;

	for (auto produit : produits)
	{
		if(this->produits.size() <= this->Capacite_maximal)
			this->produits.push_back(produit);
		else
		{
			this->estPlein = true;
			break;
		}
	}

}

void Dipot_stock::Details_produit()
{
	for (auto produit : this->produits)
	{
		cout << "***** Les produits disponible dans le stocks sont *****";
		produit.afficher_produit();
		
	}
	cout << "La capacite_maximal est : " << this->Capacite_maximal << endl;
}


void Dipot_stock::setProduits(Produit& p) {
	this->produits.push_back(p);
}

void Dipot_stock::unsetProduits(int id) {
	
	for (int i = 0 ; i < this->produits.size() ; i++)
	{
		if (this->produits[i].get_Id_produit() == id)
		{
			this->produits.erase(this->produits.begin() + i);
			return;
		}
	}
	
	cout << "Produit non trouve ! " << endl;

}

void Dipot_stock::consulterProduits(int id)
{
	for (auto produit : this->produits)
	{
		if (produit.get_Id_produit() == id)
		{
			produit.afficher_produit();
			return;
		}
	}

	cout << "Produit non trouve !" << endl;
}

void Dipot_stock::modifierProduits(Produit& p)
{
	for (auto produit : this->produits)
	{
		if (produit.get_Id_produit() == p.get_Id_produit())
		{
			produit = p;
			return;
		}
	}

	cout << "Produit non trouve !" << endl;

}

bool Dipot_stock::existe(int id)
{
	for (auto produit : this->produits)
		if (produit.get_Id_produit() == id)
			return true;

	return false;
	
}