#include "iostream"
#include "nodo.h"
using namespace std;

int main()
{
    cout<<"\nLISTA ENLAZADA:\n";
    nodo *lista = new nodo;
    int n;
    cout<<"\nCuantos datos necesita para su lista enlazada?: ",cin>>n,cout<<endl;
    for(int i = 0; i<n; i++)
    {
        int tempx;
        cout<<"Ingrese el siguiente dato al inicio de la lista enlazada: ",cin>>tempx;
        lista->insertar_inicio(tempx);
    }
    cout<<"\nEsta es su lista enlazada:\n";
    lista->imprimir();
    delete lista;
}