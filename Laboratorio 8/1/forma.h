#include "iostream"
#include "punto.cpp"
using namespace std;
class forma
{
    protected:
        string color;
        punto centro;
        char *nombre;
    public:
        forma(string,int,int,char*);
        ~forma();
        void imprimir();
        void setColor(string);
        string getColor();
        void moverCentro(int,int);
};