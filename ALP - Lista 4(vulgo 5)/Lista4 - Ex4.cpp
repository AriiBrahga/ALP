#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;

int main () {
    int cod = 1, nlinha, menor10 = 0, entre10e20 = 0, maior20 = 0;
    float preco, precovenda, totalcompra, totalvenda, lucrototal, x, conta;
    
    while (cod){
        
        cout << "Digite o codigo: " << endl;
        cin >> cod;
        cout << "Digite o preço da compra: " << endl;
        cin >> preco;
        cout << "Digite o preço de venda: " << endl;
        cin >> precovenda;

        totalcompra += preco;
        totalvenda += precovenda;
        lucrototal = totalvenda - totalcompra;
        x = precovenda - preco;
        conta = (float)(100 * x)/ preco;

        if (conta < 10){
          menor10++;
        }
        else if(conta >= 10 && conta <= 20){
          entre10e20++;
        }
        else if (conta > 20){
          maior20++;
        }
    }

    cout << "O lucro total é: " << lucrototal << endl;
    cout << "O total da compra é: " << totalcompra << endl;
    cout << "O total da venda é: " << totalvenda << endl;
    cout << "A quantidade de lucro infeiror a 10% é: " << menor10 << endl;
    cout << "A quantidade de lucro entre 10% e 20% é: " << entre10e20 << endl;
    cout << "A quantidade de lucro maior que 20% é: " << maior20 << endl;

    return 0;
}
