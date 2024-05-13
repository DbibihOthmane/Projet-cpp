#include "Respo_vente.h"


using namespace std;

int Respo_de_vente::Id_resp_vente = 0;
Respo_de_vente::Respo_de_vente() : Employe()
{
	this->Id_resp_vente++;
}

Respo_de_vente::Respo_de_vente(string cin, string nom, string prenom, string matricule, double salaire, int heure_travail)
	: Employe(cin, nom, prenom, matricule, salaire, heure_travail)
{
	this->Id_resp_vente++;
}

void Respo_de_vente::Afficher_personne()
{
	Personne::Afficher_personne();
	Employe::Afficher_personne();

}

void Respo_de_vente::ajouter_commande(Commande_respo& commande)
{
	this->commandes.push_back(commande);
}

void Respo_de_vente::supprimer_commande(int id)
{
	for (int i = 0; i < this->commandes.size(); i++)
	{
		if (this->commandes[i].getId() == id)
		{
			this->commandes.erase(this->commandes.begin() + i);
			return;
		}
	}

	cout << " Commande non trouvee " << endl;
}

bool Respo_de_vente::Check_disponibilite(Produit& produit, Responsable_de_stock& resp_stock)
{
	return resp_stock.check_existe(produit.get_Id_produit());
}

void Respo_de_vente::Vente(int id)
{
	for (int i = 0; i < this->commandes.size(); i++)
	{
		if (this->commandes[i].getId() == id)
		{
			this->commandes.erase(this->commandes.begin() + i);
			return;
		}
	}

	cout << "Commande non trouvee" << endl;
}