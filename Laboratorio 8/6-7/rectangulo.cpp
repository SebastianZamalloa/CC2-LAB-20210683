#include "rectangulo.h"
#include "iostream"

rectangulo::rectangulo(string aColor, int aX, int aY, char* name,float ladoM, float ladom):forma(aColor,aX,aY,name)
{
    ladoMayor = ladoM;
    ladoMenor = ladom;
}
rectangulo::~rectangulo(){}
float rectangulo::area(){return ladoMayor*ladoMenor;}
float rectangulo::perimetro(){return 2.0*ladoMayor+2.0*ladoMenor;}
void rectangulo::escala(float scale){ladoMayor*=scale;ladoMenor*=scale;}
void rectangulo::imprimir(){forma::imprimir();cout<<"Lado mayor: "<<ladoMayor<<"\nLado menor: "<<ladoMenor<<endl<<endl;}