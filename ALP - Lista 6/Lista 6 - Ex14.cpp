#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
#define N 10
int main () {
  int i = 0;
  float num[N], igual;

  for (i=0; i < N ; i++){
    cout << "Digite  o numero " << i+1 << " :" << endl;
    cin >> num[i];
  }
  for (int i=0; i <= N; i++){
    for (int j = i+1; j < N; j++){
      if (num[i] == num[j]){
        igual= num[j]; 
        cout << "Numeros iguais: " << igual << endl;        
      }
    }
  }

  return 0;
}