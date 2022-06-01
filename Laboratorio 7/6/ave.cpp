#pragma once
#include "iostream"
#include "ave.h"
using namespace std;

ave::ave(string a = "Sin color", float b = 0.0, float c = 0.0, bool d = true):colorPrincipal(a),altura(b),peso(c),vuela(d){}
ave::~ave(){}
void ave::comer(){cout<<"\nSu ave esta comiendo\n";}
void ave::picotear(){cout<<"\nSu ave esta picoteando\n";}
void ave::volar(){if(vuela){cout<<"\nSu ave esta volando\n";}else{cout<<"\nSu ave no puede volar\n";}}
void ave::imprimir(){cout<<"\nColor: "<<colorPrincipal<<"\nPeso: "<<peso<<"\nAltura: "<<altura<<"\nPuede volar? "<<vuela<<endl<<endl;}