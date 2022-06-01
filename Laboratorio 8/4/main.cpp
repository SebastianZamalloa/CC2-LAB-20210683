#include "iostream"
#include "cuadrado.cpp"
#include "circulo.cpp"
using namespace std;

int main()
{
    string nombre("Circulo base");
    char *ptrNombre;
    ptrNombre = &nombre[0];
    forma *miCirculo = new circulo("Verde",13,9,ptrNombre,10);
    
    miCirculo->imprimir();

    cout<<"-------------\nHallando el area...\n-------------\n";
    cout<<"Area: "<<miCirculo->area()<<endl<<endl;
    delete miCirculo;
}