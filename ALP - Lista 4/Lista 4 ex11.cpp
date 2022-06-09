#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int salario, salarionovo;
  cout << "Informe seu salario: " << endl;
  cin >> salario;
  if (salario <= 300){
    salarionovo = salario + (salario*0.15);
    cout << "Seu novo salario é: " << salarionovo << endl;
    return 0;
  }
  else if (salario > 300 && salario <= 600){
    salarionovo = salario + (salario * 0.10);
    cout << "Seu novo salario é: " << salarionovo << endl;
    return 0;
  }
  else if (salario > 600 && salario <= 900){
    salarionovo = salario + (salario * 0.05);
    cout << "Seu novo salario é: " << salarionovo << endl;
    return 0;
  }
  else if (salario > 900){
    cout << "Não teve aumento portanto seu salario continua: " << salario << endl;
    return 0;
  }
}