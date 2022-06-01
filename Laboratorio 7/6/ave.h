#pragma once
#include "iostream"
using namespace std;

class ave
{
    protected:
        string colorPrincipal;
        float altura;
        float peso;
        bool vuela;
    public:
        ave(string,float,float,bool);
        ~ave();
        void volar();
        void picotear();
        void comer();
        void imprimir();
};  