#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Ingrese un numero x: ",cin>>x,cout<<"Ingrese un numero y (Mayor que x): ",cin>>y;
    while(y<x)
        cout<<"Numero incorrecto, no es mayor que x\nIngrese un numero y (Mayor que x): ",cin>>y;
    cout<<"Los numeros primos entre "<<x<<" y "<<y<<" son:";
    int counter = 0;
    for(int i = x+1;i<y;i++)
    {
        if(i==2)
        {
            cout<<" "<<i;
            counter++;
        }
        else
        {
            for(int j = 2; j<i;j++)
            {
                if(i%j == 0)
                    break;
                else if(j == i-1)
                {
                    cout<<" "<<i;
                    counter++;
                }
            }
        }
    }
    if(counter == 0)
    {
        cout<<" No existen numeros primos entre "<<x<<" y "<<y;
        cout<<"\nEl primo mas cercano a ";
        int m = 1;
        for(int i = 1; i<=m; i++)
        {
            for(int j = 2; j<(x-i);j++)
            {
                if((x-i)%j == 0)
                    break;
                else if(j == (x-i)-1)
                {
                    cout<<"x es: "<<(x-i);
                    break;
                }
            }  
            for(int j = 2; j<(y+i);j++)
            {
                if((y+i)%j == 0)
                    break;
                else if(j == (y+i)-1)
                {
                    cout<<"y es: "<<(y+i);
                    break;
                }
            }
            m++;  
        }
    }
    return 0;
}