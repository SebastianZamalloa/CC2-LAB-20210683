#include "iostream"
#include "cuadrado.cpp"
#include "elipse.cpp"
using namespace std;

int main()
{
    string nombre("Cuadrado base");
    char *ptrNombre;
    ptrNombre = &nombre[0];
    forma *miCuadrado = new cuadrado("Amarillo",13,-42,ptrNombre,20);
    
    miCuadrado->imprimir();

    cout<<"-------------\nHallando el area y el perimetro...\n-------------\n";
    cout<<"Area: "<<miCuadrado->area()<<"\nPerimetro: "<<miCuadrado->perimetro()<<endl<<endl;
    delete miCuadrado;
}