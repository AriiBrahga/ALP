#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
  float prcntF, candpvaga = 0, mcandpvaga = 0;
  int cod = 1, nmasc = 0, nfem = 0, candsoma = 0,ntotal = 0, nvagas = 0, mcurso = 0;    
  
  while (cod){
    cout << "Digite o codigo do curso: " << endl;
    cin >> cod;
    cout << "O numero de vagas disponiveis: " << endl;
    cin >> nvagas;
    cout << "Digite o numero de candidatos do sexo feminino: " << endl;
    cin >> nfem;
    cout << "Digite o numero de candidatos do sexo masculino: " << endl;
    cin >> nmasc;

    candsoma = nfem + nmasc;
    ntotal += candsoma;

    candpvaga = candsoma / nvagas;
    prcntF = (float) (nfem * 100)/ candsoma;

    if (candpvaga > mcandpvaga){
      mcandpvaga = candpvaga;
      mcurso = cod;
    }
    else {
      mcandpvaga = mcandpvaga;
    }

    cout << "Codigo: " << cod << endl;
    cout << "O numero de candidatos por vaga é: " << candpvaga << endl;
    cout << "A porcentagem de mulheres matriculadas nesse curso é: " << prcntF << "%" << endl;;
    cout << "O total de candidatos é: " << ntotal << endl;
  
  }
  cout << "O curso com mais candidatos por vaga é: " << mcurso << endl;
  cout << "Quantidade: " << mcandpvaga << endl;
  cout << "Total de candidatos: " << ntotal << endl;
  
  return 0;
}