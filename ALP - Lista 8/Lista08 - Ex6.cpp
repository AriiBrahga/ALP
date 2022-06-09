#include <iostream>
#include <math.h>
using namespace std;

float conv_idade(float id, int esc){
  float ano;
  float mes;
  if (esc == 1){
    return id;
  }
  else if (esc == 2){
  return mes = id * 30;
  }
  else {
  return ano = 365 * id;
  }
  return -1;
}

int main (){
  int tempo;
  int idade;
  int escolha;
  cout << "Escolha: \n1 - Dias; \n2 - Meses; \n3 - Anos; " << endl;
  cin >> escolha;
  cout << "Agora digite sua idade de acordo com a sua escolha: " << endl;
  cin >> idade;

  tempo = conv_idade(idade, escolha);

  cout << "A sua idade em dias é: " << tempo << endl;
  return 0;
}