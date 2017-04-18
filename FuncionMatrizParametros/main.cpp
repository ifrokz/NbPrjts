
#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

void mostrarMatriz(int m[][3],int,int);
int main(int argc, char** argv) {
    const int nCol = 3;
    const int nRow = 2;
    
    int matz[nRow][nCol] = {{1,2,3},{4,5,6}};
    mostrarMatriz(matz,nCol,nRow);
    
    system("pause");
    
    return 0;
}

void  mostrarMatriz(int m[][3], int col,int row){
    cout << "Mostrando matriz original: " << endl;
    for(int i = 0; i< row ; i ++){
        
        for(int j = 0; j < col ; j++ ){
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
}

