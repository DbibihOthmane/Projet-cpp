
#if !defined(Employe_h)
#define Employe_h

#include "Personne.h"

class Employe : public Personne
{

protected:
	int id_employe;
	double Salaire;
	int Heures_travail;
	std::string Matricule;

public:
	Employe();
	Employe(std::string, std::string, std::string, std::string, double, int);
	~Employe();
	virtual void Afficher_personne();

};


#endif
