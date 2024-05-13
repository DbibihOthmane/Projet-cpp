
#include<iostream>
#if !defined(Personne_h)
#define Personne_h

class Personne
{

protected:
	std::string Nom;
	std::string Prenom;
	std::string Cin;

public:
	Personne();
	Personne(std::string, std::string, std::string);
	~Personne();
	virtual void Afficher_personne(void);


};

#endif