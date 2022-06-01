#include "iostream"
#include "cuadrado.h"
using namespace std;

cuadrado::cuadrado(string aColor, int aX, int aY, char* name,float lado):rectangulo(aColor,aX,aY,name,lado,lado){}
cuadrado::~cuadrado(){}
void cuadrado::imprimir(){forma::imprimir();cout<<"Lados: "<<ladoMayor<<endl<<endl;}