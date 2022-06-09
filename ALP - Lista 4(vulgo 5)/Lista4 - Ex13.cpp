#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
  int tipo, i = 0; 
  int nc = 1;
  float pkwh = 0, qntkwh = 0, tap = 0, mcons = 0, menorcons = 0, media = 0; 
  float total3 = 0, som3 = 0, totalr = 0, totalc = 0, totali = 0;
  while(nc){
    cout << "Digite o codigo do consumidor: " << endl;
    cin >> nc;
    cout << "A quantidade de Kwh consumido no mes: " << endl;
    cin >> qntkwh;
    cout << "Digite o preco do Kwh consumido: " << endl;
    cin >> pkwh;
    cout << "O tipo do consumidor: 1 - Residencial;\n2 - Comercial;\n3 - Industrial" <<endl;
    cin >> tipo;

    if (qntkwh > mcons){
      menorcons = mcons;
      mcons = qntkwh;
    }
    else if(qntkwh < menorcons){
      mcons = menorcons;
      menorcons = qntkwh;
    }

    if (tipo == 1){
      totalr += qntkwh;
    }
    else if(tipo == 2){
      totalc +=qntkwh;
    }
    else if (tipo == 3){
      totali += qntkwh;
    }
    i++;
    som3 +=qntkwh;
    media = (float)som3 / i;
    tap = qntkwh * pkwh;
    cout << "O numero do consumidor: " << nc << endl;
    cout << "Quantidade consumida: " << qntkwh << endl;
    cout << "Total a pagar: " << tap << endl;
  }

  cout << "Maior consumo: " << mcons << endl;
  cout << "Menor consumo: " << menorcons << endl;
  cout << "Consumidor Residencial: " << totalr << endl;
  cout << "Consumidor Comercial: " << totalc << endl;
  cout << "Consumidor Industrial: " << totali << endl;
  cout << "Média: " << media << endl;

  return 0;
}