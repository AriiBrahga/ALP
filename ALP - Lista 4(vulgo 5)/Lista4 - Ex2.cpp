#include <iostream>

using namespace std;

int main () {

    int i = 0, numh = 0, numm = 0 ;
    int idade, pessoas = 50, sexo;
    float maiorh = 0, menorh = 100, media = 0, altura;
    float alturah = 0, alturam = 0, h;

    while (i < pessoas){
        cout << "Digite sua idade: " << endl;
        cin >> idade;

        cout << "Digite seu sexo: \n 1 - Masculino \n 2 - Feminino " << endl;
        cin >> sexo;

        if (sexo == 1){
            numh = numh + 1;
        }
        if (sexo == 2){
            numm = numm + 1;
        }

        cout << "Digite sua altura: " << endl;
        cin >> altura;
            if (sexo == 1){
                alturah = alturah + altura;
            }
            if(sexo == 2){
                alturam += altura;
            }
        media = media + alturam;
        i++; 
        
        if (altura < menorh){
            menorh = altura;
        }
        if (altura > maiorh){
            maiorh = altura;
        }
    }
    cout << "A média da altura de mulheres é: " << alturam/numm << endl;
    cout << "O numero de homens é: " << numh << endl;
    cout << "A maior altura do grupo é: " << maiorh << endl;
    cout << "A menor altura do grupo é: " << menorh << endl;


    return 0;
}
