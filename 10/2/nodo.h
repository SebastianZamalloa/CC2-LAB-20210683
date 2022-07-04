#include "iostream"
using namespace std;

class nodo
{
    private:
        int value;
        nodo* next;
    public:
        nodo():value(NULL),next(NULL){}
        nodo(int xval):value(xval),next(NULL){}
        ~nodo(){}
        void insertar_inicio(int xval)
        {
            if(value==NULL)
                value = xval;
            else
            {
                nodo* x = new nodo(xval);
                nodo *y = new nodo(this->value);
                y->next = this->next;

                x->next = y;
                this->value = x->value;
                this->next = x->next;

                delete x;
            }   
        }
        void insertar_final(int xval)
        {
            if(value==NULL)
                value = xval;
            else
            {
                nodo* x = new nodo(xval);
                nodo *y(this);
                while(y -> next != NULL)
                    y = y -> next;
                y->next = x;
            }   
        }
        void imprimir()
        {
            cout<<endl;
            nodo* x(this);
            while(x != NULL)
            {
                cout<<x->value;
                x = x->next;
                if(x != NULL)
                    cout<<" -> ";
            }
            cout<<endl<<endl;
        }
};