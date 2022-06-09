#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int codigo, qntd;
  float preco, pt;
  cout << "Informe a quantidade comprada de um produto " << endl;
  cin >> qntd;
  cout << "Informe o Código do Produto: " << endl;
  cin >> codigo;
  
  if (codigo >= 1 && codigo <= 10){
    preco = 10 * qntd;
  }
  else if (codigo >= 11 && codigo <= 20){
    preco = 15 * qntd;
  }
  else if (codigo >= 21 && codigo <=30){
    preco = 20 * qntd;
  }
  else if (codigo >= 31 && codigo <= 40){
    preco = 30 * qntd;
  }
  if (preco <= 250 ){
    pt = preco - (preco * 0.05);
    cout << "O preço final da nota depois do desconto é: " << pt << endl;
    return 0;
  }
  else if (preco > 250 && preco <= 500){
    pt = preco - (preco * 0.10);
    cout << "O preço final da nota depois do desconto é: " << pt << endl;
    return 0;
  }
  else if (preco > 500){
    pt = preco - (preco * 0.15);
    cout << "O preço final da nota depois do desconto é: " << pt << endl;
    return 0;
  }
}