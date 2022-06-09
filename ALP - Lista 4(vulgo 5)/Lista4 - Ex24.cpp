#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
  int d = 1, num = 37;
  float resp = 0;

  for (d=1; d <= 37; d++){
    num = num - 1;
    resp = resp + ((float)(num*(num+1))/d);

  }
    
  cout << "O valor de S é: " << resp;
  return 0;
}