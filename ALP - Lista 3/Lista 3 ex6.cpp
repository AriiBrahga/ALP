#include <iostream>

using namespace std;

int main() {
    int Ano;
    cout << " Digite um ano: " << endl;
    cin >> Ano;
      if(Ano%400==0 || Ano % 4==0 || Ano % 100 ==0){
        cout << " � ano bissexto" ;
      }
      else if (Ano % 100 != 0){
        cout << " N�o � ano bissexto" ;
      }
    return 0;
}