#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
    string floatString; //Ejemplo: "234ab.53"
    vector<char> floatNum; 
    int punto;
    cout<<"Ingresar la secuencia de caracteres con un numero flotante dentro: ",cin>>floatString;
    for(int i = 0;i<floatString.size();i++)
    {
        if((floatString[i]>47 && floatString[i]<58))
            floatNum.push_back(floatString[i]);
        else if(floatString[i] == 46)
        {
            floatNum.push_back(floatString[i]);
            punto = i;
        }
    }
    
    char texto[floatNum.size()];
    for(int i = 0;i<floatNum.size();i++)
        texto[i]=floatNum[i];
    float num = atof(texto);
    cout<<"Este es el numero float: "<<num<<endl;
    cout<< "Este es el numero float sacado y redondeado: ";
    printf("%.0f", num);

}