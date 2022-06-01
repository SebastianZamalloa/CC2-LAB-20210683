#include "iostream"
#include "ave.cpp"
using namespace std;

class ganso : public ave
{
    public:
        ganso(string,float,float);
        ~ganso();
        void migrar();
        void graznar();
};