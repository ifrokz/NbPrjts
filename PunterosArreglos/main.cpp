
#include <iostream>
#include <cstdlib>

using namespace std;

void recorrerArregloPunteros(int num[]);
void ejemplo();
int main(int argc, char** argv) {

    int num[] = {9,1,2,3,4};
    //recorrerArregloPunteros(num);
    ejemplo();
    
    return 0;
}

void recorrerArregloPunteros(int num[]){
    
    int *dir_num = &num[0];
    
    for(int i = 0;i < 5; i++){
        cout << "Elemento del vector [" << i << "]:" << *dir_num++ << endl;
    }
    dir_num = &num[0]; cout << endl;
    for(int i = 0;i < 5; i++){
        cout << "Elemento del vector [" << i << "]:" << dir_num++ << endl;
    }
}

void ejemplo(){
    int num[] = {0,1,2,3,4,5,6,7,8,9,10,12,15,18,9889};
    int *dirnum = &num[0];
    
    for(int i = 0; i <15; i++){
        cout << "El número con el índice [" << i << "] con valor de:" << *dirnum << " es ";
        if(*dirnum++ % 2 == 0){
            cout << "par" << endl;
        }else{
            cout << "impar" << endl;
        }
    }
    dirnum = &num[0];
}