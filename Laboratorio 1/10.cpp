#include<iostream>
using namespace std;

int main()
{
    string password = "contraLlamativa";
    string passwordEnter;
    cout<<"Ingrese la contraseña: ",cin>>passwordEnter;
    if(passwordEnter == password)
        cout<<"Acceso admitido";
    else
        cout<<"Contraseña Incorrecta";
}