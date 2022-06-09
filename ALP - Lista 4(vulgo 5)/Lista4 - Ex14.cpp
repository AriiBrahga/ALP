#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
  float marco1, marco2, tempo = 0, esp = 0, vel;

  while (marco1 != marco2){
    cout << "Digite o primeiro marco quilometrico: " << endl;
    cin >> marco1;
    cout << "Digite o segundo marco quilometrico: " << endl;
    cin >> marco2;

    vel = 20;
    esp = marco2 + marco1;  
    tempo = (float)esp / vel;
    if(tempo >= 2){
      cout << "Marco 1: " << marco1 << endl;
      cout << "Marco 2: " << marco2 << endl;
      cout << "Com a Velocidade de: " << vel << "km/h, Gastou: " << tempo << "hrs" << endl;

    }
    vel = vel + 10;
  }

  return 0;
}