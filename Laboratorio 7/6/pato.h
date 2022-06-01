#include "iostream"
#include "ave.cpp"
using namespace std;

class pato : public ave
{
    public:
        pato(string,float,float);
        ~pato();
        void volarV();
        void nadar();
        void graznar();
};