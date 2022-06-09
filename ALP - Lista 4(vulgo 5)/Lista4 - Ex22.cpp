#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
  int d = 1, num = -1;
  float resp = 0;

  for (d=1; d <= 50; d++){
    num = num + 2;
    resp = resp+(num/d);

  }
    
  cout << "O valor de S é: " << resp;
  return 0;
}