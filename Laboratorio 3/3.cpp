#include <iostream>
using namespace std;
bool bisiesto(int year) //Pongo esto para verificar si a febrero se le puede ingresar 29 dias
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
void llenarFecha(int fecha[3])
{
    // 0 = año, 1 = mes, 2 = dia
    cout<<"Ingrese el ano: ",cin>>fecha[0];
    cout<<"Ingrese el mes: ",cin>>fecha[1];
    while(fecha[1]<=0 || fecha[1]>12)
        cout<<"Ingrese un mes valido\nIngrese el mes: ",cin>>fecha[1];
    cout<<"Ingrese el dia: ",cin>>fecha[2];
    switch(fecha[1]) //No me gusta que mi codigo se rompa
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            while(fecha[2]>31 || fecha[2]<=0)
                cout<<"Ingrese un dia valido\nIngrese el dia: ",cin>>fecha[2];
            break;
        case 2:
            if(bisiesto(fecha[0]))
                while(fecha[2]>29 || fecha[2]<=0)
                    cout<<"Ingrese un dia valido\nIngrese el dia: ",cin>>fecha[2];
            else
                while(fecha[2]>28 || fecha[2]<=0)
                    cout<<"Ingrese un dia valido\nIngrese el dia: ",cin>>fecha[2];
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            while(fecha[2]>30 || fecha[2]<=0)
                cout<<"Ingrese un dia valido\nIngrese el dia: ",cin>>fecha[2];
            break;
    }
}
void hallarEdad(int actual[3],int nacer[3],int edad[3])
{
    edad[0] = actual[0]-nacer[0];
    if(actual[1]==nacer[1])
    {
        if(actual[2]<nacer[2])
            edad[0]--;
        if(actual[2]>=nacer[2])
            edad[1] = 0;
        else
            edad[1] = 11;
    }
    else if(actual[1]> nacer[1])
       edad[1] = actual[1]-nacer[1];
    else
    {
        edad[1] = 12-nacer[1]+actual[1];
        edad[0]--;
    }
    if(actual[2]>=nacer[2])
        edad[2] = actual[2]-nacer[2];
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
                edad[2] = actual[2]+31-nacer[2];
                break;
            case 2:
                if(bisiesto(actual[0]))
                    edad[2] = actual[2]+29-nacer[2];
                else
                    edad[2] = actual[2]+28-nacer[2];
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                edad[2] = actual[2]+30-nacer[2];
                break;
        }
        edad[1]--; 
    }
    
}
int main()
{
    cout<<"\nFecha actual: \n";
    int date[3];
    llenarFecha(date);
    cout<<"\nFecha de tu nacimiento: \n";
    int birth[3];
    llenarFecha(birth);
    int age[3];
    hallarEdad(date,birth,age);
    cout<<"\nEdad en anos: "<<age[0]<<endl;
    cout<<"Edad en meses: "<<age[1]<<endl;
    cout<<"Edad en dias: "<<age[2]<<endl;
}