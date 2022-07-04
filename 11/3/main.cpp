#include "iostream"
#include "pila.h"
using namespace std;

int main()
{
    cout<<"\nPILAS: \n";
    pila pila1;
    int n;
    cout<<"\nCuantos datos necesita para su pila?: ",cin>>n,cout<<endl;
    for(int i = 0; i<n; i++)
    {
        int tempx;
        cout<<"Ingrese el siguiente dato para su pila: ",cin>>tempx;
        pila1.push(tempx);
    }
    cout<<"\nEsta es su pila:\n";
    pila1.imprimir();
    int o = 1;
    cout<<"\nMENÚ DE PILAS:\n";
    while(o==1 || o==2)
    {
        cout<<"\n1. Agregar elemento \n2. Eliminar un elemento";
        cout<<"\n\nElegir opcion (Ingrese cualquier otro caracter para terminar el programa): ",cin>>o;
        switch(o)
        {
            case 1:
            {
                int tempx;
                cout<<"Ingrese el siguiente dato para su pila: ",cin>>tempx;
                pila1.push(tempx);
            }break;
            case 2:
            {
                pila1.pop();
            }break;
            default:
                break;
        }
        if(o==1 || o==2)
        {
            cout<<"\nEsta es su pila:\n";
            pila1.imprimir();
        }
    }
    cout<<"\nPrograma finalizado\n\n";
}