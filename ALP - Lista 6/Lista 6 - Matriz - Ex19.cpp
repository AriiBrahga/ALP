#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
int main () {
  int num[5][4], maiorn = 0, matric = 0, media = 0, mediaF = 0;
  for (int l = 0; l < 5; l++){
    for (int c = 0; c < 3; c++){
      cout << "Digite o numero da matricula, Digite a media das provas e Digite a media dos trabalhos : " << endl;
      cin >> num[l][c];      
    }
  }
  for (int l = 0; l < 5; l++){
    for (int c = 0; c < 4; c++){
      num[l][3] = (num[l][1] + num[l][2]) / 2;
      media += num[l][3];
    }
  }
  media = media / 5;
  for (int l = 0; l < 5; l++){
    for (int c = 0; c < 4; c++){
      if(num[l][3] > maiorn){
        maiorn = num[l][3];
        matric = num[l][0];
      }
    }
  }
  for (int l = 0; l < 5; l++){
    for (int c = 0; c < 4; c++){
      cout << num[l][c] << " " << endl;
    }
  }
  cout << "Numero de matricula: " << endl;
  for (int l = 0; l < 5; l++){
    cout << num[l][0] << endl;
  }
  cout << "A media das provas: " << endl;
  for (int l = 0; l < 5; l++){
    cout << num[l][1] << endl;
  }
  cout << "Media dos trabalhos: " << endl;
  for (int l = 0; l < 5; l++){
    cout << num[l][2] << endl;
  }
  cout << "Nota final: " << endl;
  for (int l = 0; l < 5; l++){
    cout << num[l][3] << endl;
  }
  cout << "A maior nota foi: " << maiorn << endl;
  cout << "Com a matricula: " << matric << endl;
  cout << "A media aritimetica da sala foi de: " << media << endl;
  return 0;
}