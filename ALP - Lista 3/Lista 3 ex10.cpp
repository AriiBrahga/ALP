#include <iostream>
#include <cmath>

using namespace std;

int main () {
  float altura, peso, IMC;
  cout << "Digite sua altura: " << endl;
  cin >> altura;
  cout << "Digite seu peso: " << endl;
  cin >> peso;
  IMC = peso / (pow(altura,2));
  if(IMC < 18.5){
    cout << "Segundo o IMC voce está abaixo do peso. IMC = " << IMC << endl;
  }
  else if ( 18.5 < IMC && IMC < 25){
    cout << "Segundo o IMC voce está com o peso normal. IMC = " << IMC << endl;
  }
  else if (25 < IMC && IMC < 30){
    cout << "Segundo o IMC voce está acima do peso. IMC = " << IMC << endl;
  }
  else if (IMC > 30){
    cout << "Segundo o IMC voce está obeso. IMC = " << IMC << endl; 
  }
  return 0;

}