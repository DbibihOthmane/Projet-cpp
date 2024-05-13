
#if !defined(Respo_de_vente_h)
#define Respo_de_vente_h

#include "Employe.h"
#include "Commande_respo.h"
#include "Responsable_stock.h"
#include <vector>

class Respo_de_vente : public Employe
{

	static int Id_resp_vente;
	std::vector<Commande_respo> commandes;

public:
	Respo_de_vente();
	Respo_de_vente(std::string, std::string, std::string, std::string, double, int);
	void Afficher_personne();
	void ajouter_commande(Commande_respo&);
	void supprimer_commande(int);
	void Vente(int);
	bool Check_disponibilite(Produit&, Responsable_de_stock&);


	


};

#endif
