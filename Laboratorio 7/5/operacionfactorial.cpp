#include "iostream"
#include "operacionfactorial.h"
using namespace std;

operacionFactorial::operacionFactorial(int auxop = 0):operacionBase(auxop){}
operacionFactorial::~operacionFactorial(){}
int operacionFactorial::devolverFactorial()
{
    int fact = 1;
    for(int i = 1; i<=operador; i++)
        fact *= i;
    return fact;
}