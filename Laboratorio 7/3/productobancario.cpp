#pragma once
#include "iostream"
#include "productobancario.h"
using namespace std;

ProductoBancario::ProductoBancario(string clienteaux,double saldoaux,int numaux):cliente(clienteaux),saldo(saldoaux),numProductos(numaux){}
ProductoBancario::~ProductoBancario(){}
void ProductoBancario::imprimir(){cout<<"\nCliente: "<<cliente<<"\nSaldo: "<<saldo<<"\nNumero de productos: "<<numProductos<<endl;}
