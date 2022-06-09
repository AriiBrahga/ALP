#include <iostream>

using namespace std;

int calculo(int x, int z){
    int pot = 0;
    for (int i = 1; i < z; i++){
        pot += (x * x);
    }
    cout << "O valor de x elevado a z eh: " << pot << endl;
}


int main(){
    int x, z;
    cout << "Digite um valor inteiro positivo: ";
    cin >> x;
    cout << "Digite o numero da potencia: ";
    cin >> z;

    calculo(x, z);

    return 0;
}