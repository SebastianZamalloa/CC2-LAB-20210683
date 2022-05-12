#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Ingrese el primer valor: ",cin>>a,cout<<"Ingrese el segundo valor: ",cin>>b;
    cout<<"\nValores originales: \na = "<<a<<"\nb = "<<b<<endl;
    int *auxa = &a;
    int refuerzo = *auxa;
    *auxa = b;
    b = refuerzo; 
    cout<<"\nValores intercambiados: \na = "<<a<<"\nb = "<<b<<endl;
    delete auxa;
}