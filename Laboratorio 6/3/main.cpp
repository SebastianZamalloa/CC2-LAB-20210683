#include "edad.h"
#include "edad.cpp"
#include "iostream"

using namespace std;

int main()
{
    string name;
    cout<<"\nIngrese su nombre: ",cin>>name;
    Edad miEdad(name);
    miEdad.imprimir();
}