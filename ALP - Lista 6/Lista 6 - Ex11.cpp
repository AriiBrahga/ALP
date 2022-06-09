#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
#define N 10
int main () {
  int i = 0;
  float numero[N];
  float neg = 0, pos = 0;
  for (i=0;i<N;i++){
    cout << "Digite  nota do aluno " << i+1 << " :" << endl;
    cin >> numero[i];

    if (numero[i] >= 0){
      pos += numero[i]; 
    }
    else if(numero[i] < 0){
      neg++;
    }
  }

  cout << "A soma dos numeros positivos é: " << pos << endl;
  cout << "A quantidade de numeros negativos é: " << neg << endl;
  return 0;
}