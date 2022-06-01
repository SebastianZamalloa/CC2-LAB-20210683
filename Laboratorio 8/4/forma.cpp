#pragma once
#include "iostream"
#include "cstring"
#include "forma.h"
using namespace std;

forma::forma(string aColor, int aX, int aY, char* name):color(aColor)
{
    centro = punto(aX,aY);
    nombre = name;
}
forma::~forma(){}
void forma::imprimir()
{
    cout<<"\nNombre: ";
    int longitud = strlen(nombre);
    for(int i = 0;i<longitud;i++)
        cout<<*(nombre+i);
    cout<<"\nColor: "<<color<<"\nCoordenadas: ("<<centro.getX()<<", "<<centro.getY()<<")\n\n";
}
string forma::getColor(){return color;}
void forma::setColor(string aColor){color=aColor;}
void forma::moverCentro(int aX,int aY){centro.setX(centro.getX()+aX);centro.setY(centro.getY()+aY);}
float forma::area(){return 0;}
float forma::perimetro(){return 0;}
void forma::escala(int a){}
