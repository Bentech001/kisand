#ifndef FLEURS_H
#define FLEURS_H
#include<string>
#include<iostream>
#include <stdlib.h>
extern void creercompte();
extern void login();
extern void consultercompte(int id);
extern void retourner();
extern int main();
extern void affichage_clients();
extern void depot (int idd);
extern void retrait (int idr);
extern void virement (int iv);
extern void balance(int ib);

class Fleurs
{
    public:
        Fleurs();
        Fleurs(int idt,std::string nomi,int quantite);
        int id;
        std::string nom;
        int qte;
};

#endif // FLEURS_H
