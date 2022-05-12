#include <iostream>
#include <string.h>

using namespace std;
void printChar(char *x1, int k)
{
    for(int i = 0; i<k; i++)
        cout<<*(x1+i);
}
void concatenate(char *&x1, char *x2, int &lengthx)
{
    lengthx = strlen(x1)+strlen(x2);
    char *x3 = new char[lengthx+1];
    for(int i = 0;i<strlen(x2);i++)
        *(x3+i) = *(x2+i);
    for(int j = strlen(x2);j<lengthx;j++)
        *(x3+j) = *(x1+j-strlen(x2));
    x1 = x3;
}
int main()
{
    char a1[100];
    char a2[100];
    cout<<"Ingrese una primera palabra: ",gets(a1);fflush(stdin);
    cout<<"Ingrese una segunda palabra: ",gets(a2);fflush(stdin);

    char *x1 = new char[strlen(a1)-1];
    char *x2 = new char[strlen(a2)-1];
    strcpy(x1,a1);
    strcpy(x2,a2);

    cout<<"\nSu primera palabra: ",printChar(x1,strlen(x1));
    cout<<"\nSu segunda palabra: ",printChar(x2,strlen(x2));

    cout<<"\n\nCONCATENANDO...\n";
    int concaInt = 0;
    concatenate(x1,x2,concaInt);

    cout<<"\nSu primera palabra: ",printChar(x1,concaInt);
    cout<<"\nSu segunda palabra: ",printChar(x2,strlen(x2));

    delete[] x1;
    delete[] x2;
    x1 = NULL;
    x2 = NULL;
}