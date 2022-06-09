#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () { 
  float A[10];
  int i=0;

  for (int i = 0; i <= 9; i++){
    cout << "Digite o numero do vetor " << i+1 << " :" << endl;
    cin >> A[i];
    A[i] = pow(A[i], 2);
  }
  
  for (int i = 0; i <= 9; i++){
    cout << "Os numeros do vetor são: " << A[i] << endl;
  }
  return 0;
}