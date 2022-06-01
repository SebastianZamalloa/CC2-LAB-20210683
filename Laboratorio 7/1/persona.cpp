#include "persona.h"
#include "iostream"

using namespace std;

persona::persona():nombre("indefinido"),edad(0){}
persona::~persona(){}
void persona::setEdad(int auxEdad){edad=auxEdad;}
void persona::setNombre(string auxNombre){nombre=auxNombre;}
void persona::imprimir(){cout<<"\nMi nombre es: "<<nombre<<"\nMi edad es: "<<edad<<" años\n\n";}