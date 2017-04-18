
#include <cstdlib>
#include <iostream>
using namespace std;

struct albumes_artista{
    char titulo[30];
    int numCanciones;
};
struct artista{
    char name[30];
    int edad;
    struct albumes_artista albumes = {"Nueva Generación",5};
};

int main(int argc, char** argv) {

    struct artista rels = {"RelsB",24};
    // fflush(stdin);  // Limpia el buffer del input standard (teclado) 
    cout << rels.albumes.numCanciones;
    return 0;
}

