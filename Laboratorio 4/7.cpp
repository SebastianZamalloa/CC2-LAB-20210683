#include <iostream>
using namespace std;
void createSpace(char space[][9],int n)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            space[i][j] = '-';
        }
    }
}
void createBlock(char space[][9], int mid[2], int n)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            space[mid[1]-1+i][mid[0]-1+j] = '*';
    }
}
void printSpace(char space[][9],int n)
{
    cout<<endl;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout<<space[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void moveBlock(char space[][9], int mid[2],int n, char option)
{
    createSpace(space,n);
    switch (option)
    {
        case 'w':
            if(mid[1]-1==0)
            {
                createBlock(space,mid,n);
                cout<<"\nMovimiento invalido, intentelo de nuevo\n";
            }
            else
            {
                mid[1]--;
                createBlock(space,mid,n);
                printSpace(space,n);
            }
            break;
        case 's':
            if(mid[1]+1==8)
            {
                createBlock(space,mid,n);
                cout<<"\nMovimiento invalido, intentelo de nuevo\n";
            }
            else
            {
                mid[1]++;
                createBlock(space,mid,n);
                printSpace(space,n);
            }
            break;
        case 'a':
            if(mid[0]-1==0)
            {
                createBlock(space,mid,n);
                cout<<"\nMovimiento invalido, intentelo de nuevo\n";
            }
            else
            {
                mid[0]--;
                createBlock(space,mid,n);
                printSpace(space,n);
            }
            break;
        case 'd':
            if(mid[0]+1==8)
            {
                createBlock(space,mid,n);
                cout<<"\nMovimiento invalido, intentelo de nuevo\n";
            }
            else
            {
                mid[0]++;
                createBlock(space,mid,n);
                printSpace(space,n);
            }
            break;
    }
}
int main()
{
    cout<<"\nJuego de mover el bloque\n";
    const int n = 9;
    char space[n][n];
    int mid[2] ={4,4};
    createSpace(space,n);
    createBlock(space,mid,n);
    cout<<"\nCaja inicial: "<<endl;
    printSpace(space,n);
    char option;
    while(true)
    {
        cout<<"Ingresa \'w\', \'a\', \'s\' o \'d\' para mover la caja: ",cin>>option;
        if(option != 'w' && option != 'a' && option != 's' && option != 'd')
            cout<<"\nOpcion incorrecta, movimiento no concretado vuelvalo a intentar\n\n";
        else
            moveBlock(space,mid,n,option);
        cout<<"Ingrese cualquier letra si desea continuar, si no desea continuar aprete \'n\': ",cin>>option;
        if(option == 'n')
            return false;
    }
}