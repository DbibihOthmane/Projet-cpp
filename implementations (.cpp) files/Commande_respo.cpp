#include "Commande_respo.h"

using namespace std;

int Commande_respo::Id_cmd_resp = 0;
Commande_respo::Commande_respo() : Commande()
{
	Id_cmd_resp++;
}

Commande_respo::Commande_respo(int id, string date, vector<Produit>& produits, Fournisseur& fournisseur) 
	: Commande(id, date, produits), fournisseur(fournisseur) 
{
	Id_cmd_resp++;
}


void Commande_respo::Modifier_commande(string date, int id, string etat_paiement)
{
	this->Date = date;
	this->Id_commande = id;
	this->fournisseur.set_Etat(etat_paiement);
}

void Commande_respo::Ajouter_produit(Produit& produit)
{
	this->Produits.push_back(produit);
}

void Commande_respo::Supprimer_produit(int id_produit)
{
	for (int i = 0; i < this->Produits.size(); ++i)
	{
		bool check = false;
		if (id_produit == this->Produits[i].get_Id_produit())
		{
			this->Produits.erase(this->Produits.begin() + i);
			cout << "Le produit avec id : " << id_produit << " est supprime avec succes " << endl;
			return;
		}

	}

	cout << "Produit introuvable, veuillez verifier l'Id correctement" << endl;
}

void Commande_respo::Afficher_details()
{
	cout << "Id du commande : " << this->Id_commande << " | " << "Date : " << this->Date << endl
		<< "***** Les produits du commande *****" << endl;
	for (auto produit : this->Produits)
	{
		produit.afficher_produit();
	}

	cout << "Le fournisseur est : " << endl;
	this->fournisseur.Afficher_personne();

}

int Commande_respo::getId()
{
	return this->Id_commande;
}
