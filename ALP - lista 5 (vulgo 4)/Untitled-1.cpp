#include <iostream>
#include <math.h>
using namespace std;

int form_bask(int num1, int num2, int num3){
  int delta;

  delta = pow(num2,2) - (4 * num1 * num3);
  sqrt(delta);

  
}



int main (){
  int a, b, c;
  int bask;
  cout << "Digite um numero:";
  cin >> a;
  cout << "Digite o segundo numero: ";
  cin >> b;
  cin << "Digite o terceiro numero: ";
  cin >> c;
  cout << "A equaçao do 2ºGrau fica: \n" << a << "^2(x) +" << b << "(x) + " << c;

  cout << "Logo utilizando a formula de baskara as possiveis respostas são: " << endl;
  bask = form_bask(a,b,c);
  if (bask )
  cout << "As raizes são "  << bask;

  return 0;
}