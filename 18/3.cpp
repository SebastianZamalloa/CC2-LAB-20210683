#include <iostream>
using namespace std;

template<int N,int R>
struct powing
{
    enum{value = N*powing<N,R-1>::value};
};
template<int N>
struct powing<N,0>{enum{value=1};};

int main()
{
    int x = powing<6,2>::value;
    cout<<"\nPOTENCIAS\n\n6 elevado al cuadrado es: "<<x<<endl<<endl;
}
