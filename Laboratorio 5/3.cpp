#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
 
struct nodo
{
    int valor;
    nodo *next;
};

void ingresar(nodo *&lista, int valor)
{
    nodo *x = new nodo;
    nodo *y = new nodo;
    x->valor = valor;
    x->next = NULL;
    if(lista == NULL)
        lista = x;
    else
    {
        y = lista;
        while(y -> next != NULL)
            y = y -> next;
        int auxval = valor;
        while(auxval<y->valor)
        {
            cout<<"\nIngresar de forma cresciente\n\nNuevo dato aleatorio: ";
            auxval = rand() % 1000000;
            cout<<auxval<<endl;
        }
        x->valor = auxval;
        y -> next = x;
    }
}

void eliminar(nodo *&lista, int val)
{
    nodo *x = new nodo;
    x = lista;
    if(lista != NULL)
    {
        while(x != NULL)
        {
            if(x->valor==val)
            {
                lista = lista->next;
                delete x;
                return;
            }
            x = x->next;
        }
        cout<<"\nValor no encontrado, incapaz de eliminar\n";
    }
    else
        cout<<"\nCONTENIDO INEXISTENTE\n";
    delete x;
}
void imprimir(nodo *lista)
{
    cout<<endl;
     int i = 0;
     while(lista != NULL)
     {
          cout <<"Nodo "<<i+1<<": "<<lista->valor<<endl;
          lista = lista->next;
          i++;
     }
    cout<<endl;
}
int main()
{
    srand(time(NULL));
    nodo *lista = NULL;
    int x;
    for(int i = 0;i<10000;i++)
    {
        cout<<"Dato aleatorio "<<i+1<<": ";
        x = rand();
        cout<<x<<endl;
        ingresar(lista,x);
    }
    imprimir(lista);
    delete lista;
}
