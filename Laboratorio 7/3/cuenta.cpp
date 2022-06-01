#include "iostream"
#include "cuenta.h"
using namespace std;

Cuenta::Cuenta(string clienteaux,double saldoaux,int numaux):ProductoBancario(clienteaux,saldoaux,numaux){}
Cuenta::~Cuenta(){}
void Cuenta::imprimir(){cout<<"\nCliente: "<<cliente<<"\nSaldo: "<<saldo<<"\nNumero de productos: "<<numProductos<<endl;}
