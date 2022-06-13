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
        void eliminar_pos(int xpos)
        {
            int k=0;
            nodo* x(this);
            while(x != NULL)
            {
                k++;
                x = x->next;
            }
            if(xpos == 1)
                this->eliminar_inicio();
            else if(xpos == k)
                this->eliminar_final();
            else if(xpos > k || xpos <= 0)
                cout<<"\nNodo imposible de eliminar\n";
            else
            {
                nodo *ref(this);
                for(int i = 0;i<xpos-2;i++)
                    ref = ref -> next;
                nodo *z = new nodo(ref->next->next->value);
                z->next = ref->next->next->next;
                
                delete ref->next;

                ref->next = z;
            }
        }
        void eliminar_inicio()
        {
            nodo* x = new nodo(this->value);
            x->next = this->next;
            
            this->value = x->next->value;
            this->next = x->next->next; 
            
            delete x;
        }
        void eliminar_final()
        {
            nodo* x(this);
            while(x->next->next != NULL)
                x = x->next;
            delete x->next;
            x->next = NULL;
        }
        int contar_nodos()
        {
            int k=0;
            nodo* x(this);
            while(x != NULL)
            {
                k++;
                x = x->next;
            }
            return k;
        }
        void orden_ascendente()
        {
            int *arrayPtr = new int[contar_nodos()];
            int k=0;
            nodo* x(this);
            while(x != NULL)
            {
                *(arrayPtr+k) = x->value;
                x = x->next;
                k++;
            }
            for(int k=1; k<contar_nodos(); k++)
            {
                int temp = *(arrayPtr+k);
                int j= k-1;
                while(j>=0 && temp <= *(arrayPtr+j))
                {
                    *(arrayPtr+j+1) = *(arrayPtr+j);
                    j--;
                }
                *(arrayPtr+j+1) = temp;
            }
            k=0;
            nodo* y(this);
            while(y != NULL)
            {
                y->value = *(arrayPtr+k);
                y = y->next;
                k++;
            }
            delete arrayPtr;
        }
        void orden_descendente()
        {

            int *arrayPtr = new int[contar_nodos()];
            int k=0;
            nodo* x(this);
            while(x != NULL)
            {
                *(arrayPtr+k) = x->value;
                x = x->next;
                k++;
            }
            for(int k=1; k<contar_nodos(); k++)
            {
                int temp = *(arrayPtr+k);
                int j= k-1;
                while(j>=0 && temp >= *(arrayPtr+j))
                {
                    *(arrayPtr+j+1) = *(arrayPtr+j);
                    j--;
                }
                *(arrayPtr+j+1) = temp;
            }
            k=0;
            nodo* y(this);
            while(y != NULL)
            {
                y->value = *(arrayPtr+k);
                y = y->next;
                k++;
            }
            delete arrayPtr;
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