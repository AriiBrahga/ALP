#include <iostream>

using namespace std;

int main() {
  int n1, n2, n3;
  cout << " Digite tres valores: " << endl;
  cin >> n1 >> n2 >> n3;
  if (n1 > n2 && n1 > n3){
    cout << "O maior numero é: " << n1;
  }
  else if (n2 > n1 && n2 > n3) {
    cout << "O maior numero é: " << n2;
  }
  else if (n3 > n1 && n3> n2){
    cout << "O maior numero é: " << n3;
  }
  return 0; 
}