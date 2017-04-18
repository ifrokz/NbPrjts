
#include <conio.h>
#include <iostream>
#include <cstdlib>

using namespace std;

void pasarArreglo(int arr[], int n);

void cambiaArreglo(int (&arr)[5], int n);
void mostrarArreglo(int arr[], int n );

int main(int argc, char** argv) {
    const int tam = 5;
    int numeros[tam] = {0,1,2,3,4};
    
    cambiaArreglo(numeros, tam);
    mostrarArreglo(numeros, tam);
    return 0;
}

void cambiaArreglo(int (&arr)[5], int n ){
    for(int i = 0; i< n ; i++){
        arr[i] = arr[i]+1;
    }
}

void mostrarArreglo(int arr[], int n ){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " " << endl;
    }
}
/*

int main(){
    const int tam = 5;
    int numeros[tam] = {0,1,2,3,4};
    
    pasarArreglo(numeros, tam);
    
    return 0;
}

void pasarArreglo(int arr[], int n ){
    for(int i = 0; i< n ; i++){
        arr[i] = arr[i]+1;
        cout << arr[i] << endl;
    }
}*/