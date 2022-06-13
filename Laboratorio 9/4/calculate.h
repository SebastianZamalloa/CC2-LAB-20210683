#include "iostream"
using namespace std;

template<typename T,unsigned int size>
class calculateArray
{
    private:
        T miArray[size]{};
    public:
        calculateArray(T arrayAjeno[])
        {
            for(int i = 0; i<size; i++)
                miArray[i] = arrayAjeno[i];
        }
        ~calculateArray(){}
        T max()
        {
            T maxima = miArray[0];
            for(T item : miArray)
            {
                if(item>maxima)
                    maxima = item;
            }
            return maxima;
        }
        T min()
        {
            T minimo = miArray[0];
            for(T item : miArray)
            {
                if(item<minimo)
                    minimo = item;
            }
            return minimo;
        }
        void print()
        {
            for(T item : miArray)
                cout<<item<<" ";
        }
};
