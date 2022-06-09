#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int Estado;
  float valor; 
  float imposto;
  cout << "Digite o preço do produto: " << endl;
  cin >> valor;
  cout << "Digite o Estado, nos seguintes mumero MG - 1, MS - 2, SP - 3, RJ - 4: " << endl;
  cin >> Estado;

  switch (Estado) {
    case 1: imposto = (valor * 0.07 );
      break;
    case 2: imposto = (valor * 0.08 );
      break;
    case 3: imposto = (valor * 0.12 );
      break;
    case 4: imposto = (valor * 0.15 );
      break;
    default: cout << "O Estado não esta constatado no sistema" << endl;
      break;
  }
  if (Estado >= 5){
    cout << "Digite outro estado" << endl;
    return 0;
  }
  cout << "O valor do produto no estado escolhido é: " << imposto + valor << endl;
  return 0;
}