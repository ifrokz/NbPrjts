
#include <cstdlib>
#include <iostream>

using namespace std;


struct  Persona{
    char nombre [30];
    int edad;
}p1;

void pedirdatos();
void mostrardatos(Persona p);

int main(int argc, char** argv) {
    
    pedirdatos();
    mostrardatos(p1);
    
    system("pause");
    return 0;
}

void pedirdatos(){
    cout << "Digita tu nombre: "<< endl;
    cin.getline(p1.nombre,30,'\n');
    cout << "Digita tu edad" << endl;
    cin >> p1.edad;
}

void mostrardatos(Persona p){
    cout << "El nombre es: " << p.nombre << "\ny su edad es: " << p.edad << endl;
}

