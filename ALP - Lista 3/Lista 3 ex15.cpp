#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int n1, n2, soma, div, sub, mult;
  int escolha;
  int equacao;
  cout << "Digite dois numeros: " << endl;
  cin >> n1 >> n2;
  cout << "Escolha uma das op��es abaixo: \n A - A soma de dois n�meros \n 2 - A subtra��o de dois n�meros \n 3 - A multiplica��o de dois n�meros \n 4 - O quociente inteiro de uma divis�o \n 5 - Mensagem de erro (op��o inv�lida)." << endl;
  cin >> escolha;
  soma = (n1 + n2);
  div = (n1 / n2);
  mult = (n1 * n2);
  sub = (n1 - n2);

  switch (escolha){
    case 1 : equacao = soma;
      break; 
    case 2 : equacao = sub;
      break;
    case 3 : equacao = mult;
      break;
    case 4 : equacao = div;
      break;
    case 5 : cout << "Erro, tente novamente.";
  }
  cout << "O resultado da equa��o escolhida �: " << equacao << endl;
  return 0;
}