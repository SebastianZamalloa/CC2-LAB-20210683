#include "iostream"
#include "operacionbase.h"
using namespace std;

operacionBase::operacionBase(int auxop = 0):operador(auxop){}
operacionBase::~operacionBase(){}
int operacionBase::getOperador(){return operador;}
void operacionBase::setOperador(int auxop){operador=auxop;}
