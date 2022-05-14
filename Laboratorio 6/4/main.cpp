#include "iostream"
#include "lista.h"
#include "lista.cpp"
using namespace std;
int main()
{
    lista miLista;
    cout<<"Intentando agregar el 5...";
    miLista.agregar(5);
    cout<<"\nEliminando el 2...";
    miLista.eliminar(2);
    miLista.imprimir();
    cout<<"\n\nAgregando el 8...";
    miLista.agregar(8);
    miLista.imprimir();
    cout<<endl<<endl;
}