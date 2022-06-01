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
        virtual ~forma();
        virtual void imprimir();
        virtual float area();
        virtual float perimetro();
        virtual void escala(int);
        void setColor(string);
        string getColor();
        void moverCentro(int,int);
};