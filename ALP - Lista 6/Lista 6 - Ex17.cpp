#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
#define N 10
int main () {
  int i = 0, rep = 0;
  int num[N];

  for (i=0; i < N ; i++){
    cout << "Digite  o numero " << i+1 << " :" << endl;
    cin >> num[i];
    if (num[i] < 0){
      num[i] = 0;
    }
  }
  for (int i = 0; i < N; i++){
    cout << num[i] << endl;
  }

  return 0;
}