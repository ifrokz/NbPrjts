
#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

void setNewVal(int &, int&, int nuevo1, int nuevo2);
int main(int argc, char** argv) {
    int num1;
    int num2;
    
    cin >> num1 >> num2;
    setNewVal(num1,num2,num1*1.5,num2*1.5);
    cout << "Los nuevos valores son: " << num1 << "," << num2 << endl;
    getch();
    return 0;
}


void setNewVal(int& val1, int& val2, int nuevo1, int nuevo2){
    cout << "Los valores pasados a la función son: " << val1 << "," << val2 << endl;
    val2 = nuevo2; 
    val1 = nuevo1;
}

