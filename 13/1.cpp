#include <iostream>
#include <ctime>
using namespace std;

struct alumno
{
    string nombre1, nombre2;
    int dia, mes;    
};
alumno crearAlumno()
{
    string temp1,temp2;
    int temp3,temp4;
    cout<<"\nIngrese su primer nombre: ",cin>>temp1;
    cout<<"Ingrese su segundo nombre: ",cin>>temp2;
    cout<<"Ingrese el dia de su cumpleanos: ",cin>>temp3;
    cout<<"Ingrese el numero del mes de su cumpleanos: ",cin>>temp4;
    alumno temp = {temp1,temp2,temp3,temp4};
    return temp;
}
void month_birthday(alumno x[], int n)
{
    time_t now = time(0);
    tm * time = localtime(&now);
    int month = time->tm_mon+1;
    for(int i = 0; i<n; i++)
    {
        if(x[i].mes == month)
        {
            cout<<"\nEl companero ";
            cout<<x[i].nombre1<<" "<<x[i].nombre2;
            cout<<" cumple anos este mes\n";
        }
    }
}
int main()
{
    cout<<"\nALUMNOS Y CUMPLEANOS: \n";
    int n;
    cout<<"\nIngrese cuantos companeros tiene: ",cin>>n;
    alumno companeros[n];
    for(int i = 0; i<n; i++)
        companeros[i] = crearAlumno();
    month_birthday(companeros,n);
    cout<<endl;
}
