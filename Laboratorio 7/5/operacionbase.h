#pragma once
#include "iostream"
using namespace std;

class operacionBase
{
    protected:
        int operador;
    public:
        operacionBase(int);
        ~operacionBase();
        void setOperador(int);
        int getOperador();
};