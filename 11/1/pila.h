#include "iostream"
#include "nodo.h"
using namespace std;

class pila
{
    private:
        nodo*miPila;
    public:
        pila(){miPila = NULL;}
        ~pila(){}
        void push(int xvalue)
        {
            nodo*x = new nodo(xvalue);
            x->setNext(NULL);
            if(miPila == NULL)
                miPila = x;
            else
            {
                x->setNext(miPila);
                miPila = x; 
            }
        }
        void imprimir()
        {
            cout<<endl;
            nodo*pilaAux = miPila;
            while(pilaAux != NULL)
            {
                cout<<pilaAux->getValue();
                pilaAux = pilaAux->getNext();
                if(pilaAux != NULL)
                    cout<<" -> ";
            }
            cout<<endl<<endl;
        }
};