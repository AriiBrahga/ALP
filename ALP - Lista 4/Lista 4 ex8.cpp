#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int salario, salarionovo;
  cout << "Informe seu salario: " << endl;
  cin >> salario;
  if (salario <= 300){
    salarionovo = salario + (salario*0.35);
    cout << "Seu novo salario é: " << salarionovo << endl;
    return 0;
  }
  else if (salario > 300){
    salarionovo = salario + (salario * 0.15);
    cout << "Seu novo salario é: " << salarionovo << endl;
    return 0;
  }
}