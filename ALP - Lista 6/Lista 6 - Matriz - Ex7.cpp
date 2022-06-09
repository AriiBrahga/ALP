#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
int main () {
  int num[10][10];
  for (int l = 0; l < 10; l++){
    for (int c = 0; c < 10; c++){
      if(l < c){
        num[l][c] = (2 * l) + (7 * c) - 2;
      }
      else if (l == c){
        num[l][c] = (3 * (pow(l, 2))) - 1;
      }
      else if (l > c){
      num[l][c] = (4 * (pow(l, 3))) - (5 * (pow(c, 2))) + 1 ;
      }
    }
  }
  for (int l = 0; l < 10; l++){
    for (int c = 0; c < 10; c++){
      cout << num[l][c] << " ";
    }
  cout << "\t\n";
  }
  return 0;
}