#include "iostream"
#include "matriz.h"
#include "time.h"
using namespace std;

matriz::matriz()
{
    srand(time(NULL));
    cout<<"\nEsta es la matriz generada: "<<endl<<endl;
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            m[i][j] = 1 + rand() %(10-1);
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}
matriz::~matriz(){}
bool matriz::buscar(int x,int &f, int &c)
{
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            if(x == m[i][j])
            {
                f = i;
                c = j;
                return x;
            }
        }
    }
    return false;
}