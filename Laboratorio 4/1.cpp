#include <iostream>
using namespace std;

int main()
{
    string nombre[3];
    string apellido[3];
    int edad[3];
    int DNI[3];
    cout<<"Por favor ingrese la siguiente información de estas personas:\n";
    for(int i = 0; i < 3; i++)
    {   
        cout<<"\nPersona "<<i+ 1 <<": "<<endl;
        cout<<"Nombre: ";
        getline(cin,nombre[i]);
        cout<<"Apellido: ",getline(cin,apellido[i]),cout<<"Edad: ",cin>>edad[i],cout<<"DNI: ",cin>>DNI[i],cout<<endl;
        cin.ignore();
    }
    cout<<"\n*************************\nDatos de las 3 personas: \n";
    for(int i = 0; i < 3; i++)
    {
        cout<<"\nPersona "<<i+ 1 <<": "<<endl;
        cout << "Nombre: "<<nombre[i]<<"\nApellido: "<<apellido[i]<<"\nEdad: "<<edad[i]<<"\nDNI: "<<DNI[i]<<endl;
    }
}