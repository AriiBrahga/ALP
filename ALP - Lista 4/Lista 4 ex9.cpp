#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int saldo, credito;
  cout << "Informe seu saldo médio: " << endl;
  cin >> saldo;
  if (saldo > 400){
    credito = saldo + (saldo*0.3);
    cout << "De acordo com o seu saldo médio: " << saldo << " O valor do credito é: " << credito << endl;
    return 0;
  }
  else if (saldo <= 400 && saldo > 300 ){
    credito = saldo + (saldo * 0.25);
    cout << "De acordo com o seu saldo médio: " << saldo << " O valor do credito é: " << credito << endl;
    return 0;
  }
  else if (saldo <= 300 && saldo > 200 ){
    credito = saldo + (saldo * 0.20);
    cout << "De acordo com o seu saldo médio: " << saldo << " O valor do credito é: " << credito << endl;
    return 0;
  }
   else if (saldo <= 200 ){
    credito = saldo + (saldo * 0.10);
    cout << "De acordo com o seu saldo médio: " << saldo << " O valor do credito é: " << credito << endl;
    return 0;
  }
}