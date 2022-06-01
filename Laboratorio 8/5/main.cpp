#include "iostream"
#include "cuadrado.cpp"
#include "circulo.cpp"
#include "vector"
using namespace std;

int main()
{
    string nombres[4] = {"Rectangulo base","Cuadrado base","Elipse base","Circulo base"};
    forma *formas[4];
    char * ptrNombre1 = &(nombres[0])[0];
    formas[0] = new rectangulo("Rojo",10,2,ptrNombre1,15,18);
    char * ptrNombre2 = &(nombres[1])[0];
    formas[1] = new cuadrado("Amarillo",13,-42,ptrNombre2,20);
    char * ptrNombre3 = &(nombres[2])[0];
    formas[2] = new elipse("Azul",3,0,ptrNombre3,32,14);
    char * ptrNombre4 = &(nombres[3])[0];
    formas[3] = new circulo("Verde",13,9,ptrNombre4,10);
    for(int i=0;i<4;i++)
    {
        formas[i]->imprimir();
        cout<<"-----------------";
        formas[i]->moverCentro(10,10);
        formas[i]->setColor("Violeta");
    }

    cout<<"\n\n-------------\nMoviendo todos los centros y cambiando el color...\n-------------\n";

    for(int i=0;i<4;i++)
    {
        formas[i]->imprimir();
        cout<<"-----------------";
        delete formas[i];
    }
}