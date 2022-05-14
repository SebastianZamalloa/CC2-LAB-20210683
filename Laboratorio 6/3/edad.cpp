#include "edad.h"
#include "iostream"
#include<ctime>

Edad::Edad(string nombreaux):nombre(nombreaux)
{
    time_t now = time(0);
    tm * time = localtime(&now);
    actual[0] = time->tm_year+1900;
    actual[1] = time->tm_mon+1;
    actual[2] = time->tm_mday;
    cout<<"\nFECHA DE NACIMIENTO:\n";
    cout<<"\nIngrese el ano: ",cin>>nacimiento[0];
    cout<<"Ingrese el mes: ",cin>>nacimiento[1];
    while(nacimiento[1]<=0 || nacimiento[1]>12)
        cout<<"Ingrese un mes valido\nIngrese el mes: ",cin>>nacimiento[1];
    cout<<"Ingrese el dia: ",cin>>nacimiento[2];
    switch(nacimiento[1])
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            while(nacimiento[2]>31 || nacimiento[2]<=0)
                cout<<"Ingrese un dia valido\nIngrese el dia: ",cin>>nacimiento[2];
            break;
        case 2:
            if(bisiesto(nacimiento[0]))
                while(nacimiento[2]>29 || nacimiento[2]<=0)
                    cout<<"Ingrese un dia valido\nIngrese el dia: ",cin>>nacimiento[2];
            else
                while(nacimiento[2]>28 || nacimiento[2]<=0)
                    cout<<"Ingrese un dia valido\nIngrese el dia: ",cin>>nacimiento[2];
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            while(nacimiento[2]>30 || nacimiento[2]<=0)
                cout<<"Ingrese un dia valido\nIngrese el dia: ",cin>>nacimiento[2];
            break;
    }
    hallarEdad();
}
Edad::~Edad(){}
bool Edad::bisiesto(int year)
{
    if(year%400==0)
        return true;
    else if(year%4==0)
    {
        if(year%100==0)
                return false;
        return true;
    }
    return false;
}
void Edad::hallarEdad()
{
    edad[0] = actual[0]-nacimiento[0];
    if(actual[1]==nacimiento[1])
    {
        if(actual[2]<nacimiento[2])
            edad[0]--;
        else if(actual[2]>=nacimiento[2])
            edad[1] = 0;
        else
            edad[1] = 11;
    }
    else if(actual[1]> nacimiento[1])
       edad[1] = actual[1]-nacimiento[1];
    else
    {
        edad[1] = 12-nacimiento[1]+actual[1];
        edad[0]--;
    }
    if(actual[2]>=nacimiento[2])
        edad[2] = actual[2]-nacimiento[2];
    else
    {
        int tempActual = actual[1]-1;
        if(tempActual == 0)
            tempActual = 12;
        switch(tempActual) 
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                edad[2] = actual[2]+31-nacimiento[2];
                break;
            case 2:
                if(bisiesto(actual[0]))
                    edad[2] = actual[2]+29-nacimiento[2];
                else
                    edad[2] = actual[2]+28-nacimiento[2];
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                edad[2] = actual[2]+30-nacimiento[2];
                break;
        }
        edad[1]--; 
    }
}
void Edad::imprimir()
{
    cout<<"\nEdad de "<<nombre<<":\n\nEdad en anos: "<<edad[0]<<endl;
    cout<<"Edad en meses: "<<edad[1]<<endl;
    cout<<"Edad en dias: "<<edad[2]<<endl<<endl;
}