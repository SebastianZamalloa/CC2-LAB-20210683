#include <iostream>
using namespace std;

int sumar(int a, int b)
{
    return a+b;
}
int restar(int a, int b)
{
    return a-b;
}
int multiplicar(int a, int b)
{
    return a*b;
}
int dividir(int a, int b)
{
    return a/b;
}

int main()
{
    int(*operaciones[])(int,int)={sumar,restar,multiplicar,dividir};
    char signos[4] = {'+','-','*','/'};
    string nombres[4] = {"Suma: ","Resta: ","Multiplicacion: ","Division: "};
    int a, b;
    cout<<"\nIngrese un primer valor: ",cin>>a;
    cout<<"Ingrese un segundo valor: ",cin>>b;
    cout<<endl;
    for(int i = 0; i<4; i++)
        cout<<nombres[i]<<operaciones[i](a,b)<<endl;
    cout<<endl;
}