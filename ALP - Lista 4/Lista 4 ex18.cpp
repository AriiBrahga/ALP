#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int idade;
  cout << "Informe sua idade " << endl;
  cin >> idade;
  if (idade >= 18){
    cout << "Você é de maior." << endl;
    return 0;
  }
  else if (idade < 18){
    cout << "Você não é de maior." << endl;
    return 0;
  }
}