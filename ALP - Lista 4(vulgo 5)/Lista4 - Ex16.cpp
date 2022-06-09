#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
  int sexo, cod = 1, idade, nfem = 0, nmasc = 0, idade45 = 0, media = 0 , m35 = 0, menoridade = 0;
  int escolha;  

  while (cod){
    
    cout << "Digite seu codigo de inscrição: " << endl;
    cin >> cod;
    cout << "Digite sua idade: " << endl;
    cin >> idade;
    cout << "Qual o seu sexo: \n1 - Masculino. \n2 - Feminino." << endl;
    cin >> sexo;
    cout << "Você possui experienca? \n1 - Sim. \n2 - Não. " << endl;
    cin >> escolha;

    if (sexo == 2){
      nfem++;
    }
    else if (sexo == 1){
      nmasc++;
    }
    if (sexo == 1 && idade > 45){
      idade45++;
    }
    media = idade45/nmasc;
    if (sexo == 2 && idade < 35 && escolha == 1){
      m35++;
    }
    if (sexo == 2 && escolha == 1){
      if(idade < menoridade){
        menoridade = idade;
      }

    }
  }
  cout << "O numero de candidatos Homens é: " << nmasc << endl;
  cout << "O numero de candidatas Femininas é: " << nfem << endl;
  cout << "A idade média dos homens com mais de 45 anos entre o total de homens é: " << media << endl;
  cout << "O número de mulheres que têm idade inferior a 35 anos e com experiência no serviço é :" << m35 << endl;
  cout << "A menor idade é: " << menoridade << " com o código: " << cod << endl;
  return 0;
}