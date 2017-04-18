#include <iostream>
#include <cstdlib>

using namespace std;

int factorial(int);
int main(int argc, char** argv) {

    cout << "\n" << factorial(5) << endl;
    
    return 0;
}

int factorial(int n){
    if(n == 0){
        n = 1;
    }else{
        n = n * factorial(n-1);
    }
    
    return n;
}
