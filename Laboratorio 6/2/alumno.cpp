#include "alumno.h"
#include "iostream"

alumno::alumno(int auxCUI,string auxnombres[4],float auxnotas[3]):CUI(auxCUI)
{
    for(int i = 0;i<4;i++){nombres[i]=auxnombres[i];}
    for(int i = 0;i<3;i++){notas[i]=auxnotas[i];}
}
alumno::~alumno(){}
float alumno::promedio()
{
    float prom;
    for(int i = 0;i<3;i++){prom += notas[i];}
    prom /= 3.0;
    return prom;
}
bool alumno::esAprobado()
{
    if(promedio()>=10.5)
        return true;
    else    
        return false;
}
void alumno::imprimir()
{
    float promediox = promedio();
    cout<<"\nCUI: "<<CUI<<"\nPrimer nombre: "<<nombres[0]<<"\nPromedio: ",printf("%.2f",promediox),cout<<endl;
    if(esAprobado())
        cout<<"\nEsta aprobado\n\n";
    else
        cout<<"\nNo esta aprobado\n\n";
}