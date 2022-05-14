#pragma once
#include "iostream"
using namespace std;

class alumno
{
    private:
        int CUI;
        string nombres[4];
        float notas[3];
        float promedio();
        bool esAprobado();
    public:
        alumno(int,string[4],float[3]);
        ~alumno();
        void imprimir();
        
};