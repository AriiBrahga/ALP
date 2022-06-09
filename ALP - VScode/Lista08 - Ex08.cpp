#include <iostream>
#include <math.h>
using namespace std;

string classif_idade(int idade){
  if (idade >= 5 && idade <= 7){
    return "Infantil A";
  }
  else if (idade >= 8 && idade <= 10){
    return "Infantil B";
  }
  else if(idade >= 11 && idade <=13){
    return "Juvenil A";
  }
  else if(idade >= 14 && idade <=17){
    return "Juvenil B";
  }
  else if(idade >= 18){
    return "Adulto";
  }
}

int main (){
  int idade;
  string categoria;

  cout << "Informe a idade do nadadador: " << endl;
  cin >> idade;

  categoria = classif_idade(idade);

  cout << "A categoria que o nadador pertence e: " << categoria << endl;

  return 0;
}