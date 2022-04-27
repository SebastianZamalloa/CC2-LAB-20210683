#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Ingrese el primer entero: ",cin>>x,cout<<"Ingrese el segundo entero: ",cin>>y;
    if(x%y==0)
        cout<<x<<" es divisible entre "<<y;
    else
        cout<<x<<" no es divisible entre "<<y;
}