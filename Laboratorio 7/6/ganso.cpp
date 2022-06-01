#include "iostream"
#include "ganso.h"
using namespace std;

ganso::ganso(string a,float b, float c):ave(a,b,c,true){}
ganso::~ganso(){}
void ganso::migrar(){cout<<"\nSu ganso esta migrando\n";}
void ganso::graznar(){cout<<"\nSu ganso esta graznando\n";}