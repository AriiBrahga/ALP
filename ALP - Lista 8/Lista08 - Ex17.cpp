#include <iostream>

using namespace std;

float media_num(float med, int r){
    med = med / r;
    cout << "A media aritimetica dos numeros digitados eh: " << med << endl;
}

int main(){
    int num, r = 0;
    int i = 1, escolha;
    float med;
    while(i>0){
        cout << "Digite um numero inteiro positivo: " << endl;
        cin >> num;

        med +=num;
        r += 1;
        cout << "Voce deseja colocar mais numeros inteiros? \n1 - Nao. \n2 - Sim." << endl;
        cin >> escolha;

        if(escolha == 1){
            i = 0;
        }
    }
    media_num(med, r);

    return 0;
    
}