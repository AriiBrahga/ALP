#include <iostream>
#include <math.h>
using namespace std;

void tmp_maquina(int seg, int *hora, int *min, int *segundos){
  
  *hora = seg / 3600;
  seg %=3600;
  *min = seg / 60;
  *segundos = seg %=60;;

}

int main (){
  int segundo, hr, m, s;
 
  cout << "Digite o tempo da maquina expresso em segundos: " << endl;
  cin >> segundo;

  tmp_maquina(segundo, &hr, &m, &s);

  cout << hr << "h" << m << "min" << s << "seg" << endl; 
  return 0;
}