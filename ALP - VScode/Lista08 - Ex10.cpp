#include <iostream>
#include <math.h>

using namespace std;

bool poui_verif(int num){
    if(num % 2 == 0){
        return true;
    }
    if (num % 2 != 0){
        return false;
    }
    
}

int main(){
    int num;
    bool r;

    cout << "Digite um numero inteiro: " << endl;
    cin >> num;

    r = poui_verif(num);
    cout << "O numero digitado recebera em booleano as seguintes respostas: \n1 - Para par; \n2 - Para impar" << endl;
    cout << "O  resultado do numero em booleano eh: " << r << endl;

    return 0;
}