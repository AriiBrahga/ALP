#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
    float valor;
    int qtd;

    cout << "|\tValor\t|\tQtd\t|\tLucro\t|" << endl;

    valor = 5;
    qtd = 120;
    while(valor >= 1) {
        cout << "|\t" << valor << "\t|\t" << qtd << "\t|\t" << valor * qtd - 200 << "\t|" << endl;
        valor -= 0.5;
        qtd += 26;
    }

    cout << "\n\n";
    
    for(valor = 5, qtd = 120; valor >= 1; valor -= 0.5, qtd += 26)
        cout << "|\t" << valor << "\t|\t" << qtd << "\t|\t" << valor * qtd - 200 << "\t|" << endl;

  return 0;
}