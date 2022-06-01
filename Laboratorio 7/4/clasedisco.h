#pragma once
#include "iostream"
#include "clasemultimedia.cpp"
using namespace std;

class ClaseDisco : public ClaseMultimedia
{
    private:
        string nombreDisco;
    public:
        ClaseDisco(int,string,float,string);
        ~ClaseDisco();
        void imprimir();
        void publicar();
};
