#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
    
    float porcntH, porcntM; 
    int i = 0, hmnao = 0, msim = 0, nnao = 0, nsim = 0, npessoas;
    char sexo;
    char resposta;
    
    cout << "Digite a quantirdade de pessoas intrevistadas: " << endl;
    cin >> npessoas;

    for(i = 0; i < npessoas; i++ ){

        cout << "Digite seu sexo: \n M para masculino. \n F para feminino. " << endl;
        cin >> sexo;
        cout << "Diga se voce gostou do nosso produto: \n N - para não. \n S - para sim" << endl;
        cin >> resposta;

        if (resposta == 'S' || resposta == 's'){
            nsim++;
        }
        else if (resposta == 'N' || resposta == 'n'){
            nnao++;
        }
        if (sexo == 'F' || sexo == 'f'){
            if(resposta == 'S' || resposta == 's'){
                msim++;
            }
        }
        else if (sexo == 'M' || sexo == 'm'){
            if(resposta == 'N' || resposta == 'n'){
                hmnao++;
            }   
        }   

        porcntH = (float)(hmnao*100)/npessoas;
        porcntM = (float)(msim * 100)/npessoas;

    }

    cout << "O numero de pessoas que disseram Sim foi: " << nsim << endl;
    cout << "O numero de pessoas que disseram Nao foi: " << nnao << endl;
    cout << "A porcentagem de pessoas do sexo masculino que responderam não é de: " << porcntH << endl;
    cout << "A porcentagem de pessoas do sexo feminino que responderam sim é de: " << porcntM << endl;

    return 0;
}
