#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

#define N 10
using namespace std;
int main () {
  int num[N] = {0};
  int num1[N] = {0};
  int q1 = 0;

  for (int i = 0; i < N; i++){
    cout << "Digite o valor " << i+1 << ": " << endl;
    cin >> num[i];
  }
  for (int i = 0; i < N ; i++){
    int j;
    for (j = 0; j < q1; j++){
      if(num[i] == num[j]){
        break;
      }
    }
    if (j == q1){
      num1[q1] = num[i];
      q1++;
    }
  }
  for (int i = 0; i < q1; i++){
    cout << num1[i] << " ";
  } 
  return 0;
}