#pragma once
#include "iostream"
#include "forma.cpp"
using namespace std;

class elipse : public forma
{
    protected:
        float radioMayor;
        float radioMenor;
    public:
        elipse(string,int,int,char*,float,float);
        ~elipse();
        float area();
        void imprimir();
};
