#include <iostream>
using namespace std;
bool bisiesto(int year)
{
    if(year%400==0)
        return true;
    else if(year%4==0)
    {
        if(year%100==0)
                return false;
        return true;
    }
    return false;
}
int main()
{
    int year;
    cout<<"Ingrese el año: ",cin>>year;
    if(bisiesto(year))
        cout<<year<<" es bisiesto";
    else
        cout<<year<<" no es bisiesto";
}