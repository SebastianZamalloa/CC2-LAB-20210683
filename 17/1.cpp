#include "iostream"
using namespace std;

template<class T>
class Operations
{
    private:
        T x,y;
    public:
        Operations(T aux,T auy):x(aux),y(auy){}
        T suma(){return x+y;}
        T resta(){return x-y;}
        T multiplicacion(){return x*y;}
        T division(){return x/y;}
};
template<>
class Operations<char>
{
    private:
        char x,y;
    public:
        Operations(char aux,char auy):x(aux),y(auy){}
        string suma()
        {
            string concaChar;
            concaChar+=x;concaChar+=y;
            return concaChar;
        }
        string resta(){return "Char eliminados";}
        string multiplicacion()
        {
            string concaChar;
            concaChar += x; concaChar += y;
            concaChar += " "; concaChar += y; concaChar += x;
            return concaChar;
        }
        string division(){string concaChar;concaChar+=x;concaChar+="/";concaChar+=y;return concaChar;}
};
template<>
class Operations<string>
{
    private:
        string x,y;
    public:
        Operations(string aux,string auy):x(aux),y(auy){}
        string suma(){return x+y;}
        string resta()
        {
            string tempString;
            for(int i=0;i<x.length();i++)
            {
                bool canGo = true;
                for(int j=0;j<y.length();j++)
                {
                    if(x[i]!=y[j])
                    {continue;} 
                    canGo = false;
                    break;                                                                         
                }
                if(canGo) tempString += x[i];                        
            }
            return tempString;
        }
        string multiplicacion()
        {
            string tempString;
            int i = 0,j=0;
            while(i<x.length() || j<y.length())
            {
                if(i<x.length())
                {
                    tempString += x[i];
                    i++;
                }
                if(j<y.length())
                {
                    tempString += y[j];
                    j++;
                }
            }
            return tempString;
        }
        string division()
        {
            return "Division no posible";
        }
};
int main()
{
    cout<<"\nOPERACIONES CON ENTEROS: \n";
    Operations<int> operacionesInt(10,5);
    cout<<"\nSUMA: "<<operacionesInt.suma()<<"\nRESTA: "<<operacionesInt.resta()
    <<"\nMULTIPLICACION: "<<operacionesInt.multiplicacion()<<"\nDIVISION: "<<operacionesInt.division()<<endl;

    cout<<"\nOPERACIONES CON CHAR: \n";
    Operations<char> operacionesChar('s','z');
    cout<<"\nSUMA: "<<operacionesChar.suma()<<"\nRESTA: "<<operacionesChar.resta()
    <<"\nMULTIPLICACION: "<<operacionesChar.multiplicacion()<<"\nDIVISION: "<<operacionesChar.division()<<endl;

    cout<<"\nOPERACIONES CON STRING: \n";
    Operations<string> operacionesString("bueno","bonito");
    cout<<"\nSUMA: "<<operacionesString.suma()<<"\nRESTA: "<<operacionesString.resta()
    <<"\nMULTIPLICACION: "<<operacionesString.multiplicacion()<<"\nDIVISION: "<<operacionesString.division()<<endl<<endl;
}