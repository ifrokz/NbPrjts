#include <cstdlib>
#include <stdlib.h>
#include <iostream>

using namespace std;

void pedirNotas();
void mostrarNotas();

int numCalif, *calif;

int main(int argc, char** argv) {
    
    pedirNotas();
    mostrarNotas();
    system("pause");
    return 0;
}

void pedirNotas(){
    cout << "Digita el numero de calificaciones " << endl;
    cin >> numCalif;
    
    //calif = new int[10];
     calif = new int[numCalif];
    for(int i = 0; i< numCalif ; i++){
        cout << "Ingresa una nota: " << endl;
        cin >> calif[i];
    }
}

void mostrarNotas(){
    cout << "\n" << endl;
    for(int i = 0; i < numCalif; i++){
        cout << "Nota " << i+1 << ": " << calif[i] << endl;
    }
}