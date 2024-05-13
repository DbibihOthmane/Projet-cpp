#include "Panier.h"

using namespace std;

Panier::Panier(int id)
{
	this->Id_Panier = id;
}

void Panier::ajouter_commande(Commande* commande)
{
	this->commandes.push_back(commande);
}

void Panier::supprimer_commande(int id)
{
	for (int i = 0; i < this->commandes.size(); i++)
	{
		if (this->commandes[i]->getId() == id)
		{
			this->commandes.erase(this->commandes.begin() + i);
			return;
		}
	}

	cout << "Commande non trouvee" << endl;
}

void Panier::Afficher()
{
	for (auto commande : this->commandes)
	{
		commande->Afficher_details();
	}
}