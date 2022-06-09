#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
#define N 10
int main () {
  int i = 0, j = 0, h = 0;
  int num[N], impar[N];

  for (i=0; i < N ; i++){
    cout << "Digite  um numero entre o intervalo de 0 a 50: " << endl;
    cin >> num[i];
    if (num[i] % 2 == 0){
    }
    else{
      impar[j++] = num[i];
    }
  }
  for (int i = 0; i < N; i++){
    cout << "Numero digitado: " << num[i] << endl;
  }
  for (int h = 0; h < j; h++){
    cout << "Impar: " << impar[h] << endl;
  }
  return 0;
}