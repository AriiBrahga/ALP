#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int n1, n2, media, div, sub, mult;
  int escolha;
  int equacao;
  cout << "Digite dois numeros: " << endl;
  cin >> n1 >> n2;
  cout << "Escolha uma das op��es abaixo: \n 1 - A media de dois n�meros \n 2 - A subtra��o de dois n�meros \n 3 - A multiplica��o de dois n�meros \n 4 - O quociente inteiro de uma divis�o" << endl;
  cin >> escolha;
  switch (escolha){
    case 1 : equacao = (n1+n2)/2;
      break; 
    case 2 : if(n1 > n2){  
    equacao = n1 - n2;
    }
    else if (n2 > n1)
    equacao = n2 - n1;
      break;
    case 3 : equacao = n1 * n2;
      break;
    case 4 : if (n2 != 0){ 
    equacao = n1/n2;
    }
    else if (n2 == 0){
    cout << "Erro";
    return 0;
    }
      break;
    default : cout << "Erro";
    return 0;
  }
  cout << "O resultado da equa��o escolhida �: " << equacao << endl;
  return 0;
}