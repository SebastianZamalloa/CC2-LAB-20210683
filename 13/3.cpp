#include <iostream>
using namespace std;

struct jugador
{
    string nombre;
    int edad;
    float talla;
};
jugador crearJugador()
{
    string temp1;
    int temp2;
    float temp3;
    cout<<"\nIngrese su nombre: ",cin>>temp1;
    cout<<"Ingrese la edad: ",cin>>temp2;
    cout<<"Ingrese la talla: ",cin>>temp3;
    jugador temp = {temp1,temp2,temp3};
    return temp;
}
bool competir(jugador x)
{
    if(x.edad<20)
        if(x.talla>1.7)
            return true;
    return false;
}
int main()
{
    cout<<"\nPROGRAMA DE JUGADORES: \n";
    jugador jugadores[10];
    for(int i=0;i<10;i++)
        jugadores[i] = crearJugador();
    for(int i=0;i<10;i++)
    {
        if(competir(jugadores[i]))
            cout<<"\nEl jugador "<<jugadores[i].nombre<<" cumple con los requisitos"<<endl;
    }
    cout<<endl;
}