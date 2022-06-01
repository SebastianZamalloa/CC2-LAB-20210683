#pragma once
#include "iostream"
#include "operacionbase.cpp"
using namespace std;

class operacionFactorial : public operacionBase
{
    public:
        operacionFactorial(int);
        ~operacionFactorial();
        int devolverFactorial();
};