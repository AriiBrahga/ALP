#include <iostream>
#include <cmath>

using namespace std;

int main () {
  float preco, npreco;
  cout << "Informe o pre�o do produto: " << endl;
  cin >> preco;
  if (preco <= 50){
    npreco = preco + (preco*0.05);
  }
  else if (preco > 50 && preco <=100){
    npreco = preco + (preco*0.1);
  }
  else if (preco > 100){
    npreco = preco + (preco*0.15);
  }
  if (npreco <= 80){
    cout << "O novo pre�o �: " << npreco << ", E ele � classificado como Barato." << endl;
    return 0;
  }
  else if (npreco > 80 && npreco <=120){
    cout << "O novo pre�o �: " << npreco << " , E ele � classificado como Normal." << endl;
    return 0;
  } 
  else if (npreco > 120 && npreco <= 200){
    cout << "O novo pre�o �: " << npreco << " , E ele � classificado como Caro." << endl;
    return 0;
  } 
  else if (npreco > 200){
    cout << "O novo pre�o �: " << npreco << " , E ele � classificado como Muito caro." << endl;
    return 0;
  }  
}