#include<iostream>
using namespace std;
int enterLimit()
{
    int x;
    cout<<"Ingresa un numero comprendido entre 0 y 100: ",cin>>x;
    while(x<0 || x>100)
        cout<<"Ingresa un numero valido\nIngresa un numero comprendido entre 0 y 100: ",cin>>x;
    return x;
}
bool isPar(int x)
{
    if(x%2==0)
        if(x==0)
            return false;
        return true;
    return false;
}
int impSum(int x)
{
    int sum = 0;
    for(int i = 0;i<=x;i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int x = enterLimit();
    int option;
    cout<<"\nIngrese una opcion\n1. Verificar si es par\n2. Sumar del 0 hasta ese numero\n3. Nada\n\nIngrese su opcion: ",cin>>option;
    switch(option)
    {
        case 1:
            if(isPar(x))
                cout<<x<<" es par"<<endl;
            else
                cout<<x<<" no es par"<<endl;
            break;
        case 2:
            cout<<"La suma del 0 hasta "<<x<<" es: "<<impSum(x)<<endl;
            break;
        case 3:
            cout<<"Programa finalizado"<<endl;
            break;
        default:
            cout<<"Opcion invalida"<<endl;
    }
}