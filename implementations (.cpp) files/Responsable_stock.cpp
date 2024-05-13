#include "Responsable_stock.h"


using namespace std;

int Responsable_de_stock::Id_resp_stock = 0;
Responsable_de_stock::Responsable_de_stock() : Employe()
{
	this->Id_resp_stock++;
}

Responsable_de_stock::Responsable_de_stock(string cin, string nom, string prenom, string matricule, double salaire, int heure_travail)
	: Employe( cin,  nom,  prenom,  matricule,  salaire,  heure_travail)
{
	this->Id_resp_stock++;
}


void Responsable_de_stock::Ajouter_produit(Produit& produit)
{
	this->dipot_stock.setProduits(produit);
}

void Responsable_de_stock::Supprimer_produit(int id)
{
	this->dipot_stock.unsetProduits(id);
}

void Responsable_de_stock::Modifier_produit(Produit& produit)
{
	this->dipot_stock.modifierProduits(produit);
}

void Responsable_de_stock::Consulter_produit(int id)
{
	this->dipot_stock.consulterProduits(id);
}


void Responsable_de_stock ::Afficher_personne()
{
	Personne::Afficher_personne();
	Employe::Afficher_personne();
	cout << "Responsable du dipot de stock avec les details suivants : " << endl;
	this->dipot_stock.Details_produit();
}

bool Responsable_de_stock::check_existe(int id)
{
	return this->dipot_stock.existe(id);
}


