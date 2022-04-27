#include<iostream>
using namespace std;

int main()
{
    cout<<"Los numeros multiplos de 5 entre el 1 y el 100 son:";
    for(int i = 1;i<=100;i++)
    {
        if(i%5==0)
            cout<<" "<<i;
    }
    return 0;
}