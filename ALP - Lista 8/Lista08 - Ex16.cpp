#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

float calc_hab(int hab, float fl, float sal, float msal, float mfl, int maior){
    float porcentagem;
    int porc = 1;
    for (int i = 1 ; i <= hab; i++){
        
        cout << "Digite o salario: ";
        cin >> sal;
        cout << "Digite a quantidade de filhos: ";
        cin >> fl;
    
        msal += sal;
        mfl += fl;
        if(sal <= 350){
            porcentagem = (porc * 100) / hab;
            porc++;
        }
        if (sal > maior){
            maior = sal;
        }
    }

    msal = float (msal / hab);
    mfl = float (mfl / hab);

    cout << "A media salarial eh: " << msal << "\nA media de filhos eh: " << mfl << "\nA porcentagem de pessoas com salarios ate 350 eh:  " << porcentagem << "\nO maior salario eh: " << maior << endl;
}

int main (){
    float salario = 0, maior = 0;
    int nhab = 0, i = 1, nfilhos = 0;
    int decisao;
    float mdfilhos = 0, mdsal = 0;

    cout << "Digite a quantidade de habitantes pesquisados." << endl;
    cin >> nhab;

    /*for (int i = 1 ; i <= nhab; i++){
        
        cout << "Digite o salario: ";
        cin >> salario;
        cout << "Digite a quantidade de filhos: ";
        cin >> nfilhos;
        maior = salario;
        mdsal += salario;
        mdfilhos += nfilhos;
        if(salario <= 350){
            porc++;
        }
    } */

    calc_hab(nhab, nfilhos, salario, mdsal, mdfilhos, maior);

    return 0;
}