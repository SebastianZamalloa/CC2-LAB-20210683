#include "iostream"
#include "operation.h"
using namespace std;

int main()
{
    operation<int,float> misOp(10,5.2);
    float*opPtr = misOp.result();
    cout<<"\nSuma:\tResta:\tMultiplicacion:\tDivision:"<<endl;
    for(int i = 0; i<4; i++)
        (i==2) ? cout<<*(opPtr+i)<<"\t\t": cout<<*(opPtr+i)<<"\t";
    cout<<endl<<endl;
    delete opPtr;

}