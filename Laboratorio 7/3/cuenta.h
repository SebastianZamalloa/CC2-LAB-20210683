#pragma once
#include "iostream"
#include "productobancario.cpp"
using namespace std;

class Cuenta : public ProductoBancario
{
    public:
        Cuenta(string,double,int);
        ~Cuenta();
        void imprimir();
};
