

#if !defined(Dipot_stock_h)
#define Dipot_stock_h

#include <iostream>
#include<vector>
#include "Produit.h"



class Dipot_stock
{

	std::vector<Produit> produits;
	int Id_dipot;
	std::string Adresse;
	int Capacite_maximal;
	bool estPlein;

public:
	Dipot_stock();
	Dipot_stock(std::vector<Produit>&, int, std::string, int);
	void Details_produit();
	void setProduits(Produit& p);
	void unsetProduits(int); 
	void modifierProduits(Produit&);
	void consulterProduits(int);
	bool existe(int);
	


};

#endif

