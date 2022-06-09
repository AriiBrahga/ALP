#include <iostream>
#include <cmath>

using namespace std;

int main () {
  float altura;
  float peso; 
  int sexo;
  cout << "Digite sua altura: " << endl;
  cin >> altura;
  cout << "Digite seu sexo: Masculino digite 1 ou Feminino digite 2): " << endl;
  cin >> sexo;
  switch (sexo){
    case 1: peso = (72.7 * altura) - 58; 
      break;
    case 2: peso = (64.1 * altura) - 44.7;
      break;
  }
  if (sexo >=3){
    cout << "Erro, digite o sexo novamente" << endl;
    return 0;
  }
  cout << "O seu peso ideal, baseado na sua altura e sexo é: " << peso << endl;
  return 0;
}