#include <iostream>
#include <cmath>

using namespace std;

int main () {
  float preco, npreco;
  cout << "Informe o pre�o do produto: " << endl;
  cin >> preco;
  if (preco <= 30){
    npreco = preco;
    cout << "O produto n�o possui descontos." << endl;
    return 0;
  }
  else if (preco > 30 && preco <=100){
    npreco = preco - (preco*0.1);
    cout << "O valor do produto com desconto �: " << npreco << endl;
    return 0;
  }
  else if (preco > 100){
    npreco = preco - (preco*0.15);
    cout << "O valor do produto com desconto �: " << npreco << endl;
    return 0;
  }
}