#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int dia, mes, ano, diaseguinte, meseguinte, anoseguinte;
  cout << "Digite o dia entre 01 e 31: " << endl;
  cin >> dia;
  cout << "Digite o mes entre 01 e 12: " << endl;
  cin >> mes;
  cout << "Digite o ano : " << endl;
  cin >> ano;
  if (dia > 31 || mes > 12){
    cout << "Erro!" ;
    return 0;
  }      
  if (dia == 31 && (mes == 1 || mes == 03 || mes == 05 || mes == 7 || mes == 8 || mes == 10 )){
    diaseguinte = dia - 30;
    meseguinte = mes + 1;
    cout << dia << "/" << mes << "/" << ano << endl;
    cout << diaseguinte << "/" << meseguinte << "/" << ano << endl;
    return 0;
  }
  else if (dia == 31 && (mes == 2 || mes == 04 || mes == 06 || mes == 9 || mes == 11)){
    cout << "Erro";
    return 0;
  }
  else if (dia == 31 && mes == 12){
    diaseguinte = dia - 30;
    meseguinte = mes - 11;
    anoseguinte = ano + 1;
    cout << dia << "/" << mes << "/" << ano << endl;
    cout << diaseguinte << "/" << meseguinte << "/" << anoseguinte << endl;
    return 0;
  }
  else if (dia == 30 && (mes == 04 || mes == 06 || mes == 9 || mes == 11)){
    diaseguinte = dia - 29;
    meseguinte = mes + 1;
    cout << dia << "/" << mes << "/" << ano << endl;
    cout << diaseguinte << "/" << meseguinte << "/" << ano << endl;
    return 0;
  }
  else if (ano % 400==0 || ano % 4==0 || ano % 100 ==0){
    if(dia < 29 && mes == 2){
      cout << " É ano bissexto" << endl; 
      cout << dia << "/" << mes << "/" << ano << endl;
      cout << dia + 1 << "/" << mes << "/" << ano << endl;
      return 0;
    }
    else if (dia == 29 && mes == 2){
      diaseguinte = dia - 28;
      meseguinte = mes + 1;
      cout << " É ano bissexto" << endl;
      cout << dia << "/" << mes << "/" << ano << endl;
      cout << diaseguinte << "/" << meseguinte << "/" << ano << endl;
      return 0;
    }
  }
  else if (ano % 100 != 0){
    if (dia >= 29 && mes == 02){
      cout << "Erro";
      return 0;
      }
    else if (dia == 28 && mes == 02){
      diaseguinte = dia - 27;
      meseguinte = mes + 1;
      cout << dia << "/" << mes << "/" << ano << endl;
      cout << diaseguinte << "/" << meseguinte << "/" << ano << endl;
      return 0;
    }
  }
  cout << dia << "/" << mes << "/" << ano << endl;
  cout << dia + 1 << "/" << mes << "/" << ano << endl;
  return 0;
}