#include "iostream"
#include "vector"
using namespace std;

struct pieza
{
    string nombrePieza;
    string color;
};

class automovil
{
    public:
        vector<pieza>componentes;
        void listaComponentes()
        {
            cout<<"\n------------------------------\n";
            cout<<"\nComponentes del automovil: "<<endl<<endl;
            for(size_t i = 0;i<componentes.size();i++)
            {
                cout<<"Nombre de la pieza: "<<componentes[i].nombrePieza;
                cout<<"\nColor de la pieza: "<<componentes[i].color;
                cout<<endl<<endl;                
            }
        }
};

class IBuilder
{
    public:
        virtual ~IBuilder(){}
        virtual void producirPuertas() const = 0;
        virtual void producirCapo() const = 0;
        virtual void producirLlantas() const = 0;
        virtual void producirParabrisas() const = 0;
        virtual void producirRetrovisores() const = 0;
        virtual void producirVidrios() const = 0;
        virtual void producirLuces() const = 0;
        virtual void producirTimon() const = 0;
        virtual void producirAsientos() const = 0;
        virtual void producirMotor() const = 0;
        virtual void producirBateria() const = 0;      
};

class builderEspecifico : public IBuilder
{
    private:
        automovil* producto;
    public:
        builderEspecifico(){this->reset();}
        ~builderEspecifico(){delete producto;}
        void reset(){this->producto = new automovil();}
        void producirPuertas() const override
        {
            string color;
            cout<<"\nIngrese el color de las Puertas: ",cin>>color;
            pieza temp = {"Puertas",color};
            this->producto->componentes.push_back(temp);
            cout<<"Pieza añadida al automovil\n";
        }
        void producirCapo() const override
        {
            string color;
            cout<<"\nIngrese el color del Capo: ",cin>>color;
            pieza temp = {"Capo",color};
            this->producto->componentes.push_back(temp);
            cout<<"Pieza añadida al automovil\n";
        }
        void producirLlantas() const override
        {
            string color;
            cout<<"\nIngrese el color de las Llantas: ",cin>>color;
            pieza temp = {"Llantas",color};
            this->producto->componentes.push_back(temp);
            cout<<"Pieza añadida al automovil\n";
        }
        void producirParabrisas() const override
        {
            string color;
            cout<<"\nIngrese el color de los Parabrisas: ",cin>>color;
            pieza temp = {"Parabrisas",color};
            this->producto->componentes.push_back(temp);
            cout<<"Pieza añadida al automovil\n";
        }
        void producirRetrovisores() const override
        {
            string color;
            cout<<"\nIngrese el color de los Retrovisores: ",cin>>color;
            pieza temp = {"Retrovisores",color};
            this->producto->componentes.push_back(temp);
            cout<<"Pieza añadida al automovil\n";
        }
        void producirVidrios() const override
        {
            string color;
            cout<<"\nIngrese el color de los Vidrios: ",cin>>color;
            pieza temp = {"Vidrios",color};
            this->producto->componentes.push_back(temp);
            cout<<"Pieza añadida al automovil\n";
        }
        void producirLuces() const override
        {
            string color;
            cout<<"\nIngrese el color de las Luces: ",cin>>color;
            pieza temp = {"Luces",color};
            this->producto->componentes.push_back(temp);
            cout<<"Pieza añadida al automovil\n";
        }
        void producirTimon() const override
        {
            string color;
            cout<<"\nIngrese el color del Timon: ",cin>>color;
            pieza temp = {"Timon",color};
            this->producto->componentes.push_back(temp);
            cout<<"Pieza añadida al automovil\n";
        }
        void producirAsientos() const override
        {
            string color;
            cout<<"\nIngrese el color de los Asientos: ",cin>>color;
            pieza temp = {"Asientos",color};
            this->producto->componentes.push_back(temp);
            cout<<"Pieza añadida al automovil\n";
        }
        void producirMotor() const override
        {
            string color;
            cout<<"\nIngrese el color del Motor: ",cin>>color;
            pieza temp = {"Motor",color};
            this->producto->componentes.push_back(temp);
            cout<<"Pieza añadida al automovil\n";
        }
        void producirBateria() const override
        {
            string color;
            cout<<"\nIngrese el color de la Bateria: ",cin>>color;
            pieza temp = {"Bateria",color};
            this->producto->componentes.push_back(temp);
            cout<<"Pieza añadida al automovil\n";
        }   
        automovil* getProducto()
        {
            automovil* resultado = this->producto;
            this->reset();
            return resultado;
        }
};

