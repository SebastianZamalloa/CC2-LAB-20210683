#include "rectangulo.h"
#include "iostream"

using namespace std;

rectangulo::rectangulo(float x, float y):base(x),altura(y){}
rectangulo::~rectangulo(){}
float rectangulo::area(){return base*altura;}
float rectangulo::perimetro(){return 2.0*base+2.0*altura;}

