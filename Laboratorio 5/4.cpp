    #include <iostream>
    #include <string.h>
    using namespace std;

    struct mixto
    {
        void *varray[2];
        mixto *next;    
    };

    void ingresar(mixto*&listax)
    {
        mixto *x = new mixto();
        mixto *y = listax;
        x->next = NULL;
        
        int *num = new int;
        cout<<"Ingrese un numero: ";cin>>*num;
        x->varray[0] = num;

        char word[100];
        cin.ignore();
        cout<<"Ingrese una palabra: ",gets(word);
        const int lenght = strlen(word);
        x->varray[1] = new char[lenght];
        strcpy((char*)(x->varray[1]),word);

        if(y == NULL)
            listax = x;
        else
        {
            while(y->next != NULL)
                y = y->next;
            y->next = x;
        }
        cout<<endl;
    }
    void buscar(mixto *listax, int val)
    {
        mixto *listaux = listax;
        while(listaux != NULL)
        {
            if(*(int*)(listax->varray[0]) == val)
            {
                cout<<"\nElemento encontrado\nEs un entero\n";
                return;
            }
            else
                listaux = listaux->next;
        }
        cout<<"\nElemento inexistente"<<endl;
    }
    void buscar(mixto *listax, char val[])
    {
        mixto *listaux = listax;    
        while(listaux != NULL)
        {
            if((strcmp((char*)(listax->varray[1]),val))==0)
            {
                cout<<"\nElemento encontrado\nEs un grupo de caracteres\n\n";
                return;
            }
            else
                listaux = listaux->next;
        }
        cout<<"\nElemento inexistente"<<endl;
    }
    void imprimir(mixto *listax)
    {
        mixto *aux = listax;
        int i = 0;
        cout<<endl;
        while(aux != NULL)
        {
            cout <<"Nodo "<<i+1<<" - Lista: "<<*(int*)(aux->varray[0])<<" "<<(char*)(aux->varray[1])<<endl;
            aux = aux->next;
            i++;
            cout<<endl;
        }
    }
    void eliminar(mixto *&listax, int num)
    {
        mixto *x = listax;
        if(listax != NULL)
        {
            int j = 0;
            while(x != NULL)
            {
                if(j==num)
                {
                    if(listax->next!=NULL)
                    {
                        listax = listax->next;
                        delete x;
                        return;
                    }
                    else
                        delete listax;
                    
                }
                x = x->next;
                j++;
            }
            cout<<"\nImposible de eliminar";
        }
    }
    int main()
    {
        mixto *lista = NULL;
        int nodes;
        cout<<"\nCuantos nodos?: ",cin>>nodes,cout<<endl;
        for(int i=0;i<nodes;i++)
            ingresar(lista);
        cout<<"\nSus nodos: \n";
        imprimir(lista);
        while(true)
        {
            int option;
            cout<<"\nElija su opcion (1.Agregar nodo, 2.Eliminar nodo, 3.Buscar elemento de nodo): ",cin>>option;
            while(option<=0 || option >3)
                cout<<"\nINVALIDO\nElija su opcion (1.Agregar nodo, 2.Eliminar nodo, 3.Buscar elemento de nodo): ",cin>>option;
            cout<<endl;
            switch(option)
            {
                case 1:
                {
                    ingresar(lista);
                    cout<<"\nSus nuevos nodos: \n";
                    imprimir(lista);
                }break;
                case 2:
                {
                    int i;
                    cout<<"Ingrese el numero de nodo que va a eliminar: ",cin>>i;
                    eliminar(lista,i-1);
                    cout<<"\nSus nuevos nodos: \n";
                    imprimir(lista);
                }break;
                case 3:
                {
                    int i;
                    cout<<"Ingrese que va a buscar (1.Entero, 2.Caracteres): ",cin>>i;
                    while(i<=0 || i>2)
                        cout<<"INVALIDO\nIngrese que va a buscar (1.Entero, 2.Caracteres): ",cin>>i;
                    switch(i)
                    {
                        case 1:
                        {
                            int x;
                            cout<<"\nIngrese el numero que va a buscar: ",cin>>x;
                            buscar(lista,x);
                        }break;
                        case 2:
                        {
                            char x[100];
                            cin.ignore();
                            cout<<"\nIngrese la palabra que va a buscar: ",gets(x);
                            char *xptr;
                            xptr = new char[strlen(x)];
                            strcpy(xptr,x);
                            buscar(lista,xptr);
                            delete[] xptr;
                        }break;
                    }
                }
            }
            char optionch;
            cout<<"\nQUIERE CONTINUAR? (Ingrese cualquier letra para continuar y si no quiere ingrese w): ",cin>>optionch;
            if(optionch=='w')
                return false;
        }
    }