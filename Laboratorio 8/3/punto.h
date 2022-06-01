#pragma once
#include "iostream"
using namespace std;
class punto
{
    private:
        int X;
        int Y;
    public:
        punto(int,int);
        ~punto();
        int getX();
        int getY();
        void setX(int);
        void setY(int);
};