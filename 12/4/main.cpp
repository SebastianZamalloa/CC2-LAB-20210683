#include "iostream"
#include "cola.h"
using namespace std;
void imprimirVertical(cola *a, cola *b, int na, int nb)
{
    cout<<endl;
    int aux;
    cout<<"Cola 1:\t\tCola 2:"<<endl;
    while(na != 0 || nb != 0)
    {
        if(na != 0)
        {
            aux = a->getPrimeroValue();
            cout<<aux;
            a->eliminar();
            a->anadir(aux);
            na--;
        }
        cout<<"\t\t";
        if(nb != 0)
        {
            aux = b->getPrimeroValue();
            cout<<aux;
            b->eliminar();
            b->anadir(aux);
            nb--;
        }
        cout<<endl;
    }
    cout<<endl;
}
int comparate(int it, cola x, cola y, int nx, int ny)
{
    int mayor;
    for(int i = 0; i<it; i++)
    {
        int xprim = x.getPrimeroValue();
        int yprim = y.getPrimeroValue();
        if(xprim>=yprim)
        {           
            imprimirVertical(&x,&y,nx,ny);
            mayor = xprim;
            x.eliminar();
            x.anadir(mayor);
        }
        else if(yprim>xprim)
        {
            imprimirVertical(&x,&y,nx,ny);
            mayor = yprim;
            y.eliminar();
            y.anadir(mayor);      
        }
    }
    return mayor;
}
int main()
{
    cout<<"\nCOLAS: \n";
    cola cola1, cola2;
    int n,n2;
    cout<<"\nCuantas edades de hombres tiene?: ",cin>>n,cout<<endl;
    for(int i = 0; i<n; i++)
    {
        int tempx;
        cout<<"Ingrese la siguiente edad para los hombres: ",cin>>tempx;
        cola1.anadir(tempx);
    }
    cout<<"\nEsta es su cola de hombres: \n";
    cola1.imprimir();
    cout<<"\nCuantas edades de mujer tiene?: ",cin>>n2,cout<<endl;
    for(int i = 0; i<n2; i++)
    {
        int tempx;
        cout<<"Ingrese la siguiente edad para las mujeres: ",cin>>tempx;
        cola2.anadir(tempx);
    }
    cout<<"\nEsta es su cola de mujeres:\n";
    cola2.imprimir();
    int mayor;
    cout<<"\nIniciando programa de comparacion por iteración...\n\nEjecutando con 10 iteraciones...\n";
    mayor = comparate(10,cola1,cola2, n, n2);
    cout<<"Mayor con 10 iteraciones: "<<mayor<<endl;
    cout<<"\nPrograma finalizado\n\n";
}