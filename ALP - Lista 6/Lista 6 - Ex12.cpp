#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
#define N 5
int main () {
  int i = 0;
  float num[N];
  float media = 0, soma = 0, maior = 0, menor = 50;
  for (i=0; i < N ; i++){
    cout << "Digite  o numero " << i+1 << " :" << endl;
    cin >> num[i];
    if(num[i] > maior){
      maior = num[i];
    }
    if (num[i] <= menor){
      menor = num[i];
    }
    soma += num[i];
  }
  media = (float)(soma)/N;
  for (int i = 0; i < N; i++){
    cout << num[i] << endl;
  }
  cout << "O menor numero é: " << menor << endl;
  cout << "O maior numero é: " << maior << endl;
  cout << "A media geral é: " << media << endl;
  return 0;
}