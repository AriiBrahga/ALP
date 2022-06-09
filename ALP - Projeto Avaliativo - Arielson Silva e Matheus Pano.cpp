//#incude <Matheus Prieto Pano>
//using RA: 2840482011042 std;
// #include <Arielson da Silva Braga>
//using RA: 2840482011013 std;

// Administrador. A senha do adm eh : 54321.




#include <iostream>

using namespace std;

// Configuracao de comandos do terminal de acordo com SO
#ifndef _WIN32
// Linux
#define CLEAR "clear"
#define PAUSE "read"
#else
// Para windowns
#define CLEAR "cls"
#define PAUSE "pause"
#endif // !_WIN32
//Aqui foi criada uma struct para armazenar registros dos carros estacionados
struct carro {
  //Essa variavel armazena as placas registradas no sistema
	int placa[1000];
	//Essa variavel armazena o tipo do carro que o usuario possui
	string tipo_do_carro[1000];
  //Essa variavel define o valo a ser pago de acordo com o indice da placa registrada
	int pagamento[1000];
  //Essa variavel armazena o andar que determinado carro está
	int andar_estacionamento[1000];
};
//Aqui criamos uma funçao para calcular o valor a ser pago pelo usuario
int total_pagar(int horadousuario, int tipo_carro) {
  int pag_estacionamento;
  pag_estacionamento = 0;
	if( tipo_carro == 1 || tipo_carro == 3){
    pag_estacionamento = 5 * horadousuario;
  }
  else if(tipo_carro == 2){
    pag_estacionamento = 7 * horadousuario; 
  }
  return pag_estacionamento;
}
int hora_e_data(int tipo, int resposta){
  //Funcao para determinar o tempo que o usuario vai passar no estacionamento.
  int hora_total;
  int dia, somadia, diaseguinte;
  int mes, ano, horario;
  string data; // A data e hora no nosso programa foi fixa, para que nao ocorresse nenhum problema maior na hora da execucao do programa.
    data = "04/07/2020";
  int horas, minutos, saida;
  string hora; 
    hora = "09:15"; 
  int diaria;
  hora_total = 0;
  if (resposta == 2){
    cout << "Dia atual: " << data << endl;
    cout << "Horario atual: " << hora << endl;
    cout << "Quantos dias pretende utilizar o estacionamento? " << endl;
    cin >> diaria;
  
    dia = 4;
    mes = 7;
    diaseguinte = 0;
    somadia = dia + diaria;

    horario = diaria * 24;
    if (somadia > 31){
      system(CLEAR);
      mes += 1;
      somadia = somadia  - 31;  
    }
    cout << "Seu checkout sera realizado no dia " << somadia <<  "/" << mes << "/2020"<<endl;
    cout << "E no total voce ficara " << horario << " hrs" << endl;
    hora_total += horario;
  }

  else if(resposta == 1){
    horas = 9;
    minutos = 15;
    cout << "Hora de chegada: " << hora << ":" << minutos << endl;
    cout << "Quantas horas pretende ficar?" << endl;
    cin >> horario;

    saida = horas + horario;

    if (saida >= 24){
      saida = saida - 24;
    }

    cout << "Seu checkout sera realizado as: " << saida << ":" << minutos << endl;
    hora_total += horario;
  }
  return hora_total;
}


