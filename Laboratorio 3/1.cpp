#include <iostream>
using namespace std;
float myPow(float num, int exp)
{
    float numExp = 1.0;
    if(exp>=0)
    {
        for(int i=0;i<exp;i++)
        {
            numExp *= num;
        }
    }
    else
    {
        for(int i=0;i>exp;i--)
        {
            numExp /= num;
        }
    }
    return numExp;
}
int main()
{
    float n;
    int exp;
    cout<<"Ingrese el numero que será elevado: ",cin>>n,cout<<"Ingrese el exponente: ",cin>>exp;
    cout<<"Resultado: "<<myPow(n,exp);
}