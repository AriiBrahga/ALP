#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
#define N 5
int main () {
  int i = 0;
  float num[N];
  float pos = 0, posi = 0, maior = 0, menor =1000;
  for (i=0; i < N ; i++){
    cout << "Digite  o numero " << i+1 << " :" << endl;
    cin >> num[i];
    if(num[i] > maior){
      maior = num[i];
      pos = i;
    }
    else if (num[i] <= menor){
      menor = num[i];
      posi = i;
    }
  }
  cout << "O menor numero é: " << menor << " e se encontra na posicao: " << posi << endl;
  cout << "O maior numero é: " << maior << " e se encontra na posicao: " << pos << endl;
  return 0;
}