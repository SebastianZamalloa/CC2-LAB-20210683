#include<iostream>
using namespace std;

int main()
{
    string name,lastname,lastname2, correo;
    string placeHolderUnsa = "@unsa.edu.pe";
    cout<<"Ingrese su primer nombre: ",cin>>name,cout<<"Ingrese su primer apellido: ",cin>>lastname,cout<<"Ingrese su segundo apellido: ",cin>>lastname2;
    correo += name[0] + lastname + lastname2[0] + placeHolderUnsa;
    cout<<"Su correo de unsa es este: "<<correo;
    return 0;
}