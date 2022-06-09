#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
#define N 100
int main () {
  int i = 0, j= 0;
  int num[N], num1[N];
  for (int i = 0; i <= N; i++){
    num[i] = i;

    if (num [i] % 7 != 0){
      num1[j] = num[i];
      j++;
    }
  }
  for (int j = 0; j <= N; j++){
    cout << num1[j] << endl;
  }
  return 0;
}