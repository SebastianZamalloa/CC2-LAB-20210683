#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Ingrese la cantidad de numeros de la serie Fibonacci (Minimo 2): ",cin>>n;
    while(n<2)
        cout<<"Ingrese una cantidad considerable\nIngrese la cantidad de numeros de la serie Fibonacci  (Minimo 2): ",cin>>n;
    int fibonacci[n];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for(int i = 2;i<n;i++)
        fibonacci[i] = fibonacci[i-1]+fibonacci[i-2];
    cout<<"La serie Fibonacci sera:";
    for(int i = 0;i<n;i++)
        cout<<" "<<fibonacci[i];
}