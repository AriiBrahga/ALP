#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () { 
  int A[6];
  int soma, i=0;

  for (int i = 0; i <= 5; i++){
    cout << "Digite o numero do vetor " << i+1 << " :" << endl;
    cin >> A[i];
  }
  soma = A[0] + A[1] + A[5];
  cout << "A soma dos vetores A[0] + A[1] + A[5] é igual a: " << soma << endl;
  A[3] = 100;
  for (int i = 0; i <= 5; i++){
    cout << "Os numeros do vetor são: " << A[i] << endl;
  }
  return 0;
}