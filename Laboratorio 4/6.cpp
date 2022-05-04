#include <iostream>
using namespace std;
int compareArray(int sumas[], int n)
{
    int mayor = sumas[0];
    for(int i = 0;i<n;i++)
    {
        if(sumas[i]>=mayor)
            mayor = sumas[i];
    }
    return mayor;
}
int main()
{
    cout<<"\nArray de 3x3: \n";
    int intArray[3][3];
    int sum[3];
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            cout<<"Ingrese el siguiente numero: ",cin >> intArray[i][j];
            sum[i] += intArray[i][j];
        }
        cout<<endl;
    }
    cout<<"Este es su array de 3x3: \n\n";
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
            cout<<intArray[i][j]<<" "; 
        cout<<endl;
    }
    cout<<"\nLa mayor de las sumas de los elementos de las filas es: "<<compareArray(sum,3);
}