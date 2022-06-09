#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
  int opstandard, opluxo, nstandard = 0, nluxo = 0, funx, funy;
  float lucrostandard = 0, lucroluxo = 0, x = 0, y = 0;

  cout << "A fabrica tem disponivel 40 funcionarios." << endl;
  cout << "A fabrica standard suporta até 24 funcionarios. Designe desses 40 a quantidade de funcionarios para essa fabrica" << endl;
  cin >> funx;
  cout << "A fabrica luxo suporta até 32 funcionarios. Designe desses 40 a quantidade de funcionarios para essa fabrica" << endl;
  cin >> funy;
  if (funx > 24 || funy > 32){
    cout << "Erro quantidade excessiva de funcionarios.";
  }
  if (funx + funy > 40 ){
    cout << "Erro, quantidade de operarios excedeu o limite";
  }

  cout << "Digite o lucro da fabrica standard: " << endl;
  cin >> x;
  cout << "Digite o lucro da fabrica luxo: " << endl;
  cin >> y;
  lucrostandard = x;
  lucroluxo = y;
  nstandard = x / funx;
  nluxo = y/ funy;
  
  opstandard = nstandard * 1;
  opluxo = nluxo * 2;

  cout << "O lucro do radio standard. " << lucrostandard << endl;
  cout << "O lucro do radio luxo. " << lucroluxo << endl;
  cout << "A quantidade de radio standard. " << nstandard << endl;
  cout << "A quantidade de radio luxo. " << nluxo << endl;
  cout << "A quantidade de operarios utilizados na producao de radio standard " << opstandard << endl;
  cout << "A quantidade de operarios utilizados na producao de radio luxo " << opluxo << endl;
  return 0;
}