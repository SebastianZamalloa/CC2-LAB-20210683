#include "iostream"
#include "clasedisco.h"
using namespace std;

ClaseDisco::ClaseDisco(int auxdur,string auxtipo,float auxpeso,string auxnombre):ClaseMultimedia(auxdur,auxtipo,auxpeso){nombreDisco = auxnombre;}
ClaseDisco::~ClaseDisco(){}
void ClaseDisco::publicar(){cout<<"\nPUBLICANDO...\n\n";}
void ClaseDisco::imprimir(){cout<<"\nArchivo Multimedia:\nNombre del disco: "<<nombreDisco<<"\nDuracion: "<<duracion<<" segundos\nTipo de archivo: "<<tipoMultimedia<<"\nPeso del archivo: "<<peso<<" kb\n\n";}