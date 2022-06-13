#include "iostream"
using namespace std;

template<typename T, int n>
class orderateArray
{
    private:
        T*arrayPtr;
    public:
        orderateArray(T arrayAjeno[]):arrayPtr(arrayAjeno){}
        ~orderateArray(){}
        void print()
        {
            for(int i=0; i<n; i++)
                cout<<*(arrayPtr+i)<<" ";
        }
        /* Voy a ignorar la parte donde menciona poner como parametros las posiciones
         ya que no le aporta nada a la funcion */
        void ascendant() 
        {
            for(int k=1; k<n; k++)
            {
                T temp = *(arrayPtr+k);
                int j= k-1;
                while(j>=0 && temp <= *(arrayPtr+j))
                {
                    *(arrayPtr+j+1) = *(arrayPtr+j);
                    j--;
                }
                *(arrayPtr+j+1) = temp;
            }
        }
        void descendant()
        {
            for(int k=1; k<n; k++)
            {
                T temp = *(arrayPtr+k);
                int j= k-1;
                while(j>=0 && temp >= *(arrayPtr+j))
                {
                    *(arrayPtr+j+1) = *(arrayPtr+j);
                    j--;
                }
                *(arrayPtr+j+1) = temp;
            }
        }
        
};