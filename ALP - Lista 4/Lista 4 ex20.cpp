#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int idade;
  cout << "Informe sua idade, e sua categoria na natação será informada: " << endl;
  cin >> idade;
  if (idade >= 5 && idade <=7 ){
    cout << "Você está na categoria infantil." << endl;
    return 0;
  }
  else if (idade >= 8 && idade <= 10){
    cout << "Você está na categoria Juvenil" << endl;
    return 0;
  }
  else if (idade >= 11 && idade <= 15){
    cout << "Você está na categoria Adolescente" << endl;
    return 0;
  }
  else if (idade >= 16 && idade <= 30){
    cout << "Você está na categoria Adulto" << endl;
    return 0;
  }
  else if (idade > 30){
    cout << "Você está na categoria Sênior" << endl;
    return 0;
  }
}