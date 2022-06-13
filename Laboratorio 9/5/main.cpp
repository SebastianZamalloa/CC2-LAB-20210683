#include "iostream"
#include "orderate.h"
using namespace std;
   
int main()
{
    int ArrayEntero [5] = {5,7,2,8,6};
    orderateArray<int,5> enteroOrder(ArrayEntero);
    cout<<"\nLista de enteros original: ";enteroOrder.print();
    cout<<"\nLista en forma ascendente: ";
    enteroOrder.ascendant();
    enteroOrder.print();
    cout<<"\nLista en forma descendente: ";
    enteroOrder.descendant();
    enteroOrder.print();

    float ArrayFloat [5] = {10.1, 8.4, 3.6, 4.4, 11.2};
    orderateArray<float,5> flotanteOrder(ArrayFloat);
    cout<<"\n\nLista de float original: ";flotanteOrder.print();
    cout<<"\nLista en forma ascendente: ";
    flotanteOrder.ascendant();
    flotanteOrder.print();
    cout<<"\nLista en forma descendente: ";
    flotanteOrder.descendant();
    flotanteOrder.print();
    cout<<endl<<endl;
}
