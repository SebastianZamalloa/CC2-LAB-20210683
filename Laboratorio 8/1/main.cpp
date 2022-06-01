#include "iostream"
#include "rectangulo.cpp"
using namespace std;

int main()
{
    string nombre("Forma base");
    char *ptrNombre;
    ptrNombre = &nombre[0];
    forma miForma("Blanco",5,3,ptrNombre);

    miForma.imprimir();

    cout<<"-------------\nMoviendo 20 en \'x\' y -15 en \'y\'\n-------------\n";
    miForma.moverCentro(20,-15);
    miForma.imprimir();

    string nombre2("Rectangulo base");
    char *ptrNombre2;
    ptrNombre2 = &nombre2[0];
    rectangulo miRectangulo("Rojo",10,2,ptrNombre2,15,18);
    
    miRectangulo.imprimir();

    cout<<"-------------\nEscalando en 0.5 mi rectangulo...\nHallando el area y el perimetro...\n-------------\n";
    miRectangulo.escala(0.5);
    miRectangulo.imprimir();
    cout<<"Area: "<<miRectangulo.area()<<"\nPerimetro: "<<miRectangulo.perimetro()<<endl<<endl;
}