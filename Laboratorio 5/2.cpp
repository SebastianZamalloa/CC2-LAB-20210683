#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    for(int i = 0; i<10; i++)
    {
        cout<<"\nVuelta numero "<<i+1;
        cout<<"\nLos valores del vector 1 son: ";
        float *array1 = new float[5];
        for(int i=0;i<5;i++)
        {
            *(array1+i) = static_cast <float> (rand()) / static_cast <float> (RAND_MAX/100.0);
            printf("%.2f; ",*(array1+i)),cout<<" ";
        }
        cout<<"\nLos valores del vector 2 son: ";
        float *array2 = new float[5];
        for(int i=0;i<5;i++)
        {
            *(array2+i) = static_cast <float> (rand()) / static_cast <float> (RAND_MAX/100.0);
            printf("%.2f; ",*(array2+i)),cout<<" ";
        }
        float sum = 0;
        for(int i=0;i<5;i++)
            sum += *(array1+i) * *(array2+i);
        cout<<"\nEl producto punto de ambos vectores es: ",printf("%.2f; ",sum),cout<<endl;
        delete[] array1;
        delete[] array2;
    }
    cout<<endl;
}