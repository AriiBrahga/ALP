#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
    int F;
    float Cent = 0;

    for (F = 50; F <= 150; F++){

        Cent = (float)5 / 9 * (F - 32);
        cout << "Valor de Fahrenheit: " << F << " Valor da Conveção para centígrados: " << Cent << endl;
    }

    return 0;
}