#include <iostream>

using namespace std;

int main () {
    float n1, n2, media;
    cout << "Digite as notas: " << endl;
    cin >> n1 >> n2;
    media = (n1+n2)/2;
      if (media < 3) {
      cout << "Reprovado sua media foi: " << media << endl;
    }
      else if ( media >=3 & media < 7){
      cout << "Fazer o exame sua media foi: " << media << endl;
    }
      if (media >= 7){
      cout << "Aprovado sua media foi de: " << media << endl;
    }
    return 0;
}  