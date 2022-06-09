#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
  float mnota = 60, menornota = 60, prcnt = 0, faula = 0;
  int i = 0, nmatricula, alunor = 0, alunoa = 0;
  float notaf = 0, mediatotal = 0, faltas, presenca, nota1 = 0, nota2 = 0, nota3 = 0, notat = 0, total = 0;

  for(i=0; i<100; i++){

    cout << "Digite o codigo de matricula do aluno: " << endl;
    cin >> nmatricula;
    cout << "Digite a quantidade de faltas do aluno: " << endl;
    cin >> faltas;
    cout << "Digite a quantidade de presenças do aluno:" << endl;
    cin >> presenca;
    cout << "Digite as tres notas do aluno: " << endl;
    cin >> nota1 >> nota2 >> nota3;
    total = faltas + presenca;
    notaf = (nota1 + nota2 + nota3)/3;

    if (notaf >= 60 && presenca >= 40){
      cout << "Aluno " << nmatricula << " Aprovado!" << endl;
      cout << "Média: " << notaf << endl;
      cout << "O aluno esteve presente em: " << presenca << " aulas de " << total << " aulas." << endl;
      alunoa++;
    }
    else {
      cout << "Aluno " << nmatricula << " Reprovado!" << endl;
      cout << "Média: " << notaf << endl;
      cout << "O aluno esteve presente em: " << presenca << " aulas de " << total << " aulas." << endl;
      alunor++;
    }

    if(notaf > mnota){
      mnota = notaf;
    }
    else if (notaf < menornota){
      menornota = notaf;
    } 
    if (presenca < 40 && notaf >= 60){
      faula++;
    }
    prcnt = (float) (faula * 100) /  100;
    
    mediatotal = notat /100;
    notat += notaf;
  }
  
  cout << "A média final da sala é: " << mediatotal << endl;
  cout << "O total de alunos reprovados é: " << alunor << endl;
  cout << "A maior nota da turma é: " << mnota << " e a menor nota é: " << menornota << endl;
  cout << "A porcentagem de alunos que reprovaram por faltas é: " << prcnt << endl;

  return 0;
}