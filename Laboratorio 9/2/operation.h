#include "iostream"
using namespace std;

template<typename A, typename B>
class operation
{
    private:
        A a;
        B b;
    public:
        operation(A ax, B bx):a(ax),b(bx){}
        ~operation(){}
        float* result()
        {
            float* opPtr = new float[4];
            *opPtr = a+b;
            *(opPtr+1) = a-b;
            *(opPtr+2) = a*b;
            *(opPtr+3) = a/b;
            return opPtr;
        }
};
