#include "alumno.h"
#include "alumno.cpp"
#include "iostream"

using namespace std;

int main()
{
    int CUI;
    cout<<"\nIngresa tu CUI: ",cin>>CUI;
    cout<<endl;
    string names[4];
    string namePlaces[4] = {"primer nombre: ","segundo nombre: ","primer apellido: ","segundo apellido: "};
    for(int i=0;i<4;i++){cout<<"Ingrese su "<<namePlaces[i],cin>>names[i];}
    cout<<endl;
    float notas[3];
    for(int i=0;i<3;i++){cout<<"Ingrese la nota "<<i+1<<": ",cin>>notas[i];
    while(notas[i]<0 || notas[i]>20)
        cout<<"\nINVALIDO\n\nIngrese la nota "<<i+1<<": ",cin>>notas[i];
    }
    alumno yo(CUI,names,notas);
    yo.imprimir();
}