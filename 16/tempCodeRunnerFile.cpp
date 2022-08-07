#include <iostream>
using namespace std;

class WinFactory
{
    public:
        virtual ~WinFactory(){}
        virtual string Draw() const = 0;
};
class WinCheckBox : public WinFactory
{
    public:
	    string Draw() const override{return "Dibujando CheckBox Windows";}
};
class WinButton : public WinFactory
{
    public:
        string Draw() const override{return "Dibujando Button Windows";}
};
class MacFactory
{
    public:
        virtual ~MacFactory(){};
        virtual string Draw() const = 0;
        virtual string draw(const WinFactory& colaborador) const = 0;
};
class MacCheckBox : public MacFactory
{
    public:	
        string Draw() const override{
            return "Dibujando CheckBox Mac";
        }
        string draw(const WinFactory& colaborador) const override
        {
            string resul;
            int i = 10;
            while(colaborador.Draw()[i] != 's')
            {
                resul += colaborador.Draw()[i];
                i++;
            }if(colaborador.Draw()[i] == 's'){resul += colaborador.Draw()[i];}
            return "Dibujando CheckBox Mac en colaboracion con "+ resul;
        }
};
class MacButton : public MacFactory
{
    public:
        string Draw() const override{return "Dibujando Button Mac";}
        string draw(const WinFactory& colaborador) const override
        {
            string resul;
            int i = 10;
            while(colaborador.Draw()[i] != 's')
            {
                resul += colaborador.Draw()[i];
                i++;
            }if(colaborador.Draw()[i] == 's'){resul += colaborador.Draw()[i];}
            return "Dibujando Button Mac en colaboracion con "+ resul;
        }
};
class LinuxFactory
{
    public:
        virtual ~LinuxFactory(){}
        virtual string Draw() const = 0;
};
class LinuxCheckBox : public LinuxFactory
{
    public:
	    string Draw() const override{return "Dibujando CheckBox Linux";}
};
class LinuxButton : public LinuxFactory
{
    public:
        string Draw() const override{return "Dibujando Button Linux";}
};
class GUIFactory
{
    public:
        virtual WinFactory *CrearControlW() const = 0;
        virtual MacFactory *CrearControlM() const = 0;
        virtual LinuxFactory *CrearControlL() const = 0;
};
class Button : public GUIFactory
{
	WinFactory *CrearControlW() const override{return new WinButton();}
	MacFactory *CrearControlM() const override{return new MacButton();}
    LinuxFactory *CrearControlL() const override{return new LinuxButton();}
};
class CheckBox : public GUIFactory
{
	WinFactory *CrearControlW() const override{return new WinCheckBox();}
	MacFactory *CrearControlM() const override{return new MacCheckBox();}
    LinuxFactory *CrearControlL() const override{return new LinuxCheckBox();}
};

void Aplication(const GUIFactory& f, int os)
{
    switch(os)
    {
        case 1:
        {
            const WinFactory* windows = f.CrearControlW();
            cout<<"\n"<<windows->Draw()<<endl<<endl;
            delete windows;
        }break;
        case 2:
        {
            const MacFactory* mac = f.CrearControlM();
            cout<<"\n"<<mac->Draw()<<endl<<endl;            	
	        delete mac;
        }break;
        case 3:
        {
            const LinuxFactory* linux = f.CrearControlL();
            cout<<"\n"<<linux->Draw()<<endl<<endl;            	
	        delete linux;
        }break;
    }
}

int main() 
{
	cout<<"\nCliente: Windows ";
	Button* f1 = new Button();
	Aplication(*f1, 1);
	delete f1;

	cout<<"Cliente: Mac ";
	Button* f2 = new Button();
	Aplication(*f2, 2);
	delete f2;

    cout<<"Cliente: Linux ";
	CheckBox* f3 = new CheckBox();
	Aplication(*f3, 3);
	delete f3;

	return 0;
}

