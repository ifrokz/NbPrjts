#include <cstdlib>
#include <iostream>
using namespace std;

void secuencial(){
    int numeros[] = {5,1,3,2,4};
    int i,dato;
    bool existe = false;
    dato = 51;
    for(i = 0; i < sizeof(numeros)/sizeof(*numeros);i++){
        if(dato == numeros[i]){
            cout << "Has encontrado el numero " << dato << " en la posición número " << i+1;
            existe = true;
            break;
        }
    }
    
    if(!existe){
        cout << "El número deseado no existe.";
    }
}


void binaria(){
    int numeros[] = {1,2,3,4,5,8,15,89};
    int inf,sup,mitad,dato;
    bool encontrado = false;
    
    dato = 15;
    
    inf = 0;
    sup = sizeof(numeros)/sizeof(*numeros);
    
    while(inf < sup){
        mitad = (inf+sup)/2;
        
        if(dato == numeros[mitad]){
            encontrado = true;
            break;
        }else if(inf == sup-1){
            break;
        }else if(dato < numeros[mitad]){
            sup = mitad;
        }else if(dato > numeros[mitad]){
            inf = mitad;
        }
        cout << inf << ","<<sup << " | " <<mitad << endl;
    }
    
    if(encontrado){
        cout << "Se ha encontrado el número " << dato << " en la posicion: " <<  mitad;
    }else{
        cout << "No se ha encontrado el numero deseado";
    }
}

int main(int argc, char** argv) {
    binaria();
    //secuencial();
    return 0;
}

