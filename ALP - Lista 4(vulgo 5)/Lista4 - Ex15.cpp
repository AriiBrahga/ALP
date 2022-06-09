#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
  int qntdt = 0, nconta = 1, codtran;
  float vbmd = 0, taxa = 0, vtran = 0, saldo = 0;

  cout << "Valor do balanco minimo diario: " << endl;
  cin >> vbmd;
  cout << "Quantidade de transações: " << endl;
  cin >> qntdt;
  cout << "Taxa de servico: " << endl;
  cin >> taxa;

  while (qntdt != 0){
    cout << "Numero da conta: " << endl;
    cin >> nconta;
    cout << "Valor da transação: " << endl;
    cin >> vtran;
    cout << "Codigo da transacao: \n1 - Deposito. \n2 - Retirada: " << endl;
    cin >> codtran;

    if (codtran == 1){
      saldo = vtran + saldo;
    }
    else if (codtran == 2){
      saldo = saldo - vtran;
    }
    if(saldo < vbmd){
      saldo = saldo - saldo * taxa/100;
      cout << "Conta " << nconta << " NAO HA FUNDOS." << endl;
    }
    else {
      cout << "Conta " << nconta << " seu saldo é: " << saldo << endl;
    }
    qntdt--;

  }

  return 0;
}