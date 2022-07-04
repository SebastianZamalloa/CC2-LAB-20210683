#include <iostream>
using namespace std;

struct notas
{
    string nombre;
    char grupo;
    float nota1,nota2,nota3,proyecto;
};

float promedio(notas x)
{
    float promediox = 0;
    promediox += x.nota1*0.15;
    promediox += x.nota2*0.2;
    promediox += x.nota3*0.25;
    promediox += x.proyecto*0.40;
    return promediox;
}
notas crearAlumno()
{
    string temp1;
    char temp2;
    float temp3,temp4,temp5,temp6;
    cout<<"\nIngrese su nombre: ",cin>>temp1;
    cout<<"Ingrese la letra de su grupo: ",cin>>temp2;
    cout<<"Ingrese la nota 1: ",cin>>temp3;
    cout<<"Ingrese la nota 2: ",cin>>temp4;
    cout<<"Ingrese la nota 3: ",cin>>temp5;
    cout<<"Ingrese la nota del proyecto final: ",cin>>temp6;
    notas temp = {temp1,temp2,temp3,temp4,temp5,temp6};
    return temp;
}
int main()
{
    cout<<"\nALUMNOS Y NOTAS: \n";
    int n;
    cout<<"\nIngrese cuantos companeros tiene: ",cin>>n;
    notas companeros[n];
    for(int i = 0; i<n; i++)
        companeros[i] = crearAlumno();
    cout<<"\nNOMBRES:\tGRUPOS:\t\tPROMEDIO:"<<endl<<endl;
    for(int i = 0; i<n; i++)
        cout<<companeros[i].nombre<<"\t\t"<<companeros[i].grupo<<"\t\t"<<promedio(companeros[i])<<endl;
    cout<<endl;
}
