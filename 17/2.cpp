#include "iostream"
#include <iomanip>
#include <ctime>
using namespace std;
string gen_random(const int len) 
{
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    string tmp_s;
    tmp_s.reserve(len);
    for (int i = 0; i < len; ++i)
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    return tmp_s;
}
template<class T>
class arrayRan
{
    private:
        T arrayOf[100];
    public:
        arrayRan()
        {
            srand(time(NULL));
            for(int i=0;i<100;i++){arrayOf[i] = rand()%(1000-1+1)+1;}
        }
        void imprimir()
        {
            cout<<endl;
            for(int i=0;i<100;i++)
            {
                cout<<arrayOf[i]<<" ";
                if((i+1)%10 == 0)
                    cout<<endl;
            }
            cout<<endl;
        }
        void sort()
        {
            for(int k=1; k<100; k++)   
            {  
                T temp = arrayOf[k];  
                int j= k-1;  
                while(j>=0 && temp <= arrayOf[j])  
                {  
                    arrayOf[j+1] = arrayOf[j];   
                    j = j-1;  
                }  
                arrayOf[j+1] = temp;  
            } 
        }
};
template<>
arrayRan<float>::arrayRan()
{
    srand(time(NULL));
    for(int i=0;i<100;i++){arrayOf[i] = 1.0 + (float)(rand()) / ((float)(RAND_MAX/(1000.0 - 1.0)));}    
}
template<>
arrayRan<double>::arrayRan()
{
    srand(time(NULL));
    for(int i=0;i<100;i++){arrayOf[i] = 1.0 + (float)(rand()) / ((float)(RAND_MAX/(1000.0 - 1.0)));}    
}
template<>
arrayRan<char>::arrayRan()
{
    srand(time(NULL));
    for(int i=0;i<100;i++){arrayOf[i] = rand()%(126-33+1)+33;}     
}
template<>
arrayRan<string>::arrayRan()
{
    srand(time(NULL));
    for(int i=0;i<100;i++){arrayOf[i] = gen_random(rand()%(5-3+1)+3);}   
}
int main()
{
    cout<<"\nEJEMPLO INT:\n";
    arrayRan<int> ejemploInt;
    ejemploInt.sort();
    ejemploInt.imprimir();
    cout<<"\nEJEMPLO FLOAT:\n";
    arrayRan<float> ejemploFloat;
    ejemploFloat.sort();
    ejemploFloat.imprimir();
    cout<<"\nEJEMPLO CHAR:\n";
    arrayRan<char> ejemploChar;
    ejemploChar.sort();
    ejemploChar.imprimir();
    cout<<"\nEJEMPLO STRING:\n";
    arrayRan<string> ejemploString;
    ejemploString.sort();
    ejemploString.imprimir();
}