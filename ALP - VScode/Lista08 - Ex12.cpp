#include <iostream>

using namespace std;

float peso_ideal(int h,int sexo){
    if (sexo == 1){
       cout << "Voce eh homem. Seu peso ideal eh: " <<  (72.7 * h) - 58 << endl;
    }
    else if (sexo == 2){
       cout << "Voce eh mulher. Seu peso ideal eh: " << (62.1 * h) - 44.7 << endl;
    }
}
int main(){
    float alt;
    int sexo;
    cout << "Digite sua altura: " << endl;
    cin >> alt;

    cout << "Digite seu sexo: \n1- MASCULINO \n2 - FEMININO." << endl;
    cin >> sexo;
    peso_ideal(alt,sexo);

    return 0;
}