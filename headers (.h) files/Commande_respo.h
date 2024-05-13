

#if !defined(Commande_respo_h)
#define Commande_respo_h

#include "Commande.h"
#include "Fournisseur.h"

class Commande_respo : public Commande
{

private:

	static int Id_cmd_resp;
	Fournisseur fournisseur;



public:

	Commande_respo();
	Commande_respo(int, std::string, std::vector<Produit>&, Fournisseur&);

	void Modifier_commande(std::string, int, std::string);
	void Afficher_details();
	void Supprimer_produit(int);
	void Ajouter_produit(Produit&);
	int getId();

};

#endif

