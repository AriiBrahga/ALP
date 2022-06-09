#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
  int d = 50, num = 2, pot, num1;
  float resp = 0;

  for (d= 50; d >= 1; d--){
    num1 = num1 + 1;
    pot = pow(num,num1);
    num = num;
    resp = resp + ((float)(pow(num, num1))/d);

  }
    
  cout << "O valor de S é: " << resp;
  return 0;
}