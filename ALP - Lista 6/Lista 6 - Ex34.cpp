#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
#define N 10
int main () {
  int i = 0, j= 0, x, n, s = 0;
  int num[N];
  while (i < N){
    cout << "Digite 10 numeros diferentes: " << endl;
    cin >> num[i];
    
    x = 0;
    s = 0;
    
    while(x < i && s != 1){
      if (num[x] == num[i]){
        cout << "Numero já digitado no vetor. " << endl;
        j = 1;
      }
      x++;
      if(j == 1){
        cout << "Digite outro numero: " <<  endl;
        cin >> num[i];
        j = 0;
        x = 0;
      }
    }
    i++;
  }
  for (int i = 0; i < N; i++){
    cout << "Numeros do vetor: " << num[i] << endl;
  }
  return 0;
}