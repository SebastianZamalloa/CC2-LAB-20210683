#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Ingrese la cantidad de estudiantes: ",cin>>n;
    float notes[n][3];
    float sum[n];
    for(int i = 0;i<n;i++)
    {
        sum[i] = 0;
        for(int j = 0;j<3;j++)
        {
            cout<<"Ingrese la nota numero "<<j+1<<" del estudiante numero "<<i+1<<": ",cin>>notes[i][j];
            while(notes[i][j]<0 || notes[i][j]>20)
                cout<<"Nota incorrecta\nIngrese la nota numero "<<j+1<<" del estudiante numero "<<i+1<<": ",cin>>notes[i][j];
            sum[i] += notes[i][j];
        }
        sum[i]/=3;
        cout<<endl;
    }
    for(int i = 0;i<n;i++)
    {
        cout<<"El promedio del estudiante numero "<<i+1<<" es: "<<sum[i]<<endl;;
    }
}