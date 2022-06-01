#include "iostream"
#include "prestamo.cpp"
using namespace std;

class Hipoteca : public Prestamo
{
    public:
        Hipoteca(string,double,int);
        ~Hipoteca();
        void imprimir();
};
