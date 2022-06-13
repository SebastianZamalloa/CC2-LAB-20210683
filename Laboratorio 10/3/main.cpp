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
        lista->insertar_final(tempx);
    }
    cout<<"\nEsta es su lista enlazada:\n";
    lista->imprimir();

    int tempy;
    cout<<"Ingrese una posicion para un dato extra (Las posiciones empiezan contando los nodos desde el 1): ",cin>>n;
    cout<<"Ingrese el dato extra: ",cin>>tempy;

    cout<<"\nEsta es su lista enlazada:\n";
    lista->insertar_pos(tempy,n);
    lista->imprimir();
    
    delete lista;
}