

#include <cstdlib>
#include <iostream>

using namespace std;

void param(int *num,int n);
int main(int argc, char** argv) {
    /*int x = 10;
    
    int *y = &x;
    *y = 11;
    cout << *y << "," << x;*/
    int arr[] = {0,1,2,3,4};
    const int arrLong = 5;
    
    int *pos = &arr[0];
    
    param(pos,arrLong);
    
    for(int i = 0; i < arrLong ; i++){
        cout << arr[i] << ", ";
    }
    return 0;
}

void param(int *num, int n){
    for(int i = 0; i < n ; i++){
        cout << num[i] << ", ";
        num[i] ++;
    }
    cout << endl;
}
