#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int idade, media=0, num, cont=0;
  cout << "Digite a quantidade de medias a serem  calculadas " << endl;
  cin >> num;
  while (cont < num ){
    cout << "Digite sua idade: " << endl;
    cin >> idade;

    media = media + idade;
    cont++;
  }
  cout << "A media é: " << media/num << endl;
  return 0;
}
