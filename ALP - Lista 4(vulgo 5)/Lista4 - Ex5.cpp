#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
    
    int anos;
    float cidadeA, cidadeB, calcA, calcB;

    cout << "Digite a quantidade de habitantes da cidade A: " << endl;
    cin >> cidadeA;
    cout << "Digite a quantidade de habitantes da cidade B: " << endl;
    cin >> cidadeB;

    calcA = cidadeA;
    calcB = cidadeB;

    while (calcB < calcA) {
    calcA = (calcA * 0.015) + calcA;
    calcB = (calcB * 0.03) + calcB;

    anos++;

    }
    cout << "A quantidade de anos para a cidade B passar a cidade A em numero de habitantes é: " << anos << endl;

    return 0;
}
