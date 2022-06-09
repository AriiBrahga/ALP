#include <iostream>

using namespace std;

int calculo(int num, int fatorial){
    float fracao = 0, frac = 0;
   
    for(float i = 1; i <= num; i++){
        
        fracao = (float) fracao + (1/(fatorial));
        fatorial = fatorial * i;
    }
    frac += fracao;
    cout << frac << endl;
}

int main(){
    int n, fat = 1;
    cout << "Digite um valor inteiro positivo: ";
    cin >> n;

    calculo(n, fat);

    return 0;
}