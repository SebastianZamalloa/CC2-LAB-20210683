#include "iostream"
using namespace std;
template<typename T>
class specialArray
{
    private:
        T a,b,c;
        T max()
        {
            T maxima = a;
            if(a>maxima)
                maxima = a;
            else if(b>maxima)
                maxima = b;
            else if(c>maxima)
                maxima = c;
            return maxima;
        }
        T min()
        {
            T minory = a;
            if(a<minory)
                minory = a;
            else if(b<minory)
                minory = b;
            else if(c<minory)
                minory = c;
            return minory;
        }
    public:
        specialArray(T auxa, T auxb, T auxc):a(auxa),b(auxb),c(auxc){}
        ~specialArray(){}
        T* maxMin()
        {
            T* mptr = new T[2];
            *mptr=max();*(mptr+1)=min();
            return mptr;
        }

};