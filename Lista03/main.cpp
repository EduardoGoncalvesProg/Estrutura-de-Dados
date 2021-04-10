//Eduardo Gon�alves 32028016

#include <iostream>
#include "StaticQueue.h"
#include "produto.h"

using namespace std;

    StaticQueue filaA = Create();
    StaticQueue filaB = Create();

void cadastrar(){
    char marca;
    int option, estante, prateleira, gaveta;
    cout << "Digite a op��o da �gua: \n[1](para marca A)  \n[2](para marca B)\n";
    cin  >> option;
    cout << "Digite o n�mero da estante: ";
    cin  >> estante;
    cout << "Digite o n�mero da prateleira: ";
    cin  >> prateleira;
    cout << "Digite o n�mero da gaveta: ";
    cin  >> gaveta;
    cout << "Produto cadastrado com sucesso\n";
    time_t data = time(nullptr);

    if (option == 1){
        Produto garrafa = {'A',data,estante,prateleira,gaveta};
        Enqueue(filaA,garrafa);
    }

    if (option == 2){
        Produto garrafa = {'B',data,estante,prateleira,gaveta};
        Enqueue(filaB,garrafa);
    }
}

void vender (){
    char marca;
    int escolha;
    cout << "Digite a marca da �gua que deseja comprar: \n[1]Marca A \n[2]Marca B \n[3]Qualquer uma \n";
    cin  >> escolha;

    if (escolha == 1){
        if (!IsEmpty(filaA)){
        Dequeue(filaA);
        cout << "�gua de estoque A vendido";
        }
        else{
            cout << "N�o h� produtos dessa marca";
        }
    }

    if (escolha == 2){
        if (!IsEmpty(filaB)){
        Dequeue(filaB);
        cout << "�gua de estoque B vendido";
        }
        else{
            cout << "N�o h� produtos dessa marca";
        }
    }

    if (escolha == 3){
        if (IsEmpty(filaA) && IsEmpty(filaB)){
            cout << "N�o h� produtos no estoque";
        }

        else if (IsEmpty(filaA)){
            Dequeue(filaB);
            cout << "�gua de estoque B vendida";
        }

        else if (IsEmpty(filaB)){
            Dequeue(filaA);
            cout << "�gua de estoque A vendida";
        }

        else{
            if (Front(filaA).data <= Front(filaB).data){
                    Dequeue(filaA);
                    cout << "�gua de estoque A vendida";
                }
            if (Front(filaB).data <= Front(filaA).data){
                    Dequeue(filaB);
                    cout << "�gua de estoque B vendida";
            }
        }
    }
}
int main(){

    setlocale(LC_ALL, "portuguese");

    int opcao;

    while (opcao !=3){
        cout << "\nEscolha uma op��o: \n[1] Cadastrar \n[2] Vender \n[3] Fechar \n";
        cin  >> opcao;

    if (opcao == 1){
        cout << "Cadastrar\n";
        cadastrar();
    }

    if (opcao == 2){
        cout << "Vender\n";
        vender();
    }

    if (opcao == 3){
        cout << "\nEncerrando programa";
        break;
    }
}
}
