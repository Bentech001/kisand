#ifndef USER_H
#define USER_H
#include<string>
#include<iostream>
#include <stdlib.h>
extern int main();

class User
{
    public:
        User();
        User(int compt,std::string nomi,int paw);
        int id;
        std::string nom;
        int pw;
};

#endif
