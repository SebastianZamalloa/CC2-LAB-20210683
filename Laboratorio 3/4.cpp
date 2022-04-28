#include<iostream>
using namespace std;
void primosTo(int x)
{
    cout<<"Los numeros primos entre 1 y "<<x<<":";
    if(x >= 2)
        cout<<" "<<2;
    for(int i = 2;i<=x;i++)
    {
        for(int j = 2; j<=i;j++)
        {
            if(i%j == 0)
                break;
            else if(j == i-1)
            {
               cout<<" "<<i; 
            }
        }
    }   
}
int main()
{
    int n;
    cout<<"Ingresa hasta que numero hallaras los primos: ",cin>>n;
    primosTo(n);
}