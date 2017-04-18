/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on 15 de abril de 2017, 6:12
 */

#include <cstdlib>
#include <iostream>

template <class TIPOD>
void mostrarAbs(TIPOD numero);

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n1 = 32;
    int n2 = -16;
    
    float n3 = 32.32;
    float n4 = -16.16;
    
    double n5 = 65.656565;
    double n6 = -43.434343;
    
    mostrarAbs(n1);
    mostrarAbs(n2);
    
    mostrarAbs(n3);
    mostrarAbs(n4);
    
    mostrarAbs(n5);
    mostrarAbs(n6);
    return 0;
}
template <class TIPOD>
void mostrarAbs(TIPOD numero){
    if(numero < 0){
        numero *= -1;
    }
    
    cout << "El valor absoluteo dle numero es: " << numero <<endl;
}