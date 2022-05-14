#pragma once
#include "iostream"
using namespace std;

class rectangulo
{
    private:
        float base;
        float altura;
    public:
        rectangulo(float,float);
        ~rectangulo();
        float area();
        float perimetro();
};