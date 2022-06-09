#include <iostream>
#include <cmath>

using namespace std;

int main () {
  float altura;
  float peso; 
  int sexo;
  cout << "Digite sua altura: " << endl;
  cin >> altura;
  cout << "Informe seu sexo: \n 1 - Masculino \n 2 - Feminino: " << endl;
  cin >> sexo;
  switch (sexo){
    case 1: peso = (72.7 * altura) - 58; 
      break;
    case 2: peso = (62.1 * altura) - 44.7;
      break;
    default: cout << "Erro";
  }
  cout << "O seu peso ideal, baseado na sua altura e sexo é: " << peso << endl;
  return 0;
}