#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
  int num = 1;
  float resp = 0;

  while (num !=11){
    resp = resp + (num/ (num * num));
    if (num > 0){
      num =-num;
      num--;
    }
    else{
      num =-num;
      num++;
    }
  }
    
  cout << "O valor de S é: " << resp;
  return 0;
}