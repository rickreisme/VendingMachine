// Rickson Reis Amoroso, RA 2840482121001
// Daniel Alves Cunha, RA 2840482121037

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float valorcoca, valorguarana, valorfantaU, valorfantaL, valorpepsi, valorsprite, valordoritos, valorruffles, valorkitkat, valorfiniT, valor_pago, troco;

  float faturamento,bebidas,sal_doces,por_25,por_50,por_75,por_usu,nova_por;

  int produto, acesso, quantidade, opcao, opcao2, opcao3, opcao4, opcao5,resp;
  int qtdcoca, qtdguarana, qtdfantaU, qtdfantaL, qtdpepsi, qtdsprite, qtddoritos, qtdruffles, qtdkitkat, qtdfiniT;

//quantidades iniciais dos produtos
  qtdcoca = 30;
  qtdguarana = 30;
  qtdfantaU = 30;
  qtdfantaL = 30;
  qtdpepsi = 30;
  qtdsprite = 30;
  qtddoritos = 40;
  qtdruffles = 40;
  qtdkitkat = 50;
  qtdfiniT = 50;

//valores dos produtos
  valorcoca = 3.50;
  valorguarana = 3.50;
  valorfantaU = 3.45;
  valorfantaL = 3.45;
  valorpepsi = 3.50;
  valorsprite = 3.30;
  valordoritos = 4.20;
  valorruffles = 4.20;
  valorkitkat = 3.00;
  valorfiniT = 3.15;

 // Variaveis para o modo adm
  faturamento =1.270;
  bebidas= 627;                
  sal_doces= 643.5;
  por_25= 317.6;  
  por_50= 635.2;  
  por_75= 952.8;
            

//menu inicial para escolher o modo de operação da máquina
        cout << "    ==============================" << endl;
        cout << "              BEM-VINDO!" << endl;
        cout << "      ==========================" << endl;
        cout << "        SELECIONE O SEU PERFIL"<< endl;
        cout << "       ===========  ===========" << endl;
        cout << "        USER  [1]    ADMIN. [2] " << endl;
        cout << "       ===========  ===========" <<endl;
        cout << "     >>>>>>>>>>>>> "; cin >> acesso;
        cout << " " << endl;

  if (acesso < 0){
    cout << "Tente novamente e digite uma opção válida!"<<endl;
    exit (0);
  }
    if (acesso > 2){
      cout << "Tente novamente e digite uma opção válida!"<<endl;
      exit (0);
    }
