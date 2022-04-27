#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int min{numeric_limits<int>::max()};
    int max{numeric_limits<int>::min()};
    int n;
    cout<<"Ingresa el numero de elementos que ingresara: ",cin>>n;
    int listNum[n];
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        cout<<"Ingrese el numero "<<i+1<<" del arreglo: ",cin>>listNum[i];
        sum += listNum[i];
        if(listNum[i] < min)
            min = listNum[i];
        if(listNum[i] > max)
            max = listNum[i];
    }
    sum/=n;
    cout<<"Numero mayor: "<<max<<"\nNumero menor: "<<min<<"\nMedia: "<<sum;

}