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
    cout << "Seu grau de risco � 9" << endl;
    return 0;
  }
  else if (idade >= 20 && idade <= 50 && peso <= 60){
    cout << "Seu grau de risco � 6" << endl;
    return 0;
  }
  else if (idade > 50 && peso <= 60){
    cout << "Seu grau de risco � 3" << endl;
    return 0;
  }
  else if (idade < 20 && peso > 60 && peso <= 90 ){
    cout << "Seu grau de risco � 8" << endl;
    return 0;
  }
  else if (idade >= 20 && idade <= 50 && peso > 60 && peso <= 90){
    cout << "Seu grau de risco � 5" << endl;
    return 0;
  }
  else if (idade > 50 && peso > 60 && peso <= 90){
    cout << "Seu grau de risco � 2" << endl;
    return 0;
  }
  else if (idade < 20 && peso > 90){
    cout << "Seu grau de risco � 7" << endl;
    return 0;
  }
  else if (idade >= 20 && idade <= 50 && peso > 90){
    cout << "Seu grau de risco � 4" << endl;
    return 0;
  }
  else if (idade > 50 && peso > 90){
    cout << "Seu grau de risco � 1" << endl;
    return 0;
  }
}