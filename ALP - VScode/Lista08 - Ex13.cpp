#include <iostream>
#include <math.h>

using namespace std;

int cresc_ordem(int *n1, int *n2, int *n3){
    
    if(*n1 > *n2 && *n1 > *n3 && *n2 > *n3){
        cout << *n3 << ", " << *n2 << ", " << *n1 << endl;
    }
    if(*n1 > *n2 && *n1 > *n3 && *n3 > *n2){
        cout << *n2 << ", " << *n3 << ", " << *n1 << endl;
    }
    if(*n2 > *n1 && *n2 > *n3 && *n1 > *n3){
        cout << *n3 << *n1 << *n2 << endl;
    }
    if(*n2 > *n1 && *n2 > *n3 && *n3 > *n1){
        cout << *n1 << *n3 << *n2 << endl;
    }
    if(*n3 > *n2 && *n3 > *n1 && *n2 > *n1){
        cout << *n1 << *n2 << *n3 << endl;
    }
    if(*n3 > *n2 && *n3 > *n1 && *n1 > *n2){
        cout << *n2 << *n1 << *n3 << endl;
    }
} 


int main(){
    int n1, n2, n3;

    cout << "Digite um numero: " << endl;
    cin >> n1;
    cout << "Digite outro numero: " << endl;
    cin >> n2;
    cout << "Digite o terceiro numero: " << endl;
    cin >> n3;

    cresc_ordem(&n1, &n2, &n3);

    return 0;
}