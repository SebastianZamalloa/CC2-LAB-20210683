#include <iostream>
using namespace std;
bool buscar(int lista[],int n, int x)
{
    for(int i=0;i<n;i++)
        if(x==lista[i])
            return true;
    return false;
}
int main()
{
    cout<<"\nARREGLO DE 8 NUMEROS ENTEROS\n";
    int lista[8];
    for(int i=0;i<8;i++)
        cout<<"Ingrese el numero "<<i+1<<": ",cin>>lista[i];
    int x;
    cout<<"\nIngrese el numero que desea buscar: ",cin>>x;
    if(buscar(lista,8,x))
        cout<<"\nEl numero se encuentra en el arreglo";
    else
        cout<<"\nEl numero no se encuentra en el arreglo";
}