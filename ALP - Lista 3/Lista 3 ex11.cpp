#include <iostream>
#include <cmath>

using namespace std;

int main () {
int A, B, C;
cout << "Digite tres numeros e eles serao exibidos em ordem crescente: " << endl;
cin >> A >> B >> C;
if (A > B && A > C && B > C){
  cout << C << B << A;
}
else if (B > A && B > C && A > C){
  cout << C << A << B;
}
else if (B > A && B > C && C > A){
  cout << A << C << B;
}
else if (A > B && C > B && A > C){
  cout << B << C << A;
}
else if (C > A && C > B && B > A ){
  cout << A << B << C;
}
else if (C > A && C > B && A > B){
  cout << B << A << C;
}
return 0;
}