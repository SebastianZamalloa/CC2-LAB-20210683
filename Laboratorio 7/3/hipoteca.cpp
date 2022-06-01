#include "iostream"
#include "hipoteca.h"
using namespace std;

Hipoteca::Hipoteca(string clienteaux,double saldoaux,int numaux):Prestamo(clienteaux,saldoaux,numaux){}
Hipoteca::~Hipoteca(){}  
void Hipoteca::imprimir(){cout<<"\nCliente: "<<cliente<<"\nSaldo: "<<saldo<<"\nNumero de productos: "<<numProductos<<endl;}
