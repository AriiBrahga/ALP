#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>

using namespace std;
int main(void) {
  //Trabalho avaliativo - ALP
  //Matheus Pano - RA: 2840482011042
  //Arielson silva - Ra: 2840482011013

  //senha para Adm = 12345
 
   
   
  //declara��o de variaveis
  // Variaveis para a inteface do administrador.
  int escolha, escolha_1, escolha_2;
  int senha, opcao, faturamento, totalfaturado = 0;
  //Variaveis do suco
  int qtd_lar = 2, qtd_caju = 3, qtd_mar = 3, qtd_uva = 1;
  //Variaveis do chips
  int qtd_chips_pres = 3, qtd_chips_chus = 4, qtd_chips_queijo = 6; 
  //Variaveis refri
  int qtd_coca = 5, qtd_guar = 2,qtd_fanta = 3;
  float somasuco = 0, somarefri = 0, somachips = 0;
  // Variaveis para a interface do usuario.
  float dinheiro = 0, totalapagar = 0, troco = 0;
  int qnt = 0, suco, chips, refri, produto;
  float precodosuco = 0, precodorefri = 0, precodochips = 0;
  
  // Aqui � pedido se deseja utilizar o programa como ADM ou Usuario.
  cout << "Voc� deseja executar a maquina como: \n1 - Administrador. \n2 - Usuario." << endl;
  cin >> escolha;
  while (escolha >=0){
    //esses comandos s�o para o uso do Administrador
    if (escolha == 1){
      cout << "Digite a senha: ";
      cin >> senha;
      if (senha == 12345){
      //se a senha estiver correta:
      // Aqui pede ao Administrador o que ele deseja fazer na maquina.
      cout << "Escolha: \n1 - Quanto pode faturar. \n2 - Quanto a maquina j� faturou. \n3 - Modificar a Quantidade de produtos." << endl;
      cin >> opcao; 
    
        if (opcao == 1){
          //Demonstra a quantidade inicial disponivel em estoque dos produtos
          cout << "A quantidade de produtos: " << "Sucos: \nLaranja: " << qtd_lar << "\nCaju: " << qtd_caju  << "\nMaracuja: " << qtd_mar << "\nUva " << qtd_uva << "\nChips: \nPresunto: " << qtd_chips_pres << "\nChurrasco: " << qtd_chips_chus << "\nQueijo: " << qtd_chips_queijo << "\nRefrigerante: \nCoca: " << qtd_coca << "\nGuarana: " << qtd_guar <<"\nFanta: "<<qtd_fanta<<"\n" << endl;
          //Soma dos componentes, para a realizacao do faturamento
          somasuco = (qtd_lar + qtd_mar + qtd_uva + qtd_caju)*3;
          somachips = (qtd_chips_chus + qtd_chips_pres + qtd_chips_queijo) * 5;
          somarefri = (qtd_coca + qtd_guar+qtd_fanta)*4;
          faturamento = somasuco + somachips + somarefri;
          cout << "Com esses itens disponiveis a maquina pode faturar: " << faturamento << endl;
        }
        else if(opcao == 2){
          //Mostrar quanto a maquina ja faturou com as vendas

          cout << "A maquina ja faturou: " << totalfaturado << endl;
        }
        else if(opcao == 3){
          cout << "A quantidade de produtos: " << "\nSucos: \nLaranja: " << qtd_lar << "\nCaju: " << qtd_caju  << "\nMaracuja: " << qtd_mar << "\nUva " << qtd_uva << "\nChips: \nPresunto: " << qtd_chips_pres << "\nChurrasco: " << qtd_chips_chus << "\nQueijo: " << qtd_chips_queijo << "\nRefrigerante: \nCoca: " << qtd_coca << "\nGuarana: " << qtd_guar <<"\nFanta: "<<qtd_fanta<<"\n" << endl;

          cout << "Produtos que o administrador pode modificar a quantidade" << endl;
          //Declarar valores para cada item, caso queira modificar
          cout << "Quantidade de suco de laranja:"<<endl;
          cin >> qtd_lar;
          cout << "Quantidade de suco de caju:"<<endl;
          cin >> qtd_caju;
          cout << "Quantidade de suco de maracuja:"<<endl;
          cin >> qtd_mar;
          cout << "Quantidade de suco de uva:"<<endl;
          cin >> qtd_uva;
          cout << "Quantidade de chips de presunto: "<<endl;
          cin >> qtd_chips_pres;
          cout << "Quantidade de chips de churrasco: "<<endl;
          cin >> qtd_chips_chus;
          cout << "Quantidade de chips de queijo: "<<endl;
          cin >> qtd_chips_queijo;
          cout << "Quantidade de Coca-Cola: "<<endl;
          cin >> qtd_coca;
          cout << "Quantidade de Guarana: "<<endl;
          cin >> qtd_guar;
          cout << "Quantidade de Fanta: "<< endl;
          cin >> qtd_fanta;
        
        }  
      }
      else{
        //se a senha estiver incorreta
        cout << "SENHA INCORRETA\n TENTE NOVAMENTE"<<endl;
        cout << "Digite a senha novamente: " << endl;
        cin >> senha;
      }
    }
    //Comandos do para o uso do Usuario
    else if (escolha == 2){
      // O while vai ser executado enquanto a qnt for maior ou igual a 0, e ele so parara quando o usario nao desejar utilzar mais a maquina.
      while (qnt >= 0){
        cout << "Escolha o produto: \n1 - Suco R$3,00. \n2 - Chips R$5,00. \n3 - Refrigerante R$4,00. " << endl;
        cin >> produto;
      //Aqui pede o tipo de produto que o usuario quer, no caso suco ou refri ou chips.
        if (produto == 1){
          cout << "Os sucos disponiveis s�o: \n1 - Suco de Laranja. \n2 - Suco de Caju. \n3 - Suco de Maracuja \n4 - Suco de uva" << endl;
          cin >> suco;
          //O suco escolhido � removido de sua quantidade original. 
          if (suco == 1){
            qtd_lar--;
          }
          else if(suco == 2){
            qtd_caju--;
          }
          else if(suco == 3){
            qtd_mar--;
          }
          else if(suco == 4){
            qtd_uva--;
          }
          precodosuco = 3;
          totalapagar += precodosuco;
        // O preco total esta sendo armazenado no total a pagar.    
        // Apos o pedido do usuario e quantidade desejada. O programa pergunta se o usuario deseja pedir mais alguma coisa. 
          cout << "Deseja pedir mais alguma coisa: \n1 - Sim. \n2 - Nao." << endl;
          cin >> escolha_1;
        }
        if (produto == 2){
          cout << "Os chips disponiveis sao: \n1 - Chips sabor queijo \n2 - Chips sabor churrasco \n3 - Chips sabor Presunto" << endl;
          cin >> chips;
          //O chips escolhido � removido de sua quantidade original. 
          if (chips == 1){
            qtd_chips_queijo--;
          }
          else if (chips == 2){
            qtd_chips_chus--;
          }
          else if(chips == 3){
            qtd_chips_pres--;
          }
          precodochips = 5;
          totalapagar += precodochips;
        // O preco total esta sendo armazenado no total a pagar.    
        // Apos o pedido do usuario e quantidade desejada. O programa pergunta se o usuario deseja pedir mais alguma coisa. 
          cout << "Deseja pedir mais alguma coisa: \n1 - Sim. \n2 - Nao." << endl;
          cin >> escolha_1;
        }
        if (produto == 3){
          cout << "Os refrigerantes disponiveis s�o: \n1 - Coca-cola \n2 - Guarana \n3 - Fanta Laranja" << endl;
          cin >> refri;
          //O refri escolhido � removido de sua quantidade original. 
          if(refri == 1){
            qtd_coca--;
          }
          else if(refri == 2){
            qtd_guar--;
          }
          else if(refri == 3){
            qtd_fanta--;
          }
          precodorefri = 4;
          totalapagar += precodorefri;
        // O preco total esta sendo armazenado no total a pagar.    
        // Apos o pedido do usuario e quantidade desejada. O programa pergunta se o usuario deseja pedir mais alguma coisa. 
          cout << "Deseja pedir mais alguma coisa: \n1 - Sim. \n2 - Nao." << endl;
          cin >> escolha_1;
        }
        
        if(escolha_1 == 2) { // Aqui caso o usario n�o deseje mais alguma coisa o programa � encerrado    
          totalfaturado += totalapagar; // incrementa o faturamento da maquina
          cout << "Ok, o total a pagar �: " << totalapagar << endl;
          cout << "Por favor insira o dinheiro: " << endl;
          cin >> dinheiro;
          if (dinheiro <= totalapagar){
            cout << "Saldo insuficiente." << endl;
            cout << "Por favor insira o dinheiro: " << endl;
            cin >> dinheiro;
          }
          troco = dinheiro - totalapagar;
          cout << "Seu troco �: " << troco << endl; 
          cout << "Obrigado pela preferencia. Tenha um bom dia!" << endl;
          qnt = -1; // isso indica para finalizar o loop.
          totalapagar = 0; //resta o total a pagar.
        }
      }      
    }
    //Aqui o programa pergunta se o usuario deseja continuar utilizando o programa.
    cout << "Voc� deseja continuar executando a maquina: \n1 - Sim. \n2 - Nao." << endl;
    cin >> escolha_2;
    if (escolha_2 == 1){
    //se a resposta do usario for sim:
      cout << "Voc� deseja executar a maquina como: \n1 - Administrador. \n2 - Usuario." << endl;
      cin >> escolha;
      qnt = 1; // com a quantidade sendo = 1, o programa permite que o usuario volte para o usuario.
    }
    else{
    //se a resposta do usuario for nao:
      cout << "Obrigado tenha um bom dia!" << endl;
      escolha = -1; // isso indica o fim do loop while.
    }
  }
  return 0;
}