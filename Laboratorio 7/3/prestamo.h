#pragma once
#include "iostream"
#include "productobancario.cpp"
using namespace std;

class Prestamo : protected ProductoBancario
{
    public:
        Prestamo(string,double,int);
        ~Prestamo();
        void imprimir();
};


