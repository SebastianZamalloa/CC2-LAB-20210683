#include<iostream>
#include<vector>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cout<<"Ingrese un numero mayor a 100 y menor a 999: ",cin>>num;
    while(num<=100 || num>=999)
        cout<<"Ingrese un numero valido\nIngrese un numero mayor a 100 y menor a 999: ",cin>>num;
    int tempNum = num;
    int i = 0;
    vector<int> v(1);
    bool confirm = true;
    while(confirm)
    {  
        if(tempNum/2==0)
           confirm = false;
        v.push_back(tempNum%2);
        tempNum /= 2;
        i++;
        
    }
    tempNum = 0;
    for(int i = v.size()-1;i>=0;i--)
        tempNum += v[i]*pow(10,i-1); 
    cout<<"Numero en binario: "<<tempNum;
}