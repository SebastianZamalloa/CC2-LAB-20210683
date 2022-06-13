#include "iostream"
#include "calculate.h"
using namespace std;

int main()
{
    const int size = 5;
    cout<<"\nArray de enteros: ";
    int ArrayEntero[size] = {10,7,2,8,6};
    calculateArray<int,size> claseEntero(ArrayEntero);

    claseEntero.print();
    cout<<"\nMaximo: \tMinimo:\n"<<claseEntero.max()<<"\t\t"<<claseEntero.min()<<endl;
    
    cout<<"\nArray de flotantes: ";
    float ArrayFloat [size] = {12.1,8.7,5.6,8.4,1.2};
    calculateArray<float,size> claseFlotante(ArrayFloat);

    claseFlotante.print();
    cout<<"\nMaximo: \tMinimo:\n"<<claseFlotante.max()<<"\t\t"<<claseFlotante.min()<<endl;
    cout<<endl<<endl;
}