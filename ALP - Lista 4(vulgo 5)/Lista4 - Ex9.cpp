#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
    
    int i = 0, nmes, ncm, ncrianca, criancaH = 0, cm24 = 0;
    float porcnt, porcntH, porcentT;
    char sexo;

    cout << "Digite o numero de crianças nascidas: " << endl;
    cin >> ncrianca;
    cout << "Digite o numero de crianças mortas no periodo: " << endl;
    cin >> ncm;
    
    while (i < ncm){

        cout << "Digite o Sexo: \n M - para masculino. \n F - para feminino. " << endl;
        cin >> sexo;
        cout << "Digite a quantidade de meses que a crianca viveu: " << endl;
        cin >> nmes;

        if(sexo == 'M' || sexo == 'm'){
            criancaH++;
        }
        if (nmes <= 24){
            cm24++;
        }
    
        porcntH = (float)(criancaH * 100)/ ncm;
        porcentT  = (float)(cm24 * 100)/ ncm;

        i++;
    }

    porcnt = (float) (ncm * 100)/ncrianca;
    cout << "A porcentagem de criancas que morreram, em relação a quantidade nascida foi de: " << porcnt << "%" << endl;
    cout << "A porcentagem de criancas do sexo masculino que morreram em relação ao total de mortos foi de: " << porcntH << "%" << endl;
    cout << "A porcentagem de criancas que morreram em menos de 24 meses em relação ao total de mortos foi de: " << porcentT << "%" << endl;
    

    return 0;
}