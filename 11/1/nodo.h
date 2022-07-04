#pragma once
#include "iostream"
using namespace std;

class nodo
{
    protected:
        int value;
        nodo* next;
    public:
        nodo():value(0),next(NULL){}
        nodo(int xval):value(xval),next(NULL){}
        ~nodo(){}
        void setNext(nodo*x){this->next = x;}
        nodo*getNext(){return next;}
        int getValue(){return value;}
};