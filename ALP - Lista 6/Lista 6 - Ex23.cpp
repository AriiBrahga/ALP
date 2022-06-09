#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
#define N 5
int main () {
  float prod = 0, mult[N];
  int i = 0;
  float num[N], num1[N];

  for (i=0; i < N ; i++){
    cout << "Digite um numero do vetor: " << endl;
    cin >> num[i];
  }
  for (int i = 0; i < N; i++){
    cout << "Digite outro numero: " << endl;
    cin >> num1[i];
  }
  for (int i = 0; i < N; i++){
    mult[i] = num1[i] * num[i];
    prod += mult[i];
  }

  for (int i = 0; i < N; i++){
    cout << "A multiplicacao entre os vetores em sequencia é: " << mult[i] << endl;
  }
  cout << "O produto escalar entre os elementos é: " << prod;
  return 0;
}