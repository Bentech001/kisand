#include<iostream>
#include "Users.h"
#include<string>

using namespace std;
User::User() {};
User::User(int compt,std::string nomi,int paw){
         id=compt;
         nom=nomi;
         pw=paw;
};
