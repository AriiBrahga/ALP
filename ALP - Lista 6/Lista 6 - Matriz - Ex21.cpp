#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
int main () {
  int num[2][2];
  int num2[2][2];
  int num3[2][2];
  char E;

  for (int l = 0; l < 2; l++){
    for (int c = 0; c < 2; c++){
      cout << "Digite os valores da matriz" << endl;
      cin >> num[l][c];
    }
  } 
  for (int l = 0; l < 2; l++){
    for (int c = 0; c < 2; c++){
      cout << "Digite os valores da segunda matriz" << endl;
      cin >> num2[l][c];
    }
  }
  cout << "Escolha: \nA - Somar as duas matrizes. \nB - Subtrair a primeira matriz da segunda. \nC - Adicionar uma constante as duas matrizes. \nD - Imprimir as matrizes. " << endl;
  cin >> E;

  if (E == 'A' || E == 'a'){
    for (int l = 0; l < 2; l++){
      for (int c = 0; c < 2; c++){
        num3[l][c] = num[l][c] + num2[l][c];
        }
      }  
    cout << "A soma das duas matrizes é: " << endl; 
    for (int l = 0; l < 2; l++){
      for (int c = 0; c < 2; c++){
        cout << num3[l][c] << " ";
      }
    cout << "\t\n";
    }
  }
  else if (E == 'B' || E == 'b'){
    for (int l = 0; l < 2; l++){
      for (int c = 0; c < 2; c++){
        num3[l][c] = num2[l][c] - num[l][c];
        }
      }   
    cout << "A subtracao das duas matrizes é: " << endl;
    for (int l = 0; l < 2; l++){
      for (int c = 0; c < 2; c++){
        cout << num3[l][c] << " ";
      }
    cout << "\t\n";
    }
  }
  else if (E == 'C' || E == 'c'){
    for (int l = 0; l < 2; l++){
      for (int c = 0; c < 2; c++){
        num[l][c] += c;
        num2[l][c] += c;
        }
      }
    cout << "A constante das duas matrizes: " << endl;
    for (int l = 0; l < 2; l++){
      for (int c = 0; c < 2; c++){
        cout << num[l][c] << " ";
        cout << num2[l][c] << " ";
      }
    cout << "\t\n";
    }
  }
  else if(E == 'D' || E == 'd'){
    for (int l = 0; l < 2; l++){
      for (int c = 0; c < 2; c++){
        cout << num[l][c] << " ";
      }
    cout << "\t\n";
    }
    cout << "------------------" << endl;  
    for (int l = 0; l < 2; l++){
      for (int c = 0; c < 2; c++){
        cout << num2[l][c] << " ";
      }
    cout << "\t\n";
    }
  }
  return 0;
}