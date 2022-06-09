#include <iostream>

using namespace std;

int calc_maiormenor(int num, int maior, int menor){
    
    for (int i = 0; i < 5; i++){

        cout << "Digite o numero: " << endl;
        cin >> num;
        if(i == 0){
            maior = num;
            menor = num;
        }

        if(num > maior){
            maior = num;
        }
        else if(num < menor){
            menor = num;
        }
    }
    cout << "O maior numero eh: " << maior << " E o menor numero eh: " << menor << endl;
}

int main(){
    int num, maior = 0, menor = 0;

    calc_maiormenor(num, maior, menor);
    
    return 0;
}