#include<iostream>
using namespace std;
int main()
{
    string nombre[10];
    float precio[10];
    int stock[10];
    int option;
    for(int i = 0;i<10;i++)
    {
        cout<<"\nProducto "<<i+1<<": "<<endl;
        cout<<"Nombre del producto: ";
        getline(cin,nombre[i]);
        cout<<"Precio: ",cin>>precio[i],cout<<"Stock: ",cin>>stock[i];
        cin.ignore();
    }
    char optionx;
    while(true)
    {
        cout<<"\nIngresa la opción que necesitas (1. Dar de alta un producto, 2. Buscar un producto, 3. Cambiar el precio y el stock de un producto): ",cin>>option;
        if(option<=0 || option>=4)
            cout<<"\nOpcion incorrecta, vuelvalo a intentar\n\n";
        else
        {
            string auxname;
            bool confirm = false;
            switch(option)
            {
                case 1:
                    cout<<"\nQue numero de producto deseas reemplazar (1 a 10): ",cin>>option;
                    while(option>10 || option<=0)
                        cout<<"Numero invalido\n\n¿Que numero de producto deseas reemplazar (1 a 10): ",cin>>option;
                    cout<<"\nReemplazando Producto "<<option<<": "<<endl;
                    cout<<"Nombre del producto: ";
                    cin.ignore();
                    getline(cin,nombre[option-1]);
                    cout<<"Precio: ",cin>>precio[option-1],cout<<"Stock: ",cin>>stock[option-1],cout<<endl;
                    break;
                case 2:
                    cin.ignore();
                    cout<<"Ingrese el nombre del producto que desea buscar: ",getline(cin,auxname);
                    for(int i=0;i<10;i++)
                    {
                        if(auxname == nombre[i])
                        {
                            cout<<"\nProducto encontrado!"<<endl;
                            cout<<"\nNombre: "<<nombre[i]<<"\nPrecio: "<<precio[i]<<"\nStock: "<<stock[i]<<endl;
                            confirm = true;
                        }
                    }
                    if(!confirm)
                    {
                        cout<<"\nProducto no encontrado"<<endl;
                    }
                    break;
                case 3:
                    cout<<"\nQue numero de producto deseas cambiarle el precio y el stock (1 a 10): ",cin>>option;
                    while(option>10 || option<=0)
                        cout<<"Numero invalido\n\nQue numero de producto deseas cambiarle el precio y el stock (1 a 10): ",cin>>option;
                    cout<<"\nReemplazando informacion del Producto "<<nombre[option-1]<<": "<<endl;
                    cout<<"Precio: ",cin>>precio[option-1],cout<<"Stock: ",cin>>stock[option-1],cout<<endl;
                    cout<<"\nResultado: ";
                    cout<<"\nNombre: "<<nombre[option-1]<<"\nPrecio: "<<precio[option-1]<<"\nStock: "<<stock[option-1]<<endl;
                    break;
            }
        }
        cout<<"\nIngrese cualquier letra si desea continuar, si no desea continuar aprete \'n\': ",cin>>optionx;
        if(optionx == 'n')
        {
            cout<<"\nPrograma terminado";
            return false;
        }
    }
}