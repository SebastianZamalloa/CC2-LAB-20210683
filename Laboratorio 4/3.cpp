#include <iostream>
using namespace std;
int main()
{
    cout<<"\nArray de 5x3: \n";
    int intArray[5][3];
    int sum = 0;
    for(int i = 0;i<5;i++)
    {
        for(int j = 0;j<3;j++)
        {
            cout<<"Ingrese el siguiente numero: ",cin >> intArray[i][j];
            
            if((i+1)%2==0)
                sum += intArray[i][j];
        }
        cout<<endl;
    }
    cout<<"Este es su array de 5x3: \n\n";
    for(int i = 0;i<5;i++)
    {
        for(int j = 0;j<3;j++)
            cout<<intArray[i][j]<<" "; 
        cout<<endl;
    }
    cout<<"\nLa suma de los elementos de las filas pares es: "<<sum;
}