#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int custo, venda;
  cout << "Informe o custo de fabrica do veiculo: " << endl;
  cin >> custo;
  if (custo <= 12000){
    venda = custo + (custo *0.05) ;
    cout << "O preço do automovel é de: " << venda << endl;
    return 0;
  }
  else if (custo > 12000 && custo <= 25000){
    venda = custo + (custo *0.1) + (custo * 0.15) ;
    cout << "O preço do automovel é de: " << venda << endl;
    return 0;
  }
  else if (custo > 25000){
    venda = custo + (custo *0.15) + (custo * 0.20) ;
    cout << "O preço do automovel é de: " << venda << endl;
    return 0;
  }
}