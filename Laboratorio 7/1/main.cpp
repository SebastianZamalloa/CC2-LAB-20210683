#include "alumno.cpp"
#include "iostream"

using namespace std;

int main()
{
    alumno yo;
    string miNombre;
    int miEdad;
    cout<<"\nIngrese su nombre: ",cin>>miNombre;
    cout<<"\nIngrese su edad: ",cin>>miEdad;
    yo.setEdad(miEdad);
    yo.setNombre(miNombre);
    yo.imprimir();
} 