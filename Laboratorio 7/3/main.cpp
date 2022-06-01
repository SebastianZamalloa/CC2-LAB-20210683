#include "cuentajoven.cpp"
#include "hipoteca.cpp"
#include "iostream"

using namespace std;

int main()
{
    Hipoteca miHipoteca1("Sebastian",3000.50,5);
    CuentaJoven miCuentaJoven("Agenor",2850.75,3);
    miHipoteca1.imprimir();
    cout<<endl;
    miCuentaJoven.imprimir();
    cout<<endl;
}   