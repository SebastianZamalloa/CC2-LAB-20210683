#include <iostream>
using namespace std;

template<int N>
struct digitPlus
{
    enum{value=(N%10)+ digitPlus<N/10>::value};
};
template<>
struct digitPlus<0>
{
    enum{value=0};
};
int main()
{
    int n;
    cout<<"\nSUMA DE DIGITOS\n\nEl numero es 1543\n";
    int x = digitPlus<1543>::value;
    cout<<"La suma de los digitos de 1543 es: "<<x<<endl<<endl;
}