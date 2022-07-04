#include "iostream"
#include "nodo.h"
using namespace std;

class cola
{
    protected:
        nodo*primero;
        nodo*ultimo;
    public:
        cola(){primero = NULL;ultimo = NULL;}
        ~cola(){}
        int getPrimeroValue(){return primero->getValue();}
        int getUltimoValue(){return ultimo->getValue();}
        nodo*getPrimero(){return primero;}
        void anadir(int xvalue)
        {
            nodo*x = new nodo(xvalue);
            x->setNext(NULL);
            if(primero == NULL && ultimo == NULL)
            {
                primero = x;
                ultimo = x;
            }
            else
            {
                ultimo->setNext(x);
                ultimo = x;
            }
        }
        void eliminar()
        {
            nodo*auxiliar = primero;
            if(primero->getNext()==NULL)
            {
                primero = NULL;
                delete auxiliar;
                ultimo = NULL;
            }
            else
            {
                primero = primero->getNext();
                delete auxiliar;
            }
        }
        bool buscar(int xvalue)
        {
            nodo*x(primero);
            while(x != NULL)
            {
                if(x->getValue()==xvalue)
                    return true;
                x = x->getNext();
            }
            return false;
        }
        void imprimir()
        {
            cout<<endl;
            nodo*colaAux = primero;
            while(colaAux != NULL)
            {
                cout<<colaAux->getValue();
                colaAux = colaAux->getNext();
                if(colaAux != NULL)
                    cout<<" -> ";
            }
            cout<<endl;
        }
};