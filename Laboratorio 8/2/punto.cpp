#include "iostream"
#include "punto.h"
using namespace std;

punto::punto(int auxX = 0, int auxY = 0):X(auxX),Y(auxY){}
punto::~punto(){}
int punto::getX(){return X;}
int punto::getY(){return Y;}
void punto::setX(int auxX){X = auxX;}
void punto::setY(int auxY){Y = auxY;}
