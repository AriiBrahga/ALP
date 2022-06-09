#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
#define N 200
int main () { 
  int A[N];
  int i=0;

  for (int i = 0; i <= N; i++){
    cout << "Digite o numero do vetor " << i+1 << " :" << endl;
    cin >> A[i];
  }
  for (int i = N-1; i >= 0; i--){
  cout << A[i] << endl;
  }
  return 0;
}