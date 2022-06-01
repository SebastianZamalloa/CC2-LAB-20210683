#include "iostream"
#include "circulo.h"
using namespace std;

circulo::circulo(string aColor, int aX, int aY, char* name,float radio):elipse(aColor,aX,aY,name,radio,radio){}
circulo::~circulo(){}
void circulo::imprimir(){forma::imprimir();cout<<"Radio: "<<radioMayor<<endl<<endl;}