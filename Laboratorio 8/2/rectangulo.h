#pragma once
#include "iostream"
#include "forma.cpp"
using namespace std;

class rectangulo : public forma
{
    protected:
        float ladoMayor;
        float ladoMenor;
    public:
        rectangulo(string,int,int,char*,float,float);
        ~rectangulo();
        float area();
        float perimetro();
        void escala(float);
        void imprimir();
};
