#include "rectangulo.h"
#include "rectangulo.cpp"
#include "iostream"

using namespace std;

int main()
{
    float b,h;
    cout<<"\nIngrese la base de su rectangulo: ",cin>>b;
    cout<<"\nIngrese la altura de su rectangulo: ",cin>>h;
    rectangulo miRectangulo(b,h);
    cout<<"\nEl area de su rectangulo es: "<<miRectangulo.area()<<endl;
    cout<<"\nEl perimetro de su rectangulo es: "<<miRectangulo.perimetro()<<endl<<endl;
} 