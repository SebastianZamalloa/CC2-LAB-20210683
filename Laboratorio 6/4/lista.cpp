#include "iostream"
#include "lista.h"
using namespace std;

lista::lista()
{
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Rellene el valor "<<i+1<<": ",cin>>valor[i];
        esLleno[i] = true;
    }
    cout<<endl;
}
lista::~lista(){}
void lista::eliminar(int x)
{
    int counter = 0;
    for(int i = 0;i<5;i++)
        if(esLleno[i]==false)
            counter++;
    if(counter==5)
    {
        cout<<"No hay nada que eliminar";
        return;
    }
    for(int i = 0;i<5;i++)
    {
        if(valor[i] == x && esLleno[i]==true)
        {
            valor[i] = 0;
            esLleno[i] = false;
        }
    }
}
void lista::agregar(int x)
{
    for(int i = 0;i<5;i++)
    {
        if(esLleno[i] == false)
        {
            valor[i] = x;
            esLleno[i] = true;
            return;
        }
    }
    cout<<"\nEl arreglo esta lleno\n";
}
void lista::imprimir()
{
    cout<<"\nArreglo: ";
    for(int i=0;i<5;i++)
    {
        if(esLleno[i] == true)
            cout<<valor[i]<<" ";
        else
            cout<<"\"VALOR NO ENCONTRADO\" ";
    }
}
