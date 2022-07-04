#include "iostream"
#include "pila.h"
using namespace std;

int main()
{
    cout<<"\nPILAS: \n";
    pila pila1;
    int n;
    cout<<"\nCuantos datos necesita para su pila?: ",cin>>n,cout<<endl;
    for(int i = 0; i<n; i++)
    {
        int tempx;
        cout<<"Ingrese el siguiente dato para su pila: ",cin>>tempx;
        pila1.push(tempx);
    }
    cout<<"\nEsta es su pila:\n";
    pila1.imprimir();
}
