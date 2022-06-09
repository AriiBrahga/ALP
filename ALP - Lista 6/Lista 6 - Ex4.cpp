#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () { 
  int A[10], cont=0;
  int i=0;

  for (int i = 0; i <= 9; i++){
    cout << "Digite o numero do vetor " << i+1 << " :" << endl;
    cin >> A[i];
    if( A[i] % 2 == 0 ){
      cont++;
    }
  }
  cout << "Os numeros do vetor par são: " << cont << endl;

  return 0;
}