#include<iostream>
using namespace std;

int main()
{
    int i = 3;
    int n = 1;
    int list[50];
    list[0] = 2; // Numero inicial
    bool confirm = false;
    while(n<51)
    {
        for(int j = 2; j<i;j++)
        {
            if(i%j == 0)
                break;
            else if(j == i-1)
            {
                list[n] = i;
                n++;
            }
        }
        i++;
    }
    cout<<"Los 50 primeros numeros primos son:";
    for(int j = 0;j<50;j++)
        cout<<" "<<list[j];
    return 0;
}