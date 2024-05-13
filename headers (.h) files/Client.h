
#if !defined(Client_h)
#define Client_h

#include<iostream>

#include "Personne.h"


class Client : public Personne
{

protected:
	static int Id_client;
	bool Etat_client;


public:
	Client();
	Client(std::string, std::string, std::string, bool);
	~Client();

	void set_etat(std::string);
	void Afficher_personne();



};

#endif