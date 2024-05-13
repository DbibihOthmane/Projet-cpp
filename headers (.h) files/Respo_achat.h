

#if !defined(Respo_achat_h)
#define Respo_achat_h

#include "Employe.h"
#include "Commande_respo.h"
#include <vector>

class Respo_achat : public Employe
{


	static int Id_resp_achat;
	std::vector<Commande_respo> commandes;


public:
	Respo_achat();
	Respo_achat(std::string, std::string, std::string, std::string, double, int);
	void Achat(int);
	void Afficher_personne();
	void ajouter_commande(Commande_respo&);
	void supprimer_commande(int);

	


};

#endif
