#pragma once
#include "iostream"
using namespace std;

class Edad
{
    private:
        string nombre;
        int nacimiento[3];
        int actual[3];
        int edad[3];
        bool bisiesto(int);
        void hallarEdad();
    public:
        Edad(string);
        ~Edad();
        void imprimir();
};