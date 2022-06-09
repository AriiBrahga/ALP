#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int n1, n2, soma, div, sub, mult;
  int escolha;
  int equacao;
  cout << "Digite dois numeros: " << endl;
  cin >> n1 >> n2;
  cout << "Escolha uma das opções abaixo: \n A - A soma de dois números \n 2 - A subtração de dois números \n 3 - A multiplicação de dois números \n 4 - O quociente inteiro de uma divisão \n 5 - Mensagem de erro (opção inválida)." << endl;
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
  cout << "O resultado da equação escolhida é: " << equacao << endl;
  return 0;
}