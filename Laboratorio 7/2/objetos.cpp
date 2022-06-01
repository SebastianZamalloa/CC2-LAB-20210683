#include "iostream"
#include "objetos.h"
using namespace std;

objetos::objetos(string coloraux = "blanco",int i = 1,string m = "indefinido",string type = "indefinido"):material(m)
{
    if(i == 1)
        color1 = coloraux;
    else if(i == 2)
        color2 = coloraux;
    else
        color3 = coloraux;
    tipo = type;
    colorPos = i;
}
objetos::~objetos(){}
void objetos::imprimir()
{
    cout<<endl<<tipo<<" de color ";
    if(colorPos == 1)
        cout<<color1;
    else if(colorPos == 2)
        cout<<color2;
    else
        cout<<color3;
    cout<<" y material de "<<miMaterial<<endl<<endl;
}