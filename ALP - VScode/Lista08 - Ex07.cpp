#include <iostream>

using namespace std;

bool calc_perfeito(int n){
    int soma = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            soma += i; 
        }       
    }
    if(soma == n){
        return true;
    }
    return false;
}


int main(){
    int num;

    cout << "Digite um numero: " << endl;
    cin >> num;

    if (calc_perfeito(num)){
        cout << "Eh um numero perfeito" << endl;
    }
    else{
        cout << "Nao Eh um numero perfeito"  << endl;
    }

    return 0;
}