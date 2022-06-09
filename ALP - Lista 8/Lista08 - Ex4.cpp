#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

void form_bask(float num1, float num2, float num3, float *x1, float *x2){
  float delta = (num2 * num2) - (4 * num1 * num3);
  

  *x1 = (-num2 + sqrt(delta)) / (2 * num1);
  *x2 = (-num2 - sqrt(delta)) / (2 * num1);
  
}



int main (){
  float a, b, c, x_1, x_2;
  
  cout << "Digite um numero:";
  cin >> a;
  cout << "Digite o segundo numero: ";
  cin >> b;
  cout << "Digite o terceiro numero: ";
  cin >> c;

  cout << "Logo utilizando a formula de baskara as possiveis respostas são: " << endl;

  form_bask(a, b, c, &x_1, &x_2);

  cout << "As raizes x1 = "  << x_1 << " e x2 = " << x_2;

  return 0;
}