#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int idade;
  cout << "Informe sua idade " << endl;
  cin >> idade;
  if (idade >= 18){
    cout << "Voc� � de maior." << endl;
    return 0;
  }
  else if (idade < 18){
    cout << "Voc� n�o � de maior." << endl;
    return 0;
  }
}