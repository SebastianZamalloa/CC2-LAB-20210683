#include "iostream"
#include "gallina.cpp"
#include "ganso.cpp"
#include "pato.cpp"
using namespace std;

int main()
{
    cout<<"\nMI GALLINA:\n";
    gallina miGallina("Blanca",30.5,20.2);
    miGallina.imprimir();
    miGallina.ponerHuevo();
    cout<<"\nMI GANSO:\n";
    ganso miGanso("Gris", 50.3,34.6);
    miGanso.imprimir();
    miGanso.graznar();
    cout<<"\nMI PATO:\n";
    pato miPato("Amarillo", 10.1,5);
    miPato.imprimir();
    miPato.nadar();
    cout<<endl;
}