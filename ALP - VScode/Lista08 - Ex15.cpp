#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

string triangulo_def(float x, float y, float z){
    if(x == y && y == z && z == x){
        cout << "O Triangulo formado por x, y, z, eh Equilatero. " << endl;
    }
    else if(x != y && x == z ||  x == y && x != z || x == y && z != y){
        cout << "O Triangulo formado por x, y, z, eh Isosceles." << endl;
    }
    else if(z != x && z != y && y != x){
        cout << "O Triangulo formado por x, y, z, eh Escaleno " << endl;
    }
}

int main(){
    float x, y, z;

    cout << "Digite o valor X: ";
    cin >> x;
    cout << "Digite o valor Y: ";
    cin >> y;
    cout << "Digite o valor Z: ";
    cin >> z;

    triangulo_def(x,y,z);

    return 0;
}