#include <iostream>

using namespace std;

int calc_soma(int num){
    int soma = 0;
   
    for(int i = 0; i <= num; i++){
        soma+=i;
    }
    cout << soma << endl;
}

int main(){
    int n;
    cout << "Digite um valor inteiro positivo: ";
    cin >> n;

    calc_soma(n);

    return 0;
}