

#if !defined(Responsable_de_stock_h)
#define Responsable_de_stock_h

#include "Employe.h"
#include "Dipot_stock.h"


class Responsable_de_stock : public Employe
{
	Dipot_stock dipot_stock;
	static int Id_resp_stock;


public:

	Responsable_de_stock();
	Responsable_de_stock(std::string, std::string, std::string, std::string, double, int);
	

	void Afficher_personne();
	void Ajouter_produit(Produit& );
	void Supprimer_produit(int);
	void Modifier_produit(Produit& p);
	void Consulter_produit(int);
	bool check_existe(int);





	


};

#endif
