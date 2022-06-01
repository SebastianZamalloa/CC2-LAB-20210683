#include "iostream"
#include "ave.cpp"
using namespace std;

class gallina : public ave
{
    public:
        gallina(string,float,float);
        ~gallina();
        void cacarear();
        void ponerHuevo();
};