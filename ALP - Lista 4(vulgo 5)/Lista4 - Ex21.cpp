#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
  int i = 0, data1 = 0, data2 = 0, soma = 0;
  int mes1 = 0, mes2 = 0, ano1 = 0, ano2 = 0;
  
  while(data1 >= 0 && data2 >= 0){
    cout << "Digite os pares de dia: " << endl;
    cin >> data1 >> data2;
    cout << "Digite os pares de meses: " << endl;
    cin >> mes1 >> mes2;
    cout << "Digite os pares de ano: " << endl;
    cin >> ano1 >> ano2;


    while (data1 < data2){
      i++;
      data1++;
    }
    while (mes1 < mes2){
      if(mes1 == 1 || mes1 == 3 || mes1 == 5 || mes1 == 7 || mes1 == 8 || mes1 == 10 || mes1 == 12){
        soma = 31;
      }
        else if (mes1 == 4 || mes1 == 6 || mes1 == 9 || mes1 == 11){
          soma = 30;
        }
          else if (mes1 == 2){
            soma = 28;
          }
      i += soma;
      if (mes1 == 2 && ano1 % 4 == 0 && ano1 % 400 == 0 && ano1 % 100 == 0){
        i +=1;
      }
      mes1++;
    }
    while (ano1 < ano2){
      i += 365;

      if (ano1 % 4 == 0 && ano1 % 400 == 0 && ano1 % 100 == 0){
        i++;
      }
    ano1++;
    }
    cout << "A diferenca em dias entre as datas faladas é: " << i << endl;
  }
  return 0;
}