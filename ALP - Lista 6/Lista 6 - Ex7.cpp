#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
#define N 10
int main () { 
  int A[N], maior=0, pos;
  int i=0;

  for (int i = 0; i <= N; i++){
    cout << "Digite o numero do vetor " << i+1 << " :" << endl;
    cin >> A[i];
    if(A[i] > maior){
      maior = A[i];
      pos = i;
    }
  }
  
  for (int i = 0; i <= N; i++){
    cout << "O vetores são: " << A[i] << endl;
  }
  cout << "O maior vetor se encontra na posicao: " << pos << endl;
  cout << "O maior numero é: " << maior << endl;
  return 0;
}