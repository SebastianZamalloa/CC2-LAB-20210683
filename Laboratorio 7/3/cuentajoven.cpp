#include "iostream"
#include "cuentajoven.h"
using namespace std;

CuentaJoven::CuentaJoven(string clienteaux,double saldoaux,int numaux):Cuenta(clienteaux,saldoaux,numaux){}
CuentaJoven::~CuentaJoven(){}  
void CuentaJoven::imprimir(){cout<<"\nCliente: "<<cliente<<"\nSaldo: "<<saldo<<"\nNumero de productos: "<<numProductos<<endl;}