int main (){
  
  int modo_execucao, continuar;
  //Variaveis da funcao e do struct
	int verif_pagamento;
  int i;
  //Essa variavel define a struct carro sendo pl aqui na funçao main
	carro pl;
  //Variaveis para funcao
	int armazena_hora;
  int resp;
  //Variaveis modo estacionar
  int escolha_uso, tipo_carro, escolha_nvl;
  int nv1cp, nv1cm, nv2cp, nv3cm, nv4ce, nv5cm; // cp - carro popular, cm - caminhonete, ce - carro esportivo
  int valor_carro, valor_camionete; 

  //Variaveis modo administrador
  // Administrador. A senha do adm eh : 54321.
  int senha;
  int carro, camionete, caresport;
  int qtd_carros, qtd_camin, qtd_lot, faturamento_medio, faturamento_total, perda;
	int fat;
	int pagamento_dinheiro;
  // igualamos todas as variaveis igual a 0 para nao ocorrer erros em relação ao valor das mesmas.
	i = 0;
  armazena_hora = 0;
  qtd_carros = 0;
  qtd_camin = 0;
  qtd_lot = 0;
  faturamento_total = 0;
  faturamento_medio = 0;
  perda = 0;
  nv1cp = 20;
  nv1cm = 30;
  nv2cp = 25;
  nv3cm = 10;
  nv4ce = 15;
  nv5cm = 20;

  continuar = 1;
  do { // utilizando a funcao do while para que o programa execute ao menos uma vez.
  
    cout << "Qual modo deseja executar o Autonomous Parking System. \n1 - Estacionar. \n2 - Retirar o Veiculo. \n3 - Administrador." << endl;
    cin >> modo_execucao;  

    if (modo_execucao == 1){
      system(CLEAR);
      cout <<  "Pretende ficar quanto tempo?" << endl;
      cout << "[1] - Algumas horas\n[2] - Alguns dias"<< endl;
      cin >> resp;
      
      cout << "Qual o tipo do carro? \n1 - Carro popular; \n2 - Camionete; \n3 - Carro esportivo;" << endl;
      cin >> tipo_carro;
      // A seguir exibe o codigo de acordo com o tipo de carro, no qual vai contabilizar no sistema o tipo de carro e as vagas disponiveis.
      if(tipo_carro == 1){
        //Aqui printamos para o usuario uma tabela que indica a quantidade de vagas em cada andar para determinada categoria de carro  
        system(CLEAR);
        cout << "|------------Autonomous Parking System------------|" << endl;
        cout << "|-Andar 1-|-Andar 2-|-Andar 3-|-Andar 4-|-Andar 5-|" << endl;
        cout << "|---"<< nv1cp << "----|---"<<nv2cp<<"----|"<<"----0----" << "|" <<"----0----" << "|"<<"----0----"<< "|" << endl;
        cout << "|_________________________________________________|" << endl;
        
        cout << "Digite o numero referente ao andar" << endl;
        cin >> escolha_nvl;
        
        if(escolha_nvl == 1){// Aqui adiciona na quant de carro que sera usada no relatorio, e tambem vai reduzindo numero de vagas disponiveis.
          if (nv1cp == 0){
            while(escolha_nvl == 1){
              cout << "Lotado, vagas indisponiveis!!" << endl;    
              cout << "Digite o numero referente ao andar" << endl;
              cin >> escolha_nvl;
            }
            perda += 1;
          }
          else {
            nv1cp -=1;
            qtd_carros +=1;
						cout << "Qual os numeros da placa do carro"<< endl; // Aqui armazenena no struct a vaviaveis do carro (placa, tipo do carro, andar)
						cin >> pl.placa[i];
            pl.tipo_do_carro[i] = "Carro Popular";
            pl.andar_estacionamento[i] = 1;
						cout << "O numero do seu carro eh: " << i << endl;
          }
        }
        else if (escolha_nvl == 2){// Aqui adiciona na quant de carro que sera usada no relatorio, e tambem vai reduzindo numero de vagas disponiveis.
          if (nv2cp == 0){
            while(escolha_nvl == 2){
              cout << "Lotado, vagas indisponiveis!!" << endl;    
              cout << "Digite o numero referente ao andar" << endl;
              cin >> escolha_nvl;
            }
            perda +=1;
          }
          else{
            nv2cp -=1;
            qtd_carros +=1;
            cout << "Qual os numeros da placa do carro"<< endl;// Aqui armazenena no struct a vaviaveis do carro (placa, tipo do carro, andar)
						cin >> pl.placa[i];
            pl.tipo_do_carro[i] = "Carro Popular";
            pl.andar_estacionamento[i] = 2;
						cout << "O numero do seu carro eh: " << i << endl;
          }
        }
        else{
          cout << "Andar indisponivel, por favor escolha outro: " << endl;
          cin >> escolha_nvl;
        }
        armazena_hora = hora_e_data(5, resp); // Aqui chamamos as funcoes para a execucao do programa.
        verif_pagamento = total_pagar(armazena_hora, tipo_carro);
        pl.pagamento[i] = verif_pagamento;
      }
      else if(tipo_carro == 2){
        // Aqui adiciona na quant de carro que sera usada no relatorio, e tambem vai reduzindo numero de vagas disponiveis.
        system(CLEAR);
        //Aqui printamos para o usuario uma tabela que indica a quantidade de vagas em cada andar para determinada categoria de carro  
        cout << "|------------Autonomous Parking System------------|" << endl;
        cout << "|-Andar 1-|-Andar 2-|-Andar 3-|-Andar 4-|-Andar 5-|" << endl;
        cout << "|----"<< nv1cm << "---|----0----|" << "---" << nv3cm << "----|" <<"----0----" << "|"<<"----"<< nv5cm <<"---"<< "|" << endl;
        cout << "|_________________________________________________|" << endl;
      
        cout << "Digite o numero referente ao andar" << endl;
        cin >> escolha_nvl;
        
        if (escolha_nvl == 1){// Aqui adiciona na quant de carro que sera usada no relatorio, e tambem vai reduzindo numero de vagas disponiveis.
          if (nv1cm == 0){
            while(escolha_nvl == 1){
              cout << "Lotado, vagas indisponiveis!!" << endl;    
              cout << "Digite o numero referente ao andar" << endl;
              cin >> escolha_nvl;
            }
            perda +=1;
          }
          else{
            nv1cm -=1;
            qtd_camin +=1;
            cout << "Qual os numeros da placa do carro"<< endl;// Aqui armazenena no struct a vaviaveis do carro (placa, tipo do carro, andar)
						cin >> pl.placa[i];
            pl.tipo_do_carro[i] = "Camionete";
            pl.andar_estacionamento[i] = 1;
						cout << "O numero do seu carro eh: " << i << endl;
          }
        }
        
        else if (escolha_nvl == 3){
            if (nv3cm == 0){
              while(escolha_nvl == 3){
              cout << "Lotado, vagas indisponiveis!!" << endl;    
              cout << "Digite o numero referente ao andar" << endl;
              cin >> escolha_nvl;
            }
            perda +=1;
          }
          else{
            nv3cm -=1;
            qtd_camin +=1;
            cout << "Qual os numeros da placa do carro"<< endl;// Aqui armazenena no struct a vaviaveis do carro (placa, tipo do carro, andar)
						cin >> pl.placa[i];
            pl.tipo_do_carro[i] = "Camionete";
            pl.andar_estacionamento[i] = 3;
						cout << "O numero do seu carro eh: " << i << endl;
          }          
        }

        else if (escolha_nvl == 5){
          if (nv5cm == 0){
            while(escolha_nvl == 5){
              cout << "Lotado, vagas indisponiveis!!" << endl;    
              cout << "Digite o numero referente ao andar" << endl;
              cin >> escolha_nvl;
            }
            perda +=1;
          }
          else{
            nv5cm -=1;
            qtd_camin +=1;
            cout << "Qual os numeros da placa do carro"<< endl;// Aqui armazenena no struct a vaviaveis do carro (placa, tipo do carro, andar)
						cin >> pl.placa[i];
            pl.tipo_do_carro[i] = "Camionete";
            pl.andar_estacionamento[i] = 5;
						cout << "O numero do seu carro eh: " << i << endl;
          }
        }
        armazena_hora = hora_e_data(7, resp);
        verif_pagamento = total_pagar(armazena_hora, tipo_carro);
        pl.pagamento[i] = verif_pagamento;
      }

      else if(tipo_carro == 3){
        system(CLEAR);
        //Aqui printamos para o usuario uma tabela que indica a quantidade de vagas em cada andar para determinada categoria de carro  
        cout << "|------------Autonomous Parking System------------|" << endl;
        cout << "|-Andar 1-|-Andar 2-|-Andar 3-|-Andar 4-|-Andar 5-|" << endl;
        cout << "|----0----|----0----|----0----|" << "---"<< nv4ce << "----|" <<"----0----"<< "|" << endl;
        cout << "|_________________________________________________|" << endl;
        
        cout << "Digite o numero referente ao andar" << endl;
        cin >> escolha_nvl;

        if(escolha_nvl == 4){// Aqui adiciona na quant de carro que sera usada no relatorio, e tambem vai reduzindo numero de vagas disponiveis.
          if (nv4ce == 0){
            while(escolha_nvl == 4){
              cout << "Lotado, vagas indisponiveis!!" << endl;    
              cout << "Digite o numero referente ao andar" << endl;
              cin >> escolha_nvl;
            }
            perda +=1;
          }
          else {
            nv4ce -=1;
            qtd_carros +=1;
            cout << "Qual os numeros da placa do carro"<< endl;// Aqui armazenena no struct a vaviaveis do carro (placa, tipo do carro, andar)
						cin >> pl.placa[i];
            pl.tipo_do_carro[i] = "Carro Esportivo";
            pl.andar_estacionamento[i] = 4;
						cout << "O numero do seu carro eh: " << i << endl;
          }
        }
        else{
          cout << "Andar indisponivel, por favor escolha outro: " << endl;
          cin >> escolha_nvl;
        }
        armazena_hora = hora_e_data(5, resp);//Aqui chamamos a funcao para realizar o programa.
        verif_pagamento = total_pagar(armazena_hora, tipo_carro);
        pl.pagamento[i] = verif_pagamento;
      }
      i++;
    }
    else if (modo_execucao == 2){
			// Aqui demos inicio ao modo de retirada de veiculo
      cout << "qual o numero do seu carro:" << endl;
			cin >> i;
			cout << armazena_hora << endl;
			cout <<"Placa: " << pl.placa[i]<< endl;
      cout <<"Andar: " << pl.andar_estacionamento[i]<< endl;
      cout << "Tipo do carro: " << pl.tipo_do_carro[i] << endl;
      cout << "Total a pagar: " << pl.pagamento[i] << endl;
      // De acordo com o tipo de veiculo e ao andar correspondente ele aumenta o numero de vagas no estacionamento correto
      if (pl.andar_estacionamento[i] == 1 && pl.tipo_do_carro[i] == "Carro Popular"){
        nv1cp +=1;
      }
      else if (pl.andar_estacionamento[i] == 2 && pl.tipo_do_carro[i] == "Carro Popular"){
        nv2cp +=1;
      }
      else if (pl.andar_estacionamento[i] == 1 && pl.tipo_do_carro[i] == "Camionete"){
        nv1cm +=1;
      }
      else if (pl.andar_estacionamento[i] == 3 && pl.tipo_do_carro[i] == "Camionete"){
        nv3cm +=1;
      }
      else if (pl.andar_estacionamento[i] == 5 && pl.tipo_do_carro[i] == "Camionete"){
        nv5cm +=1;
      }
      else if (pl.andar_estacionamento[i] == 4 && pl.tipo_do_carro[i] == "Carro Esportivo"){
        nv4ce +=1;
      }
			//Aqui aparece para o usuario o valor a ser pago pelo tempo de uso do estacionamento
      cout << "Digite o valor para o pagamento: " << endl;
      cin >> pagamento_dinheiro;
      faturamento_total += pl.pagamento[i];
      faturamento_medio = faturamento_total/ armazena_hora;
      if(pagamento_dinheiro >= pl.pagamento[i]){
				cout << "Seu troco eh: R$" << pagamento_dinheiro - pl.pagamento[i] << endl;
      }
			//Aqui ja verifica se o usuario necessita de troco ou nao e ja libera o veiculo.
      else if(pagamento_dinheiro <= pl.pagamento[i]){
        cout << "Pagamento Invalido!!! Valor pago eh menor que o total. Digite o valor pago novamente." << endl;
        cin >> pagamento_dinheiro;
        if(pagamento_dinheiro >= pl.pagamento[i]){
				cout << "Seu troco eh: R$" << pagamento_dinheiro - pl.pagamento[i] << endl;
        }
      }
			cout << "Obrigado volte Sempre!!!!" << endl;
    }
    else if (modo_execucao == 3){
      // Aqui o programa pede uma senha ao usuario.
      system(CLEAR);
      cout << "Digite a senha para acessar o modo administrador. " << endl; // Senha do adm.
      cin >> senha;

      if (senha == 54321){
        // Aqui caso a senha esteja correta executa o modo administrador e mostra o relatorio.
        system(CLEAR);
        cout << "=====================  Relatorio  =====================" << endl; 
        cout << "=> Quantidade de carros atendidos: " << qtd_carros << endl;
        cout << "=> Quantidade de camionetes atendidas: " << qtd_camin << endl;
        cout << "=> Faturamento medio por hora: " << faturamento_medio << endl;
        cout << "=> Faturamento total: " << faturamento_total << endl;
        cout << "=> Quantidade de veiculos nao atendidos por causa de lotacao: " << perda << endl;
				cout << "======================================================"<<endl;
      }

      else{
        //caso a senha esteja incorreta ele pede para que o usuario digite-a novamente.
          while (senha != 54321){
          cout << "Senha incorreta. Digite a senha novamente." <<endl;
          cin >> senha;
        }
      }
    }
    //Aqui a maquina pergunta ao usuario se deseja continuar executando a mascara
    cout << "Deseja Continuar? \n1 - Sim \n2 - Nao" << endl;
    cin >> continuar; 
  }
  while (continuar == 1);
  cout << "Obrigado por usar o Autonomous Parking System!!!!!!" << endl;
  
}