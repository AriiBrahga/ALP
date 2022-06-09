#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int codigo;
  float preco;
  cout << "Informe o preço do produto " << endl;
  cin >> preco;
  cout << "Informe o Código de Origem: " << endl;
  cin >> codigo;
  
  if (codigo == 1){
    cout << "O valor do produto é R$" << preco << " e sua procedencia é o Sul."  << endl;
    return 0;
  }
  else if (codigo == 2){
    cout << "O valor do produto é R$" << preco << " e sua procedencia é o Norte."  << endl; 
    return 0;
  }
  else if (codigo == 3){
    cout << "O valor do produto é R$" << preco << " e sua procedencia é o Leste."  << endl;
    return 0;
  }
  else if (codigo == 4){
    cout << "O valor do produto é R$" << preco << " e sua procedencia é o Oeste."  << endl;
    return 0;
  }
  else if (codigo == 5 || codigo == 6){
    cout << "O valor do produto é R$" << preco << " e sua procedencia é o Nordeste."  << endl;
    return 0;
  }
  else if (codigo == 7 || codigo == 8 || codigo == 9){
    cout << "O valor do produto é R$" << preco << " e sua procedencia é o Sudeste."  << endl;
    return 0;
  }
  else if (codigo >= 10 && codigo <=20){
    cout << "O valor do produto é R$" << preco << " e sua procedencia é o Centro-Oeste."  << endl;
    return 0;
  }
  else if (codigo >= 21 && codigo <=30){
    cout << "O valor do produto é R$" << preco << " e sua procedencia é o Nordeste."  << endl;
    return 0;
  }
}