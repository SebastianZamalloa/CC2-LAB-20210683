#include <iostream>
using namespace std;

void darAlta(float**&productos)
{
    int i = 0;
    while(*(productos+i)!=NULL)
    {
        i++;
        if(i >= 10)
        {
            cout<<"\nNo es posible agregar más productos\n";
            return;
        }
    }

    *(productos+i) = new float[4];
    *(*(productos+i)) = 101 + i;
    cout<<"\nIngrese su nombre en codigo: ",cin>> *(*(productos+i)+1);
    cout<<"Ingrese su precio: ",cin>>*(*(productos+i)+2);
    cout<<"Ingrese su stock: ",cin>>*(*(productos+i)+3);
}
void imprimirPorCodigo(float**productos,int codigo)
{
    for(int i=0;i<10;i++)
    {
        if(*(*(productos+i)) == codigo)
        {
            cout<<"\nCodigo de tienda: "<<*(*(productos+i));
            cout<<"\nNombre en codigo: "<<*(*(productos+i)+1);
            cout<<"\nPrecio: "<<*(*(productos+i)+2);
            cout<<"\nStock: "<<*(*(productos+i)+3)<<endl<<endl;
            return;
        }
    }
    cout<<"\nPRODUCTO NO ENCONTRADO\n";
}
int main()
{
    float **productos = new float*[10];
    for(int i=0;i<10;i++)
        *(productos+i) = NULL;
    darAlta(productos);
    darAlta(productos);
    darAlta(productos);
    darAlta(productos);
    darAlta(productos);
    darAlta(productos);
    darAlta(productos);
    darAlta(productos);
    darAlta(productos);
    darAlta(productos);
    darAlta(productos);
    imprimirPorCodigo(productos,101);
    for(int i=0;i<10;i++)   
        delete [] productos[i];
    delete [] productos;
}