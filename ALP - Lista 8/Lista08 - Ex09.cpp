#include <iostream>
#include <locale.h>

using namespace std;

bool verif_num(int num) {
    if (num < 0){
        return false;
    }
    if (num >= 0){
        return true;
    }
}

int main (){
    int num;
    int retorno;

    cout << "Digite um numero: " << endl;
    cin >> num;

    retorno = verif_num(num);

    cout << "O numero digitado eh: " << retorno << endl;

    return 0;
}