#include "iostream"
#include "cola.h"
using namespace std;

int main()
{
    cout<<"\nCOLA: \n";
    cola cola1;
    int n;
    cout<<"\nCuantos datos necesita para su cola?: ",cin>>n,cout<<endl;
    for(int i = 0; i<n; i++)
    {
        int tempx;
        cout<<"Ingrese el siguiente dato para su cola: ",cin>>tempx;
        cola1.anadir(tempx);
    }
    cout<<"\nEsta es su cola:\n";
    cola1.imprimir();
    int o;
    cout<<"\nMENÚ DE COLAS:\n";
    do
    {
        cout<<"\n1. Agregar elemento \n2. Eliminar un elemento \n3. Buscar un elemento";
        cout<<"\n\nElegir opcion (Ingrese cualquier otro caracter para terminar el programa): ",cin>>o;
        switch(o)
        {
            case 1:
            {
                int tempx;
                cout<<"Ingrese el siguiente dato para su pila: ",cin>>tempx;
                cola1.anadir(tempx);
            }break;
            case 2:
            {
                cola1.eliminar();
            }break;
            case 3:
            {
                int tempx;
                cout<<"Ingrese el dato que buscara en su cola: ",cin>>tempx;
                if(cola1.buscar(tempx))
                    cout<<"\nEl elemento "<<tempx<<" esta en la cola\n";
                else
                    cout<<"\nEl elemento "<<tempx<<" no esta en la cola\n";
            }break;
            default:
                break;
        }
        if(o==1 || o==2)
        {
            cout<<"\nEsta es su cola:\n";
            cola1.imprimir();
        }
    }while(o==1 || o==2);
    cout<<"\nPrograma finalizado\n\n";
}