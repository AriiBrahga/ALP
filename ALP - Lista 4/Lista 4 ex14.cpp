#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int salario, salarionovo;
  cout << "Informe seu salario: " << endl;
  cin >> salario;
  if (salario <= 300){
    salarionovo = salario + (salario*0.50);
    cout << "Seu novo salario é: " << salarionovo << endl;
    return 0;
  }
  else if (salario > 300 && salario <= 500){
    salarionovo = salario + (salario * 0.40);
    cout << "Seu novo salario é: " << salarionovo << endl;
    return 0;
  }
  else if (salario > 500 && salario <= 700){
    salarionovo = salario + (salario * 0.30);
    cout << "Seu novo salario é: " << salarionovo << endl;
    return 0;
  }
  else if (salario > 700 && salario <= 800){
    salarionovo = salario + (salario * 0.20);
    cout << "Seu novo salario é: " << salarionovo << endl;
    return 0;
  }
  else if (salario > 800 && salario <= 1000){
    salarionovo = salario + (salario * 0.10);
    cout << "Seu novo salario é: " << salarionovo << endl;
    return 0;
  }
  else if (salario > 1000){
    salarionovo = salario + (salario * 0.05);
    cout << "Seu novo salario é: " << salarionovo << endl;
    return 0;
  }
}