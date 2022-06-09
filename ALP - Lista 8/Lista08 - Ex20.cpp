#include <iostream>

using namespace std;

int tabuada(int num){
    int tabuada;
    for (int i = 1; i <= num; i++){
        tabuada = i * num;
        cout << i << " x " << num << " = " << tabuada << endl;
    }

}

int main(){
    int n;
    cout << "Digite o valor N para calcular a tabuada: " << endl;
    cin >> n;

    tabuada(n);

    return 0;
}