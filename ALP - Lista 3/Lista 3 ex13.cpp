#include <iostream>
#include <cmath>

using namespace std;

int main () {
  float prestacao, valortotal, valor;
  cout << "Digite o valor total: " << endl;
  cin >> valortotal;
  cout << "Digite como voce deseja as presta��es: " << endl ;
  cin >> prestacao;
  if (prestacao >=12 && prestacao < 24){
    valor = valortotal/prestacao;
  }
  else if (prestacao >=24 && prestacao <36){
    valor = valortotal/prestacao + (valortotal *0.10);
  }
  else if (prestacao >=36){
    valor = valortotal/prestacao + (valortotal * 0.15);
  }
  cout << "O valor a ser pago nas presta��es �: " << valor << endl;
  return 0;
}