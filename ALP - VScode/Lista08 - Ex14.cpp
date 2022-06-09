#include <iostream>

using namespace std;

void calc_time(int hri, int mini, int hrt, int mint, int *hrf, int *minf){
    *hrf = hrt - hri;
    *minf = mint - mini;
}

int main(){
    int hrdi, mindi, hrdt, mindt;
    int minf, hrf;
    cout << "Digite a hora e minuto de inicio da partida." << endl;
    cout << "Hora: ";
    cin >> hrdi;
    cout << "Minuto: ";
    cin >> mindi;
    cout << "Digite a hora e minuto de Termino da partida." << endl;
    cout << "Hora: ";
    cin >> hrdt;
    cout << "Minuto: ";
    cin >> mindt;

    calc_time(hrdi, mindi, hrdt, mindt, &hrf, &minf);

    if (hrf > 24){
        cout << "Tempo limite ultrapassado." << endl;
    }
    else if (hrf <= 24) {
        cout << "A tempo de duracao de partida foi: " << hrf << "h" << minf << "min" << endl;
    }

    return 0;
}

