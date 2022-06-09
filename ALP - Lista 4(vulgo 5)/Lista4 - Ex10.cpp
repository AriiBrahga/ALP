#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
    
    int canal4 = 0, canal5 = 0, canal7 = 0, canal12 = 0, tvlig, totalp = 0;
    int i = 0, canal, npessoas, qnt;
    float pcnt4, pcnt5, pcnt7, pcnt12;

    cout << "Digite a quantidade de casas que foram pesquisadas: " << endl;
    cin >> qnt;
    cout << "Digite quantas casas a TV estava ligada: " << endl;
    cin >> tvlig;

    while (i < tvlig){

        cout << "Qual canal destes canais você estava assistindo: 4, 5, 7, 12" << endl;
        cin >> canal;
        cout << "Quantas pessoas estavam assitindo o canal? " << endl;
        cin >> npessoas;

        totalp = npessoas + totalp;
        if (canal == 4){
            canal4 = canal4 + npessoas;
        }
        else if(canal == 5){
            canal5 = canal5 + npessoas;
        }
        else if (canal == 7){
            canal7 = canal7 + npessoas;
        }
        else if(canal == 12){
            canal12 = canal12 + npessoas;
        }

        pcnt4 = (float)(canal4 * 100)/totalp;
        pcnt5 = (float)(canal5 * 100)/totalp;
        pcnt7 = (float)(canal7 * 100)/totalp;
        pcnt12 = (float)(canal12 * 100)/totalp;

        i++;
    }
    
    cout << "A porcentagem de telespectadores no canal 4 é: " << pcnt4 << endl;
    cout << "A porcentagem de telespectadores no canal 5 é: " << pcnt5 << endl;
    cout << "A porcentagem de telespectadores no canal 7 é: " << pcnt7 << endl;
    cout << "A porcentagem de telespectadores no canal 12 é: " << pcnt12 << endl;

    return 0;
}