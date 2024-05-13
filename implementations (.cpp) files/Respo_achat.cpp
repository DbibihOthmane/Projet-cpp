#include "Respo_achat.h"

using namespace std;

int Respo_achat::Id_resp_achat = 0;
Respo_achat::Respo_achat() : Employe()
{
	this->Id_resp_achat++;
}

Respo_achat::Respo_achat(string cin, string nom, string prenom, string matricule, double salaire, int heure_travail) 
	: Employe( cin,  nom,  prenom,  matricule,  salaire,  heure_travail)
{
	this->Id_resp_achat++;
}

void Respo_achat::Afficher_personne()
{
	Personne::Afficher_personne();
	Employe::Afficher_personne();

}

void Respo_achat::ajouter_commande(Commande_respo& commande)
{
	this->commandes.push_back(commande);
}

void Respo_achat::supprimer_commande(int id)
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

void Respo_achat::Achat(int id)
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
