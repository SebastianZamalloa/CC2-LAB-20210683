#include "iostream"
#include "prestamo.h"
using namespace std;

Prestamo::Prestamo(string clienteaux,double saldoaux,int numaux):ProductoBancario(clienteaux,saldoaux,numaux){}
Prestamo::~Prestamo(){}
void Prestamo::imprimir(){cout<<"\nCliente: "<<cliente<<"\nSaldo: "<<saldo<<"\nNumero de productos: "<<numProductos<<endl;}
