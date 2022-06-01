#include "iostream"
#include "gallina.h"
using namespace std;

gallina::gallina(string a,float b, float c):ave(a,b,c,false){}
gallina::~gallina(){}
void gallina::cacarear(){cout<<"\nSu gallina esta cacareando\n";}
void gallina::ponerHuevo(){cout<<"\nSu gallina pondra un huevo\n";}