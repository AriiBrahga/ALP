#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
    
    float massai, massaf;
    int seg, hora, min, temp, tempo = 0;
    cout << "Digite a massa em gramas do material: " << endl;
    cin >> massai;

    massaf = massai;

    while (massaf >= 0.5){

    massaf = massaf / 2;
    tempo = tempo + 50; 

    }
    hora = tempo / 3600;
    temp = tempo % 3600;
    min = temp / 60;
    seg = temp % 60;

    cout << "A massa final é: " << massaf << endl;
    cout << "A massa inicial é: " << massai << endl;
    cout << "O tempo que passou foi de: " << hora << "Hr, " << min << "min, " << seg << "seg" << endl;
   
    return 0;
}