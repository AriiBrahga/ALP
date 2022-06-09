#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int salario, salarionovo;
  cout << "Informe seu salario: " << endl;
  cin >> salario;
  if (salario < 500){
    salarionovo = salario + (salario*0.3);
    cout << "Seu novo salario é: " << salarionovo << endl;
    return 0;
  }
  else if (salario >= 500){
    cout << " Voce não tem direito ao aumento. " << endl;
    return 0;
  }
}