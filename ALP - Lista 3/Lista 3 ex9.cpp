#include <iostream>
#include <cmath>

using namespace std;

int main () {
  float preco, pagamento; 
  int escolha;
  cout << "Digite o valor do produto: ";
  cin >> preco;
  cout << "Escolha a forma de pagamento: \n 1 - � vista em dinheiro ou cheque, recebe 10% de desconto \n 2 - � vista no cart�o de cr�dito, recebe 15% de desconto \n 3 - Em duas vezes, pre�o normal de etiqueta sem juros \n 4 - Em duas vezes, pre�o normal de etiqueta mais juros de 10% " << endl;
  cin >> escolha;
  switch (escolha){
    case 1 : pagamento = preco - ((preco * 10)/100);
      break;
    case 2 : pagamento = preco - ((preco *15)/100);
      break;
    case 3 : pagamento = preco/2;
      break;
    case 4 : pagamento = preco/2 - ((preco * 10)/100);
      break;
    default : cout << "Escolha invalida" << endl;
  }
  if (escolha >= 5 ){
    cout << "Escolha novamente a forma de pagamento: " << endl;
    return 0;
  }
  cout << "O pre�o a ser pago com discontos ou parcelado � de: " << pagamento << endl;
  return 0;
}