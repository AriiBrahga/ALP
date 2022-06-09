#include <iostream>
#include <math.h>

using namespace std;

string m_notaf(float num){
    if(num >= 0 && num <= 4.9){
        return "D";
    } 
    else if(num >= 5 && num <= 6.9){
        return "C";
    }
    else if(num >= 7 && num <= 8.9){
        return "B";
    }
    else if(num >= 9 && num <= 10){
        return "A";
    }
}

int main(){
    float num;
    string r;

    cout << "Digite a media final do aluno: " << endl;
    cin >> num;

    r = m_notaf(num);

    cout << "O conceito da media final do aluno eh: " << r << endl;

    return 0;
}