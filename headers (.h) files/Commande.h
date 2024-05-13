
#if !defined(Commande_h)
#define Commande_h
#include<iostream>
#include<vector>
#include "Produit.h"


class Commande
{

protected:
	std::vector<Produit> Produits;
	std::string Date;
	int Id_commande;

public:
	virtual void Modifier_commande(std::string, int, std::string) = 0;
	virtual void Afficher_details() = 0;
	virtual void Supprimer_produit(int) = 0;
	virtual void Ajouter_produit(Produit&) = 0;
	virtual int getId() = 0;

	Commande();
	Commande(int, std::string, std::vector<Produit>&);
	Commande(int, std::string, Produit);
	



};

#endif