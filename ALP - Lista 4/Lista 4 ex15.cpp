#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int tipo;
  float valor, valorcorrigido;
  cout << "Escolha o tipo de investimento: \n 1-Poupança; \n 2-Fundos de renda fixa. " << endl;
  cin >> tipo;
  cout << "Informe o valor do investimendo: " << endl;
  cin >> valor;
  switch (tipo){
    case 1 : valorcorrigido = valor * 0.3;
      break;
    case 2 : valorcorrigido = valor * 0.4;
      break;
    default : cout << "Erro";
  }
  cout << "O valor corrigido de acordo com o tipo de investimento é : " << valorcorrigido << endl;
  return 0;
}