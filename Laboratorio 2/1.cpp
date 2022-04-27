#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for(int i = 1; i<=50 ;i++)
        sum += i*2;
    cout<<"La suma de los pares del 2 al 100 es: "<<sum;
    return 0;
}