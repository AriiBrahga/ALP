#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
    
    float porcnt; 
    int i = 0, alunos, alunoA, faltas, quant = 0;
    int nturma, porcnt5;
    char chamada; 
    char turma;
    
    cout << "Digite a quantirdade de turmas: " << endl;
    cin >> nturma;

    for(i = 0; i < nturma; i++ ){

        cout << "Digite a turma: " << endl;
        cin >> turma;
        cout << "Digite a quantidade de alunos da turma: " << endl;
        cin >> alunos;

        for(quant = 0; quant < alunos ; quant++ ){
            cout << "Chamada falem A para ausente, e P para presente: " << endl;
            cin >> chamada;

            if(chamada == 'A' || chamada == 'a'){
                alunoA++;
            }
        }

        porcnt = (float)(alunoA*100)/alunos;

        if (porcnt > 5){
            porcnt5++;
            cout << "Turma: " << turma << "\nPorcentagagem de Ausencia: " << porcnt <<"%" << endl;
        }

    }
    cout << "O numero de turmas com porcentagem de falta acima de 5% é de: " << porcnt5 << endl;

    return 0;
}