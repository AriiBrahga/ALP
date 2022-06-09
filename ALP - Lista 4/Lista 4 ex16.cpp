#include <iostream>
#include <cmath>

using namespace std;

int main () {
  float preco, npreco;
  cout << "Informe o preço do produto: " << endl;
  cin >> preco;
  if (preco <= 30){
    npreco = preco;
    cout << "O produto não possui descontos." << endl;
    return 0;
  }
  else if (preco > 30 && preco <=100){
    npreco = preco - (preco*0.1);
    cout << "O valor do produto com desconto é: " << npreco << endl;
    return 0;
  }
  else if (preco > 100){
    npreco = preco - (preco*0.15);
    cout << "O valor do produto com desconto é: " << npreco << endl;
    return 0;
  }
}