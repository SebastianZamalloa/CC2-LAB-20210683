#include "iostream"
#include "elipse.h"
using namespace std;

elipse::elipse(string aColor, int aX, int aY, char* name,float radM, float radm):forma(aColor,aX,aY,name)
{
    radioMayor = radM;
    radioMenor = radm;
}
elipse::~elipse(){}
float elipse::area(){return 3.14*(radioMayor*radioMenor);}
void elipse::imprimir(){forma::imprimir();cout<<"Radio mayor: "<<radioMayor<<"\nRadio menor: "<<radioMenor<<endl<<endl;}