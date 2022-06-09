#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
int main () {
  int num[3][3];
  int somac1 = 0, somac2 = 0, somac3 = 0;

  for (int l = 0; l < 3; l++){
    for (int c = 0; c < 3; c++){
      cout << "Digite os valores da matriz " << l+1 << ", "<<  c+1 << " :" << endl;
      cin >> num[l][c];
    
      if (c == 0){
        somac1 = num[0][0] + num[1][0] + num[2][0];
      }
      else if (c == 1){
        somac2 = num[0][1] + num[1][1] + num[2][1];
      }
      else if (c == 2){
        somac3 = num[0][2] + num[1][2] + num[2][2];
      }
    }
  } 
  cout << "A soma das colunas dessa matriz é: " << endl;
  cout << somac1 << " " << somac2 << " " << somac3 << endl;
  return 0;
}