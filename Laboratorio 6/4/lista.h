#pragma once
#include "iostream"
using namespace std;

class lista
{
    private:
        int valor[5];
        bool esLleno[5];
    public:
        lista();
        ~lista();
        void eliminar(int);
        void agregar(int);
        void imprimir();
};