#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int calc_fatorial(int num, int fatorial){  

    for(int i = 1; i <= num; i++){
        fatorial = fatorial * i;
    }
    cout << "O numero digitado e seu fatorial eh: " << fatorial << endl;
}

int main(){
    int num, fat = 1;

    cout << "Digite um numero: " << endl;
    cin >> num;

    calc_fatorial(num, fat);

    return 0;
}