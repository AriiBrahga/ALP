#include <iostream>

using namespace std;

int calc_div(int n){
    int ndiv = 0;
    for (int i = 1 ; i <= n; i++){
        if(n % i == 0){
            ndiv++;
        }
    }
    cout << "O numero de divisores inteiros do numero digitado eh: " << ndiv << endl;
}

int main(){
    int n;
    cout << "Digite um valor inteiro positivo: ";
    cin >> n;

    calc_div(n);

    return 0;
}