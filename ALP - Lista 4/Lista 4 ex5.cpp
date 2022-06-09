#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int n1, n2, media, div, sub, mult;
  int escolha;
  int equacao;
  cout << "Digite dois numeros: " << endl;
  cin >> n1 >> n2;
  cout << "Escolha uma das opções abaixo: \n 1 - A media de dois números \n 2 - A subtração de dois números \n 3 - A multiplicação de dois números \n 4 - O quociente inteiro de uma divisão" << endl;
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
  cout << "O resultado da equação escolhida é: " << equacao << endl;
  return 0;
}