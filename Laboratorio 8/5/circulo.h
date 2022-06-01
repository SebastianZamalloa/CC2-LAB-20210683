#pragma once
#include "iostream"
#include "elipse.cpp"
using namespace std;

class circulo : public elipse
{
    public:
        circulo(string,int,int,char*,float);
        ~circulo();
        void imprimir();
};
