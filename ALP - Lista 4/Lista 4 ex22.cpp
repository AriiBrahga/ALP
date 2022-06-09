#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int idade;
  float peso;
  cout << "Informe seu peso: " << endl;
  cin >> peso;
  cout << "Informe sua idade: " << endl;
  cin >> idade;
  
  if (idade < 20 && peso <= 60){
    cout << "Seu grau de risco é 9" << endl;
    return 0;
  }
  else if (idade >= 20 && idade <= 50 && peso <= 60){
    cout << "Seu grau de risco é 6" << endl;
    return 0;
  }
  else if (idade > 50 && peso <= 60){
    cout << "Seu grau de risco é 3" << endl;
    return 0;
  }
  else if (idade < 20 && peso > 60 && peso <= 90 ){
    cout << "Seu grau de risco é 8" << endl;
    return 0;
  }
  else if (idade >= 20 && idade <= 50 && peso > 60 && peso <= 90){
    cout << "Seu grau de risco é 5" << endl;
    return 0;
  }
  else if (idade > 50 && peso > 60 && peso <= 90){
    cout << "Seu grau de risco é 2" << endl;
    return 0;
  }
  else if (idade < 20 && peso > 90){
    cout << "Seu grau de risco é 7" << endl;
    return 0;
  }
  else if (idade >= 20 && idade <= 50 && peso > 90){
    cout << "Seu grau de risco é 4" << endl;
    return 0;
  }
  else if (idade > 50 && peso > 90){
    cout << "Seu grau de risco é 1" << endl;
    return 0;
  }
}