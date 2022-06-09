#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
int main () {
  int num[3][3];
  for (int l = 0; l < 3; l++){
    for (int c = 0; c < 3; c++){
      if(l > c){
        num[l][c] = l + c;
      }
      else{
        num[l][c] = 0;
      }
    }
  }
  for (int l = 0; l < 3; l++){
    for (int c = 0; c < 3; c++){
      cout << num[l][c] << " ";
    }
  cout << "\t\n";
  }
  return 0;
}