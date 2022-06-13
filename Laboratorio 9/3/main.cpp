#include "iostream"
#include "correo.h"
using namespace std;

int main()
{
    correo<char,string> miCorreo('s',"zamalloa");
    cout<<"\nMi correo: "<<miCorreo.mailCreate()<<endl<<endl;
}