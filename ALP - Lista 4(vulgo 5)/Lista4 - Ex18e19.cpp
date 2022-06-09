#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
  int ninscricao = 0, vencedor = 0;
  float tempop1,tempop2, tempop3, tempo1 = 0, tempo2 = 0, tempo3 = 0, maiorponto = 0, etapa1 = 0, etapa2 = 0, etapa3 = 0;
  float ponto1 = 0, ponto2 = 0, ponto3 = 0, somaponto = 0;

    cout << "Digite o tempo padrao da primeira etapa: " << endl;
    cin >> tempop1;
    cout << "Digite o tempo padrao da segunda etapa: " << endl;
    cin >> tempop2;
    cout << "Digite o tempo padrao da terceira etapa: " << endl;
    cin >> tempop3;

  while(ninscricao != 9999){
    
    cout << "Digite o numero da equipe: " << endl;
    cin >> ninscricao;
    cout << "Digite o tempo das tres etapas da equipe: " << endl;
    cin >> etapa1 >> etapa2 >> etapa3;

    tempo1 = abs(tempop1 - etapa1);
    tempo2 = abs(tempop2 - etapa2);
    tempo3 = abs(tempop3 - etapa3);

    if (tempo1 < 3){
      ponto1 = 100;
    } 
      else if (tempo1 >= 3 && tempo1 <= 5){
        ponto1 = 80;
      }
        else if (tempo1 > 5) {
          ponto1 = 80 - (tempo1 - 5)/5;
        }
    if (tempo2 < 3){
      ponto2 = 100;
    } 
      else if (tempo2 >= 3 && tempo2 <= 5){
        ponto2 = 80;
      }
        else if (tempo2 > 5) {
          ponto2 = 80 - (tempo2 - 5)/5;
        }
    if (tempo3 < 3){
      ponto3 = 100;
    } 
      else if (tempo3 >= 3 && tempo3 <= 5){
        ponto3 = 80;
      }
        else if (tempo3 > 5) {
          ponto3 = 80 - (tempo3 - 5)/5;
        }
    somaponto = ponto1 + ponto2 + ponto3;
    if (somaponto > maiorponto){
      maiorponto = somaponto;
      vencedor = ninscricao;
    }
    cout << "A equipe: " << ninscricao << endl;
    cout << "Obteve o total de pontos: " << somaponto << endl;
  } 

  cout << "A equipe vencedora foi: " << vencedor << endl;
  cout << "A equipe vencedora obteve: " << maiorponto << " pontos" << endl;
  
  return 0;
}