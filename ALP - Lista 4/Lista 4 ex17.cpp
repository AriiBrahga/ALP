#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int senha;
  cout << "Digite a senha de 4 digitos: " << endl;
  cin >> senha;
  if (senha == 4531){
    cout << "Acesso permitido." << endl;
    return 0;
  }
  else if (senha != 4531){
    cout << "Acesso negado!" << endl;
    return 0;
  }
}