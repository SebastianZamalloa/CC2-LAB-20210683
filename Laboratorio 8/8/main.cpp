#include "iostream"
#include "cuadrado.cpp"
#include "circulo.cpp"
#include "vector"
using namespace std;
int maxima(forma*formas[4])
{
    float maxima = 0;
    int iaux;
    for(int i=0;i<4;i++)
    {
        if(formas[i]->area()>maxima)
        {
            maxima = formas[i]->area();
            iaux = i;
        }
    }
    return iaux;
}
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
    cout<<"\nEl area maxima de las 4 figuras seleccionadas es: \n";
    formas[maxima(formas)]->imprimir();
    cout<<"Con un area de: "<<formas[maxima(formas)]->area()<<endl<<endl;
    for(int i=0;i<4;i++)
    {
        delete formas[i];
    }
}