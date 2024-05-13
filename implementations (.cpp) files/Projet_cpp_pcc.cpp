// Projet_cpp_pcc.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include<vector>
#include "Personne.h"
#include "Client.h"
#include "Fournisseur.h"
#include "Employe.h"
#include "Produit.h"
#include "Commande.h"
#include "Commande_respo.h"
#include "Commande_client.h"


using namespace std;

std::ostream& operator<<(std::ostream& os, Personne& person) {
    person.Afficher_personne();
    return os;

}
int main()
{
    Client c("ma12548", "Client1", "Mohammed", true);
    Fournisseur f("ma14582", "Fournisseur1", "Zakaria", false);
    Employe e("ma5784", "Employe1", "Achraf", "ا55", 12000, 48);
    vector<Personne*> arr;

    arr.push_back(&c);
    arr.push_back(&f);
    arr.push_back(&e);

    //cout << "Le client est : " << endl << *arr[0] << endl;
    //cout << endl;
    //cout << "Le fournisseur est : " << endl << *arr[1];
    //cout << endl;
    //cout << "L'employe est : " << endl << *arr[2];

    Produit p1(10, "hlib", 3500);
    Produit p2(20, "danoun", 3500);
    Produit p3(30, "leben", 3500);

    vector<Produit> tabl_fournisseur;
    tabl_fournisseur.push_back(p1);
    tabl_fournisseur.push_back(p2);
    tabl_fournisseur.push_back(p3);
    Commande_respo cmd_fournisseur(1, "10/05/2024", tabl_fournisseur, f);
    cmd_fournisseur.Modifier_commande("10/05/2023", 2, "Paiement regle");
    cmd_fournisseur.Afficher_details();

    vector<Produit> tabl_client;
    tabl_client.push_back(p1);
    tabl_client.push_back(p2);
    tabl_client.push_back(p3);
    Commande_client cmd_client(1, "10/05/2024", tabl_fournisseur, c);
   // cmd_client.Afficher_details();

    Produit p4(40, "biscuit", 3500);
    cmd_fournisseur.Ajouter_produit(p4);
    cmd_client.Supprimer_produit(30);

    cmd_fournisseur.Afficher_details();
    cout << endl;

    //cmd_client.Afficher_details();
}

