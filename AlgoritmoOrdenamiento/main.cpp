
#include <cstdlib>
#include <iostream>
using namespace std;

void burbuja(){
    int numeros[] = {5,2,1,3,4};
    int aux;

    
    for(int i = 0;i < sizeof(numeros)/sizeof(*numeros);i++){
        for(int j = 0; j < sizeof(numeros)/sizeof(*numeros);j++){
            if(numeros[j] > numeros[j+1]){
                aux = numeros [j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }
    
    for(int i = 0;i < sizeof(numeros)/sizeof(*numeros);i++){
        cout << numeros[i] << " " ;
    }
    cout << endl;
    for(int i = sizeof(numeros)/sizeof(*numeros)-1;i >= 0;i--){
        cout << numeros[i] << " " ;
    }  
}


void ordenado(){
    int numeros[] = {1,5,4,2,3};
    int aux,i,pos;
    
    for(i = 0;i < sizeof(numeros)/sizeof(*numeros);i++){
        pos = i;
        aux = numeros[pos];
        while(pos > 0 && numeros[pos] < numeros[pos-1]){
            numeros[pos]=numeros[pos-1];
            numeros[pos-1] = aux;
            pos--;
        }
    }
    
    cout << "\nOrden ascendente: ";
    for(i= 0; i< sizeof(numeros)/sizeof(*numeros);i++){
        cout << numeros[i] << " ";
    }
    
    cout << "\nOrden descendente: ";
    for(i = sizeof(numeros)/sizeof(*numeros)-1;i >= 0;i--){
        cout << numeros[i] << " " ;
    } 
}

void seleccion(){
    int numeros[] = {5,1,3,4,2};
    int aux,i,j,max,pos;
    
    for(i = 0; i < sizeof(numeros)/sizeof(*numeros); i++){
       max = 0;
       for(j = i;j < sizeof(numeros)/sizeof(*numeros);j++){
           if(numeros[j] >= max){
               max = numeros[j];
               pos = j;
           }
       }
       aux = numeros[pos];
       numeros[pos] = numeros[i];
       numeros[i] = aux;
    }
    
    cout << "\nOrden descendente: ";
    for(i= 0; i< sizeof(numeros)/sizeof(*numeros);i++){
        cout << numeros[i] << " ";
    }
    
    cout << "\nOrden ascendente: ";
    for(i = sizeof(numeros)/sizeof(*numeros)-1;i >= 0;i--){
        cout << numeros[i] << " " ;
    } 
}

int main(int argc, char** argv) {
    seleccion();
    //ordenado();
    //burbuja();
    return 0;
}

