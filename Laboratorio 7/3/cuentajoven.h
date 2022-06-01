#pragma once
#include "iostream"
#include "cuenta.cpp"
using namespace std;

class CuentaJoven : private Cuenta
{
    public:
        CuentaJoven(string,double,int);
        ~CuentaJoven();
        void imprimir();
};
