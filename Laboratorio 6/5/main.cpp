#include "iostream"
#include "matriz.h"
#include "matriz.cpp"
using namespace std;
int main()
{
    matriz miMatriz;
    int val,f,c;
    cout<<"\nIngrese el valor que va a buscar del 1 al 9: ",cin>>val;
    while(val<=0 || val>9)
        cout<<"INVALIDO\nIngrese el valor que va a buscar del 1 al 9: ",cin>>val;
    if(miMatriz.buscar(val,f,c))
        cout<<"\nVALOR ENCONTRADO\nEl elemento "<<val<<" esta en la posicion ("<<f<<", "<<c<<")"<<endl<<endl;
    else
        cout<<"\nVALOR NO ENCONTRADO\n\n";

}