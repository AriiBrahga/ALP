#include <iostream>

using namespace std;

int main(){
    int A, B, C;
    cout << " Digite dois valores inteiros: " << endl;
    cin >> A >> B;
        if (A == B){
        C = A+B;
        cout << "Soma-se os dois gerando C = " << C << endl;
      }
        else if (A != B){
        C = A*B;
        cout << "Multiplica-se os valores gerando C = " << C << endl;
      }
    return 0;
}