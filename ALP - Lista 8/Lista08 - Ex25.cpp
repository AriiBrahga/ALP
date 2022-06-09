#include <iostream>

using namespace std;

int calculo(int num){
    int fracao = 0;
   
    for(int i = 1; i <= num; i++){
        fracao +=(float) ((i*i) + 1)/ (i + 3);
    }
    cout << "O valor desse numero na fracao eh: " << fracao << endl;
}

int main(){
    int n;
    cout << "Digite um valor inteiro positivo: ";
    cin >> n;

    calculo(n);

    return 0;
}