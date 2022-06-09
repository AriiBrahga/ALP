#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
  int i = 0, n = 0;
  float num[10] = {0};

  for(int i = 0; i < 10; i++){
    cout << "Digite o " << i+1 << " numero:" << endl;
    cin >> num[i];
  }
  for (int i = 9; i >=0; i--){
    cout << num[i] << endl;
  }
  return 0;
}