#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
int main () {
  int num[5][5];
  for (int l = 0; l < 5; l++){
    for (int c = 0; c < 5; c++){
      if(l == c){
        num[l][c] = 1;
      }
      else 
      num[l][c] = 0;
    }
  }
  for (int l = 0; l < 5; l++){
    for (int c = 0; c < 5; c++){
      cout << num[l][c] << " ";
    }
  cout << "\n";
  }
  return 0;
}