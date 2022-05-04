#include <iostream>
using namespace std;
int primosCant(int x)
{
    int cant = 0;
    if(x >= 2)
        cant++;
    for(int i = 2;i<=x;i++)
    {
        for(int j = 2; j<=i;j++)
        {
            if(i%j == 0)
                break;
            else if(j == i-1)
               cant++;
        }
    }   
    return cant;
}
void primosRellen(int primos[], int n)
{
    int k = 0;
    primos[k] = 2;
    k++;
    for(int i = 2;i<=n;i++)
    {
        for(int j = 2; j<=i;j++)
        {
            if(i%j == 0)
                break;
            else if(j == i-1)
            {
               primos[k] = i;
               k++;
            }
        }
    }   
}
int main()
{
    cout<<"\nArray de numeros primos del 1 al 100: \n";
    int n = primosCant(100);
    int primos[n];
    primosRellen(primos,100);
    cout<<"\nNumeros primos del 1 al 100: ";
    for(int i = 24;i>=0;i--)
        cout<<primos[i]<<" "; 
}