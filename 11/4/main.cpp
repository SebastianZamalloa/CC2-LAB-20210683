#include "iostream"
#include "pila.h"
using namespace std;

void hanoi(int tam,pila &pila1,pila &pila3, pila &pila2)
{
    if(tam==1)
    {
        pila3.push(1+(tam-1)*2);
        pila1.pop();
    }
    else
    {
        hanoi(tam-1,pila1,pila2,pila3);
        pila3.push(1+(tam-1)*2);
        pila1.pop();
        hanoi(tam-1,pila2,pila3,pila1);
    }
}
int main()
{
    cout<<"\nPILAS: \n";
    pila pila1,pila2,pila3;
    int n;
    cout<<"\nDe que tamanio sera su torre?: ",cin>>n,cout<<endl;
    for(int i=1+(n-1)*2;i>0;i-=2)
        pila1.push(i);
    cout<<"\nComprobacion de la pila 1:\n";
    pila1.imprimir_hanoi(n);
    cout<<"\nRealizando movimientos de Hanoi...";
    hanoi(n,pila1,pila3,pila2);
    cout<<"\nComprobacion de la pila 3:\n";
    pila3.imprimir_hanoi(n);
    cout<<"Programa finalizado\n\n";
}