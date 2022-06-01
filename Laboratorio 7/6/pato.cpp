#include "iostream"
#include "pato.h"
using namespace std;

pato::pato(string a,float b, float c):ave(a,b,c,true){}
pato::~pato(){}
void pato::volarV(){cout<<"\nSu pato esta volando en grupo de V\n";}
void pato::graznar(){cout<<"\nSu pato esta graznando\n";}
void pato::nadar(){cout<<"\nSu pato esta nadando\n";}