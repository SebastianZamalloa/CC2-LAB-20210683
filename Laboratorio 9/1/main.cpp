#include "iostream"
#include "specialarray.h"
using namespace std;

int main()
{
    float*rpta;
    specialArray<float> myArray(7.5,13,7.01);
    rpta = myArray.maxMin();
    cout<<"\nMayor:\tMenor:"<<endl;
    for(int i=0; i<2;i++)
        cout<<*(rpta+i)<<"\t";
    cout<<endl<<endl;
    delete rpta; 
}