#include <iostream>

using namespace std;

int main () {
  int n1, n2;
  cout << "Digite dois n�meros: " << endl;
  cin >> n1 >> n2;
  if (n1 > n2) {
    cout << "O menor numero �: " << n2;
  }
  else if (n1 < n2) {
    cout << "O menor numero �: " << n1;
  }
  return 0;
}
  