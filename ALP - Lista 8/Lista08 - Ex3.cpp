#include <iostream>

using namespace std;

int num_primo(int num){
  int i;
  int div = 0;
  for (i = 1; i <=num; i++){
    if (num % i == 0){
      div++;
    }
  }
  if (div == 2){
    return 1;
  }
  else{
    return 2;
  }
  
}



int main (){
  int num, primo;

  cout << "Digite um numero inteiro positivo: ";
  cin >> num;
  if(num < 0){
    cout << "Numero digitado menor que zero!" << endl;
    cout << "Digite um numero inteiro positivo: ";
    cin >> num;
  }
  primo = num_primo(num);
  if (primo == 1){
    cout << "O numero digitado é verdadeiro" ;
  }
  else if(primo == 2){
    cout << "O numero digitado é falso";
  }
  return 0;
}