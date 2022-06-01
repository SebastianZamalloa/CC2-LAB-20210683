#pragma once
#include "iostream"
using namespace std;

class persona
{
    protected:
        int edad;
        string nombre;
    public:
        persona();
        ~persona();
        void setEdad(int);
        void setNombre(string);
        void imprimir();
};