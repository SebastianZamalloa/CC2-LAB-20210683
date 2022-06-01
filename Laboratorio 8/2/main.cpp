#include "iostream"
#include "rectangulo.cpp"
#include "elipse.cpp"
using namespace std;

int main()
{
    string nombre("Elipse base");
    char *ptrNombre;
    ptrNombre = &nombre[0];
    forma *miElipse = new elipse("Azul",3,0,ptrNombre,32,14);
    
    miElipse->imprimir();

    cout<<"-------------\nHallando el area...\n-------------\n";
    cout<<"Area: "<<miElipse->area()<<endl<<endl;
    delete miElipse;
}