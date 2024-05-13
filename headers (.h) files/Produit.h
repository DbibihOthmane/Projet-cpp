
#include<iostream>

#if !defined(Produit_h)
#define Produit_h

class Produit
{

	int Id_produit;
	std::string Nom;
	double Prix;

public:
	
	Produit();
	Produit(int, std::string, double);
	~Produit();
	void afficher_produit(void);

	int get_Id_produit();
	std::string get_nom_produit();
	double get_prix_produit();

	void set_Id_produit(int);
	void set_nom_produit(std::string);
	void set_prix_produit(double);


};

#endif