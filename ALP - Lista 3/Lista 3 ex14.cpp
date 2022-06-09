#include <iostream>
#include <cmath>

using namespace std;

int main () {
  float x, f;
  cout << "Digite um valor x: " << endl;
  cin >> x;
  if (x < 1){
    f = 4 - pow(x,2); 
  }
  else if (x == 1){
    f = 2;
  }
  else if (x > 1){
    f = 2 + pow(x,2);
  }
  cout << "A função f(x) = " << f << endl;
  return 0;
}