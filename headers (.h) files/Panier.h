

#if !defined(Panier_h)
#define Panier_h
#include "Commande.h"
#include<vector>
#include<iostream>

class Panier
{

	int Id_Panier;
	std::vector<Commande*> commandes;

public:
	Panier(int);
	void Afficher(void);
	void ajouter_commande(Commande*);
	void supprimer_commande(int);


	


};

#endif