class director
{
    private:
        IBuilder* builder;
    public:
        void set_builder(IBuilder*builder){this->builder = builder;}
        void buildProductMin()
        {
            this->builder->producirAsientos();
            this->builder->producirLlantas();
            this->builder->producirMotor();
            this->builder->producirVidrios();
            this->builder->producirPuertas();
            this->builder->producirTimon();
        }
        void buildProductComplete()
        {
            this->builder->producirAsientos();
            this->builder->producirLlantas();
            this->builder->producirMotor();
            this->builder->producirBateria();
            this->builder->producirVidrios();
            this->builder->producirRetrovisores();
            this->builder->producirParabrisas();
            this->builder->producirLuces();
            this->builder->producirPuertas();
            this->builder->producirTimon();            
        }
};

void clienteCode(director& director)
{
    builderEspecifico* builder = new builderEspecifico();
    automovil* p;
    director.set_builder(builder);
    int option = 0;
    cout<<"\nCreacion de su propio automovil\n\n";
    cout<<"Bienvenido al programa de creacion de su propio automovil, a continuación tendra opciones a elegir (ADVERTENCIA: En todas las opciones usted eligirá el color de sus piezas):\n";
    cout<<"\n1. Automovil minimamente funcional (Asientos, Llantas, Motor, Vidrios, Puertas y Timon)\n";
    cout<<"2. Automovil completo funcional (Asientos, Llantas, Motor, Bateria, Vidrios, Retrovisores, Parabrisas, Luces, Puertas y Timon)\n";
    cout<<"3. Automovil de eleccion propia (Elija sus propias piezas)\n";
    cout<<"\nElija su opcion: ",cin>>option;
    switch (option)
    {
        case 1:
        {
            cout<<"\nAutomovil minimamente funcional:\n";
            director.buildProductMin();
            p = builder->getProducto();
            p->listaComponentes();            
        }break;
        case 2:
        {
            cout<<"\nAutomovil completamente funcional:\n";
            director.buildProductComplete();
            p = builder->getProducto();
            p->listaComponentes(); 
        }break;
        case 3:
        {
            int pieceOption;
            cout<<"\nElija las piezas que va a agregar: \n";
            do
            {
                cout<<"\n1. Asientos";
                cout<<"\n2. Llantas";
                cout<<"\n3. Motor";
                cout<<"\n4. Bateria";
                cout<<"\n5. Vidrios";
                cout<<"\n6. Retrovisores";
                cout<<"\n7. Parabrisas";
                cout<<"\n8. Luces";
                cout<<"\n9. Puertas";
                cout<<"\n10. Timon";
                cout<<"\n11. Terminar construccion\n\n";
                cout<<"Elija su opcion: ",cin>>pieceOption;

                if(pieceOption>11 || pieceOption <=0)
                {
                    cout<<"\nERROR DE OPCION, terminando programa\n\n";
                    return;
                }
                else if(pieceOption==11)
                {
                    cout<<"\nConstrucción terminada\n";
                    p = builder->getProducto();
                    p->listaComponentes(); 
                    return;
                }
                switch (pieceOption)
                {
                    case 1:
                    {
                        builder->producirAsientos();
                    }break;
                    case 2:
                    {
                        builder->producirLlantas();
                    }break;
                    case 3:
                    {
                        builder->producirMotor();
                    }break;
                    case 4:
                    {
                        builder->producirBateria();
                    }break;
                    case 5:
                    {
                        builder->producirVidrios();
                    }break;
                    case 6:
                    {
                        builder->producirRetrovisores();
                    }break;
                    case 7:
                    {
                        builder->producirParabrisas();
                    }break;
                    case 8:
                    {
                        builder->producirLuces();
                    }break;
                    case 9:
                    {
                        builder->producirPuertas();
                    }break;
                    case 10:
                    {
                        builder->producirTimon();
                    }break;
                }
            }while(pieceOption!=11 || (pieceOption<11 && pieceOption >0));
            p = builder->getProducto();
            p->listaComponentes(); 
        }break;
        default:
        {
            cout<<"\nOpción invalida\n\n";
        }break;
    }
    
    delete p;
    delete builder;
}
int main()
{
    director* myDirector = new director();
    clienteCode(*myDirector);
    delete myDirector;
    return 0;
}