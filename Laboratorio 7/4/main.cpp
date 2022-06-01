#include "iostream"
#include "clasedisco.cpp"
using namespace std;

int main()
{
    ClaseMultimedia miMultimedia(203,".mp3",30);
    miMultimedia.imprimir();
    miMultimedia.reproducir();
    ClaseDisco miDisco(504,".mp4",4000,"Video llamativo");
    miDisco.publicar();
    miDisco.imprimir();
}