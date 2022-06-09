#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int nhe, nhf, H;
  cout << "Informe o numero de horas-extra:" << endl;
  cin >> nhe;
  cout << "Informe o numero de horas-falta: " << endl;
  cin >> nhf;
  H = nhe - (2/3 * nhf);
  if (H < 600){
    cout << "A sua gratificação é de 100" << endl;
    return 0;
  }
  else if (H >= 600 && H < 1200){
    cout << "A sua gratificação é de 200" << endl;
    return 0;
  }
  else if (H >= 1200 && H <= 1800){
    cout << "A sua gratificação é de 300" << endl;
    return 0;
  }
  else if (H >= 1800 && H < 2400){
    cout << "A sua gratificação é de 400" << endl;
    return 0;
  }
  else if (H > 2400){
    cout << "A sua gratificação é de 500" << endl;
    return 0;
  }
}