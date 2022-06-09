#include <iostream>
#include <cmath>

using namespace std;

int main () {
  float salario, salarionovo;
  cout << "Informe seu salario: " << endl;
  cin >> salario;
  if (salario <= 350){
    salarionovo = salario + 100 - (salario*0.07);
    cout << "Seu novo salario com a gratificação é: " << salarionovo << endl;
    return 0;
  }
  else if (salario > 350 && salario <= 600){
    salarionovo = salario + 75  - (salario * 0.07);
    cout << "Seu novo salario com a gratificação é: " << salarionovo << endl;
    return 0;
  }
  else if (salario > 600 && salario <= 900){
    salarionovo = salario + 50  - (salario * 0.07);
    cout << "Seu novo salario com a gratificação é: " << salarionovo << endl;
    return 0;
  }
  else if (salario > 900){
    salarionovo = salario + 35  - (salario * 0.07);
    cout << "Seu novo salario com a gratificação é: " << salarionovo << endl;
    return 0;
  }
}