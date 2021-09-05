#include<iostream>
#include "fleurs.h"
#include<string>

using namespace std;
Fleurs::Fleurs() {};
Fleurs::Fleurs(int idt,std::string nomi,int quantite){
          id= idt;
         nom=nomi;
        qte=quantite;
};
