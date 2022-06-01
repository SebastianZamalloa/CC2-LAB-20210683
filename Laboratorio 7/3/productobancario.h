#pragma once
#include "iostream"
using namespace std;

class ProductoBancario
{
    protected:
        string cliente;
        double saldo;
        int numProductos;
    public:
        ProductoBancario(string,double,int);
        ~ProductoBancario();
        void imprimir();
};