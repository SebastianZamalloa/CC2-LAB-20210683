#include "iostream"
#include "cola.h"
using namespace std;

int main()
{
    cout<<"\nCOLA: \n";
    cola cola1;
    int n;
    cout<<"\nCuantos datos necesita para su cola?: ",cin>>n,cout<<endl;
    for(int i = 0; i<n; i++)
    {
        int tempx;
        cout<<"Ingrese el siguiente dato para su cola: ",cin>>tempx;
        cola1.anadir(tempx);
    }
    
    cout<<"\nEsta es su cola:\n";
    cola1.imprimir();
}