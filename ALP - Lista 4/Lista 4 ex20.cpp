#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int idade;
  cout << "Informe sua idade, e sua categoria na nata��o ser� informada: " << endl;
  cin >> idade;
  if (idade >= 5 && idade <=7 ){
    cout << "Voc� est� na categoria infantil." << endl;
    return 0;
  }
  else if (idade >= 8 && idade <= 10){
    cout << "Voc� est� na categoria Juvenil" << endl;
    return 0;
  }
  else if (idade >= 11 && idade <= 15){
    cout << "Voc� est� na categoria Adolescente" << endl;
    return 0;
  }
  else if (idade >= 16 && idade <= 30){
    cout << "Voc� est� na categoria Adulto" << endl;
    return 0;
  }
  else if (idade > 30){
    cout << "Voc� est� na categoria S�nior" << endl;
    return 0;
  }
}