//modo usuário        
if (acesso == 1){
        cout <<"     ==============================="  <<endl;
        cout <<"     |       Vending Machine       |"    <<endl;
        cout <<"     ==============================="  <<endl;
        cout <<"    | Cod |     Produto     | Valor |"<<endl;
        cout <<"    ---------------------------------"<<endl;
         cout <<"    |1 | Coca-Cola          | R$3.50|"<<endl;
        cout << "    |2 | Guaraná Antártica  | R$3.50|" <<endl;
        cout << "    |3 | Fanta Uva          | R$3.45|" <<endl;
        cout << "    |4 | Fanta Laranja      | R$3.45|" <<endl;
        cout << "    |5 | Pepsi              | R$3.50|" <<endl;
        cout << "    |6 | Sprite             | R$3.50|" <<endl;
        cout << "    |7 | Doritos original   | R$4.20|" <<endl;
        cout << "    |8 | Ruffles original   | R$4.20|" <<endl;
        cout << "    |9 | Kitkat             | R$3.00|" <<endl;
        cout << "    |10| Fini Tubes Morango | R$3.15|" <<endl;
        cout <<"    ---------------------------------" <<endl;

  cout << endl << "Escolha um produto digitando o código correspondente: "; 
  cin >> produto;
    if (produto > 10){
      cout << "Tente novamente e digite um código válido!" << endl;
      exit (0);
    }
     if (produto < 1){
      cout << "Tente novamente e digite um código válido!" << endl;
      exit (0);
    }
    cout << endl << "Insira o dinheiro na máquina." << endl;
    cout << " " << endl; 

    cout <<"Qual o valor inserido? ";
    cout << fixed  << setprecision(2);
    cin >> valor_pago;

    cout << endl;

while (produto == 1){
  if(valor_pago == valorcoca){
    cout << " " << endl << "Retire seu produto no local indicado!" << endl;
    qtdcoca --;
  }
  else if (valor_pago > valorcoca){
    cout <<"Retire o seu troco!" << endl;
     troco = valor_pago - valorcoca;
     cout << fixed  << setprecision(2); 
     cout << "Troco: R$ " << troco << endl << " " << endl;
     cout << "Retire seu produto no local indicado!" << endl;
     qtdcoca --;
   }
   else if(valor_pago < valorcoca){
     cout << "Ocorreu um erro! Tente novamente e insira um valor igual ou maior que o valor do produto escolhido!" << endl;
    cout << "*devolve o dinheiro inserido*: " << valor_pago;
   }
   break;
}
   
while (produto == 2){
  if(valor_pago == valorguarana){
    cout << " " << endl << "Retire seu produto no local indicado!" << endl;
    qtdguarana --;
  }
  else if (valor_pago > valorguarana){
    cout <<"Retire o seu troco!" << endl;
     troco = valor_pago - valorguarana;
     cout << fixed  << setprecision(2); 
     cout << "Troco: R$ " << troco << endl << " " << endl;
     cout << "Retire seu produto no local indicado!" << endl;
     qtdguarana --;
   }
   else if(valor_pago < valorguarana){
     cout << "Ocorreu um erro! Tente novamente e insira um valor igual ou maior que o valor do produto escolhido!" << endl;
    cout << "*devolve o dinheiro inserido*: " << valor_pago;
  }
  break;
}
 
while (produto == 3){
  if(valor_pago == valorfantaU){
    cout << " " << endl << "Retire seu produto no local indicado!" << endl;
    qtdfantaU --;
  }
  else if (valor_pago > valorfantaU){
    cout <<"Retire o seu troco!" << endl;
     troco = valor_pago - valorfantaU;
     cout << fixed  << setprecision(2); 
     cout << "Troco: R$ " << troco << endl << " " << endl;
     cout << "Retire seu produto no local indicado!" << endl;
     qtdfantaU --;
   }
   else if(valor_pago < valorfantaU){
     cout << "Ocorreu um erro! Tente novamente e insira um valor igual ou maior que o valor do produto escolhido!" << endl;
    cout << "*devolve o dinheiro inserido*: " << valor_pago;
  }
  break;
}
 
while (produto == 4){
  if(valor_pago == valorfantaL){
    cout << " " << endl << "Retire seu produto no local indicado!" << endl;
    qtdfantaL --;
  }
  else if (valor_pago > valorfantaL){
    cout <<"Retire o seu troco!" << endl;
     troco = valor_pago - valorfantaL;
     cout << fixed  << setprecision(2); 
     cout << "Troco: R$ " << troco << endl << " " << endl;
     cout << "Retire seu produto no local indicado!" << endl;
     qtdfantaL --;
   }
   else if(valor_pago < valorfantaL){
     cout << "Ocorreu um erro! Tente novamente e insira um valor igual ou maior que o valor do produto escolhido!" << endl;
    cout << "*devolve o dinheiro inserido*: " << valor_pago;
  }
  break;
}
 
while (produto == 5){
  if(valor_pago == valorpepsi){
    cout << " " << endl << "Retire seu produto no local indicado!" << endl;
    qtdpepsi --;
  }
  else if (valor_pago > valorpepsi){
    cout <<"Retire o seu troco!" << endl;
     troco = valor_pago - valorpepsi;
     cout << fixed  << setprecision(2); 
     cout << "Troco: R$ " << troco << endl << " " << endl;
     cout << "Retire seu produto no local indicado!" << endl;
     qtdpepsi --;
   }
   else if(valor_pago < valorpepsi){
     cout << "Ocorreu um erro! Tente novamente e insira um valor igual ou maior que o valor do produto escolhido!" << endl;
    cout << "*devolve o dinheiro inserido*: " << valor_pago;
  }
  break;
}
 
while (produto == 6){
  if(valor_pago == valorsprite){
    cout << " " << endl << "Retire seu produto no local indicado!" << endl;
    qtdsprite--;
  }
  else if (valor_pago > valorsprite){
    cout <<"Retire o seu troco!" << endl;
     troco = valor_pago - valorsprite;
     cout << fixed  << setprecision(2); 
     cout << "Troco: R$ " << troco << endl << " " << endl;
     cout << "Retire seu produto no local indicado!" << endl;
   }
   else if(valor_pago < valorsprite){
     cout << "Ocorreu um erro! Tente novamente e insira um valor igual ou maior que o valor do produto escolhido!" << endl;
    cout << "*devolve o dinheiro inserido*: " << valor_pago;
  }
  break;
}
 
while (produto == 7){
  if(valor_pago == valordoritos){
    cout << " " << endl << "Retire seu produto no local indicado!" << endl;
  }
  else if (valor_pago > valordoritos){
    cout <<"Retire o seu troco!" << endl;
     troco = valor_pago - valordoritos;
     cout << fixed  << setprecision(2); 
     cout << "Troco: R$ " << troco << endl << " " << endl;
     cout << "Retire seu produto no local indicado!" << endl;
   }
   else if(valor_pago < valordoritos){
     cout << "Ocorreu um erro! Tente novamente e insira um valor igual ou maior que o valor do produto escolhido!" << endl;
    cout << "*devolve o dinheiro inserido*: " << valor_pago;
  }
  break;
}
 
while (produto == 8){
  if(valor_pago == valorruffles){
    cout << " " << endl << "Retire seu produto no local indicado!" << endl;
  }
  else if (valor_pago > valorruffles){
    cout <<"Retire o seu troco!" << endl;
     troco = valor_pago - valordoritos;
     cout << fixed  << setprecision(2); 
     cout << "Troco: R$ " << troco << endl << " " << endl;
     cout << "Retire seu produto no local indicado!" << endl;
   }
   else if(valor_pago < valorruffles){
     cout << "Ocorreu um erro! Tente novamente e insira um valor igual ou maior que o valor do produto escolhido!" << endl;
    cout << "*devolve o dinheiro inserido*: " << valor_pago;
  }
  break;
}
 
while (produto == 9){
  if(valor_pago == valorkitkat){
    cout << " " << endl << "Retire seu produto no local indicado!" << endl;
  }
  else if (valor_pago > valorkitkat){
    cout <<"Retire o seu troco!" << endl;
     troco = valor_pago - valorkitkat;
     cout << fixed  << setprecision(2); 
     cout << "Troco: R$ " << troco << endl << " " << endl;
     cout << "Retire seu produto no local indicado!" << endl;
   }
   else if(valor_pago < valorkitkat){
     cout << "Ocorreu um erro! Tente novamente e insira um valor igual ou maior que o valor do produto escolhido!" << endl;
    cout << "*devolve o dinheiro inserido*: " << valor_pago;
  }
  break;
}
 
while (produto == 10){
  if(valor_pago == valorfiniT){
    cout << " " << endl << "Retire seu produto no local indicado!" << endl;
  }
  else if (valor_pago > valorfiniT){
    cout <<"Retire o seu troco!" << endl;
     troco = valor_pago - valorfiniT;
     cout << fixed  << setprecision(2); 
     cout << "Troco: R$ " << troco << endl << " " << endl;
     cout << "Retire seu produto no local indicado!" << endl;
   }
   else if(valor_pago < valorfiniT){
     cout << "Ocorreu um erro! Tente novamente e insira um valor igual ou maior que o valor do produto escolhido!" << endl;
    cout << "*devolve o dinheiro inserido*: " << valor_pago;
  }
  break;
}
}
//modo administrador
if (acesso == 2){
  cout << "      ============================" << endl;
  cout << "          MODO ADMINISTRADOR" << endl;
  cout << "       =========================" << endl;
  cout << "            ==============  " << endl;
  cout << "        GERENCIAR INVENTÁRIO[1]   " << endl;
  cout << "             ============  " <<endl;
  cout << "        GERENCIAR FATURAMENTO[2]   " << endl;
  cout << "             ============  " <<endl;
  cout << "                SAIR[3]   " << endl;
  cout << "             ============  " <<endl;
  cout << "     >>>>>>>>>>>>> "; cin >> opcao;
  cout << " " << endl;
   
 while (opcao == 1){
  cout << "             ============" << endl;
  cout << "              INVENTÁRIO" <<  endl;
  cout << "             ============" << endl;
  cout << " "<<endl;
  cout << "============================="<< endl;
  cout << "PRODUTOS --------- QUANTIDADE"<< endl;
  cout << "============================="<< endl;
  cout << "Coca-Cola Lata ------- "<< qtdcoca << endl;
  cout << "Guaraná Antártica ---- "<< qtdguarana << endl;
  cout << "Fanta Uva ------------ "<< qtdfantaU << endl;
  cout << "Fanta Laranja -------- "<<  qtdfantaL << endl;
  cout << "Pepsi ---------------- " << qtdpepsi << endl;
  cout << "Sprite --------------- " << qtdsprite << endl;
  cout << "Doritos Orig.--------- "<< qtddoritos << endl;
  cout << "Ruffles Orig. -------- "<< qtdruffles << endl;
  cout << "KitKat --------------- " << qtdkitkat << endl;
  cout << "Fini Tubes Mor. ------ "<<  qtdfiniT << endl;
  cout << " "<<endl;
  cout << "(REPOR PRODUTOS [1])              (VOLTAR AO MENU[2])"<< endl;
  cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>> ";
  cin >> opcao2;

  if(opcao2 == 1){
    cout << " "<< endl;
        cout <<" Escolha um produto: "<< endl;
         cout <<"  |1 | Coca-Cola" << endl;
        cout << "  |2 | Guaraná Antártica" <<endl;
        cout << "  |3 | Fanta Uva" <<endl;
        cout << "  |4 | Fanta Laranja" <<endl;
        cout << "  |5 | Pepsi" <<endl;
        cout << "  |6 | Sprite" <<endl;
        cout << "  |7 | Doritos" <<endl;
        cout << "  |8 | Ruffles original" <<endl;
        cout << "  |9 | Kitkat" <<endl;
        cout << "  |10| Fini Tubes Morango" <<endl;
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>> ";
        cin >> opcao3;
        if (opcao3 < 0){
            cout << "Tente novamente e digite uma opção válida!"<<endl;
            exit (0);
          }
            if (opcao3 < 2){
              cout << "Tente novamente e digite uma opção válida!"<<endl;
              exit (0);
            }
         if(opcao3 == 1){
            qtdcoca++;
            cout << "Coca-Cola Lata ------- "<< qtdcoca << endl;
         }
         else if (opcao == 2){
           qtdguarana++;
           cout << "Guaraná Antártica ---- "<< qtdguarana << endl;
         }
         else if (opcao == 3){
           qtdfantaU++;
           cout << "Fanta Uva ------------ "<< qtdfantaU << endl;
         }
         else if (opcao == 4){
           qtdfantaL++;
          cout << "Fanta Laranja -------- "<<  qtdfantaL << endl;
         }
         else if (opcao == 5){
           qtdpepsi++;
           cout << "Pepsi ---------------- " << qtdpepsi << endl;
         }
         else if (opcao == 6){
           qtdsprite++;
           cout << "Sprite --------------- " << qtdsprite << endl;
         }
         else if (opcao == 7){
           qtddoritos++;
           cout << "Doritos Orig.--------- "<< qtddoritos << endl;
         }
         else if (opcao == 8){
           qtdruffles++;
           cout << "Ruffles Orig. -------- "<< qtdruffles << endl;
         }
         else if (opcao == 9){
           qtdkitkat++;
           cout << "KitKat --------------- " << qtdkitkat << endl;
         }
         else if (opcao == 10){
           qtdfiniT++;
           cout << "Fini Tubes Mor. ------ "<<  qtdfiniT << endl; 
         } 
         cout << endl << "(VOLTAR AO MENU[1])"<< endl;
       cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>> ";
       cin >> opcao4; 
        if (opcao4 == 1){
  cout << " " << endl;
  cout << "      ============================" << endl;
  cout << "          MODO ADMINISTRADOR" << endl;
  cout << "       =========================" << endl;
  cout << "             ============  " <<endl;
  cout << "                SAIR[3]   " << endl;
  cout << "             ============  " <<endl;
  cout << "     >>>>>>>>>>>>> "; cin >> opcao;
         if (opcao == 3){
           exit (0);
         }
        }
  }
    break;
   }
  while (opcao == 3){
    exit (0);
    break;
  }
  while (opcao == 2){
  cout << "              ===========" << endl;
        cout << "              FATURAMENTO" <<  endl;
        cout << "              ===========" << endl;
        cout <<endl;   
        cout << fixed <<setprecision(2);
        cout <<"  25% Faturamento: R$ "<<por_25<<endl;
        cout <<"  50% Faturamento: R$ "<<por_50<<endl; 
        cout <<"  75% Faturamento: R$ "<<por_75<<endl; 
        cout << fixed <<setprecision(3);
        cout <<"  Total de faturamento: R$ "  << faturamento << endl;
        cout <<endl;
        cout <<"Deseja realizar o cálculo com outra porcentagem?\n1=sim/2=nao >>>>>>>>>> ";
        cin >> resp;
        cout <<endl;
        if (resp == 0){
        cout << "Tente novamente e digite uma opção válida!"<<endl;  
        }
        else  if (resp > 2){
          cout << "Tente novamente e digite uma opção válida!"<<endl;
        }
          while(resp == 1)
        {  
         if (resp == 1){
         cout << fixed <<setprecision(2); 
         cout <<"Qual o valor da porcentagem? ";
         cin >> por_usu;
         nova_por = 1270.5 * por_usu;
         cout <<"O novo faturamento com a porcentagem escolhida: R$ "<<nova_por/100<<endl;
         cout <<endl;                 
         cout <<"Deseja realizar de novo ?\n1=sim/2=nao >>>>>>>>>> ";
         cin >>resp;
          cout <<endl;
         }
       }  
         if(resp ==2){
         cout <<endl;        
         cout <<"Deseja verificar o faturamento de cada grupo de produtos\n1=sim/2=nao>>>>>>>>>> ";
         cin >>resp;
         cout <<endl; 
         }
         if(resp == 1){
          cout <<"  Total de Bebidas Vendidas: R$ "   <<bebidas<< endl;
          cout <<"  Total de Salgadinhos/Doces Vendidos: R$ "<< sal_doces<<endl;
        } 
        if (opcao4 == 1){
  cout << " " << endl;
  cout << "      ============================" << endl;
  cout << "          MODO ADMINISTRADOR" << endl;
  cout << "       =========================" << endl;
  cout << "             ============  " <<endl;
  cout << "         RETORNAR[2]  SAIR[3]   " << endl;
  cout << "             ============  " <<endl;
  cout << "     >>>>>>>>>>>>> "; cin >> opcao;
         if (opcao == 3){
           exit (0);
         }
  }
}
}
return 0; 
}