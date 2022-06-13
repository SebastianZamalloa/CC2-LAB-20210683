#include "iostream"
using namespace std;

template<typename T, typename R>
class correo
{
    private:
        T initial;
        R name;
    public:
        correo(T i, R n):initial(i),name(n){}
        ~correo(){}
        string mailCreate()
        {
            string mail;
            mail += initial;
            mail += name;
            mail += "@unsa.edu.pe";
            return mail;
        }
};
