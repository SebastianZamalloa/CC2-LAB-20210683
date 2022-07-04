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
        void insertar_pos(int xval, int xpos)
        {
            int k=0;
            nodo* x(this);
            while(x != NULL)
            {
                k++;
                x = x->next;
            }
            if(xpos == 1)
                this->insertar_inicio(xval);
            else if(xpos == k+1)
                this->insertar_final(xval);
            else if(xpos > k+1 || xpos <= 0)
                cout<<"\nNodo imposible de agregar\n";
            else
            {
                nodo *ref(this);
                for(int i = 0;i<xpos-2;i++)
                    ref = ref -> next;
                nodo* x = new nodo(xval);
                nodo *z = new nodo(ref->next->value);
                z->next = ref->next->next;

                delete ref->next;

                x->next = z;
                ref->next = x;
            }
        }
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