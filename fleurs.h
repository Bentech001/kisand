#ifndef FLEURS_H
#define FLEURS_H
#include<string>
#include<iostream>
#include <stdlib.h>
extern void creercompte();
extern void login();
extern void retourner();
extern int main();
extern void affichage_clients();

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
