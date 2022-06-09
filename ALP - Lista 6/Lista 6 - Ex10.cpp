#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
#define N 15
int main () {
  int i = 0;
  float notas[N];
  float media = 0, soma = 0;
  for (i=0; i < N ; i++){
    cout << "Digite  nota do aluno " << i+1 << " :" << endl;
    cin >> notas[i];

    soma += notas[i];
  }

  media = (float)(soma)/N;
  cout << "A media geral da classe é: " << media << endl;
  return 0;
}