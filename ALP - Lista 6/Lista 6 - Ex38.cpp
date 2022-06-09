#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
#define N 10
int main () {
  int num[N];
  int aux = 0;
  for (int i = 0; i < N; i++){
    cout << "Digite um numero: " << endl;
    cin >> num[i];
  }
  for (int i = 0; i < N; i++){
    for (int j = i+1; j < N; j++){
      if (num[i] > num[j]){
        aux = num[j];
        num[j] = num[i];
        num [i] = aux;
      }
    }
  }
  for (int i = 0; i < N; i++){
    cout << num[i] << endl;
  }
  return 0;
}