#pragma once
#include "iostream"
#include "rectangulo.cpp"
using namespace std;

class cuadrado : public rectangulo
{
    public:
        cuadrado(string,int,int,char*,float);
        ~cuadrado();
        void imprimir();
};
