#include "Commande_client.h"

using namespace std;

int Commande_client::id_cmd_client = 0;
Commande_client::Commande_client() : Commande()
{
	id_cmd_client++;
}

Commande_client::Commande_client(int id, string date, vector<Produit>& produits, Client& client)
	: Commande(id, date, produits), client(client)
{
	id_cmd_client++;
}


void Commande_client::Modifier_commande(string date, int id, string etat_paiement)
{
	this->Date = date;
	this->Id_commande = id;
	this->client.set_etat(etat_paiement);
}

void Commande_client::Ajouter_produit(Produit& produit)
{
	this->Produits.push_back(produit);
}

void Commande_client::Supprimer_produit(int id_produit)
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

void Commande_client::Afficher_details()
{
	cout << "Id du commande : " << this->Id_commande << " | " << "Date : " << this->Date << endl
		<< "***** Les produits du commande *****" << endl;
	for (auto produit : this->Produits)
	{
		produit.afficher_produit();
	}

	cout << "Le Client est : " << endl;
	this->client.Afficher_personne();

}

int Commande_client::getId()
{
	return this->Id_commande;
}