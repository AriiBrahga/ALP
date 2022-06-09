#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
#define N 10
int main () { 
  int A[N], maior=0, menor =50;
  int i=0;

  for (int i = 0; i <= N; i++){
    cout << "Digite o numero do vetor " << i+1 << " :" << endl;
    cin >> A[i];
    if(A[i] > maior){
      maior = A[i];
    }
    if (A[i] <= menor){
      menor = A[i];
    }
  }
  cout << "O menor numero é: " << menor << endl;
  cout << "O maior numero é: " << maior << endl;
  return 0;
}