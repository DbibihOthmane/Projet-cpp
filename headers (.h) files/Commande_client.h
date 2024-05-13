

#if !defined(Commande_client_h)
#define Commande_client_h

#include "Commande.h"
#include "Client.h"

class Commande_client : public Commande
{


	static int id_cmd_client;
	Client client;

public:
	
	Commande_client();
	Commande_client(int, std::string, std::vector<Produit>&, Client&);

	void Modifier_commande(std::string, int, std::string);
	void Afficher_details();
	void Supprimer_produit(int);
	void Ajouter_produit(Produit&);
	int getId();


};

#endif

