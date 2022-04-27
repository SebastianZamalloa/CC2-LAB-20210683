#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Ingrese la cantidad de numeros que ingresara: ",cin>>n;
    int numList[n];
    float sum = 0;
    for(int i = 0;i<n;i++)
    {
        cout<<"Ingrese el numero "<<i+1<<" de su arreglo: ",cin>>numList[i];
        sum +=numList[i];
    }
    sum /= n;
    cout<<"La media de estos "<<n<<" numeros es: "<<sum;
}