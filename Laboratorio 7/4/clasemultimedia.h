#pragma once
#include "iostream"
using namespace std;

class ClaseMultimedia
{
    protected:
        int duracion;
        string tipoMultimedia;
        float peso;
    public:
        ClaseMultimedia(int,string,float);
        ~ClaseMultimedia();
        void reproducir();
        void imprimir();
};
