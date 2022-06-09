#include <iostream>

using namespace std;

int calculo(int num){
    float fracao = 0, frac = 0;
   
    for(float i = 1; i <= num; i++){

        fracao = (float) fracao + (1/i);
    }
    frac += fracao;
    cout << frac << endl;
}

int main(){
    int n;
    cout << "Digite um valor inteiro positivo: ";
    cin >> n;

    calculo(n);

    return 0;
}