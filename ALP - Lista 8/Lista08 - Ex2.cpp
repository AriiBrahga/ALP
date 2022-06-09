#include <iostream>

using namespace std;

float calcula_media(float n1, float n2, float n3, char escolha){
  if (escolha == 'A'){
    return (n1 + n2 + n3) / 3;
  }
  if (escolha == 'P'){
    return (n1 * 5 + n2 * 3 + n3 * 2)/ 10;
  }
  if (escolha == 'H'){
    return 3 / (1/n1 + 1/n2 + 1/n3);
  }
  return -1;
}


int main (){
  float nota, nota2, nota3, md;
  char escolha;

  cout << "Digite as 3 notas do aluno: ";
  cin >> nota >> nota2 >> nota3;

  cout << "Escolha:  \nA - Para media Aritmética; \nP - Ponderada; \nH - Harmonica; " << endl;
  cin >> escolha;

  md = calcula_media(nota, nota2, nota3, escolha);

  cout << "A media do aluno é: " << md << endl;

  return 0;
}