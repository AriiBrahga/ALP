#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int cat, sit;
  float preco, aumento, npreco;
  cout << "Informe o preco: " << endl;
  cin >> preco;
  cout << "Informe a categoria: \n 1 - Limpeza; \n 2 - Alimentação \n 3 - vestuário" << endl;
  cin >> cat;
  cout << "Informe a situação: \n 1 - R = produtos que necessitam de refrigeração; \n 2 - N = produtos que não necessitam de refrigeração" << endl;
  cin >> sit;
  switch (cat){
    case 1: if (preco <= 25){
        aumento = preco + (preco * 0.05);
    }
      else if (preco > 25){
        aumento = preco + (preco * 0.12);
      }
      break;
    case 2: if (preco <= 25){
        aumento = preco + (preco * 0.08);
    }
      else if (preco > 25){
        aumento = preco + (preco * 0.15);
      }
      break;
    case 3: if (preco <= 25){
        aumento = preco + (preco * 0.10);
    }
      else if (preco > 25){
        aumento = preco + (preco * 0.18);
      }
      break;
    default: cout << "Erro";
  }
  if (sit == 1 || cat == 2){
    npreco = aumento + (preco * 0.05);
  }
  else {
    npreco = aumento + (preco * 0.08);
  }
  if (npreco <= 50){
    cout << "O novo preço é: " << npreco << ", E ele é classificado como Barato." << endl;
    return 0;
  }
  else if (npreco > 50 && npreco < 120){
    cout << "O novo preço é: " << npreco << " , E ele é classificado como Normal." << endl;
    return 0;
  } 
  else if (npreco >= 120){
    cout << "O novo preço é: " << npreco << " , E ele é classificado como Caro." << endl;
    return 0;
  } 
}