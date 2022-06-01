#include "iostream"
#include "clasemultimedia.h"
using namespace std;

ClaseMultimedia::ClaseMultimedia(int auxdur,string auxtipo,float auxpeso):duracion(auxdur),tipoMultimedia(auxtipo),peso(auxpeso){}
ClaseMultimedia::~ClaseMultimedia(){}
void ClaseMultimedia::reproducir(){cout<<"\nREPRODUCIENDO...\n\n";}
void ClaseMultimedia::imprimir(){cout<<"\nArchivo Multimedia:\nDuracion: "<<duracion<<" segundos\nTipo de archivo: "<<tipoMultimedia<<"\nPeso del archivo: "<<peso<<" kb\n\n";}
