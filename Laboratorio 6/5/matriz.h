#pragma once
#include "iostream"
using namespace std;
class matriz
{
    private:
        int m[3][3];
    public:
        matriz();
        ~matriz();
        bool buscar(int,int &,int &);
};