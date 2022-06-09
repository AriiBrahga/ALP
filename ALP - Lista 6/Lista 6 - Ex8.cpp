#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
#define N 6
int main () { 
  int A[N];
  int i=0;

  for (int i = 0; i <= N; i++){
    cout << "Digite o numero do vetor " << i+1 << " :" << endl;
    cin >> A[i];
  }
  for (int i = N; i >= 0; i--){
  cout << "Vetor inverso: " << A[i] << endl;
  }
  return 0;
}