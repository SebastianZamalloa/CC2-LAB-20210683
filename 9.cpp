#include<iostream>
using namespace std;

int main()
{
    int negList[10];
    int sum = 0;
    for(int i = 0; i<10;i++)
    {
        cout<<"Ingrese el siguiente numero: ",cin>>negList[i];
        if(negList[i]<0)
            sum += negList[i];
    }
    cout<<"La suma de solo los numeros negativos es: "<<sum;
}