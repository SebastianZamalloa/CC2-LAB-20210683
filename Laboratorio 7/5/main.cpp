#include "iostream"
#include "operacionfactorial.cpp"
using namespace std;

int main()
{
    operacionFactorial miFactorial;
    miFactorial.setOperador(5);
    cout<<"\nEl numero ingresado es: "<<miFactorial.getOperador()<<endl;
    cout<<"\nSu factorial es: "<<miFactorial.devolverFactorial()<<endl<<endl;
}