#pragma once
#include "iostream"
#include "color.cpp"
#include "material.cpp"
using namespace std;

class objetos : public color, public material
{
    private:
        string tipo;
        int colorPos;
    public:
        objetos(string,int,string,string);
        ~objetos();
        void imprimir();
};