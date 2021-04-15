//Eduardo Gonçalves 32028016

#include <iostream>
#include "StaticQueue.h"
#include "StaticStack.h"

using namespace std;

using namespace DataStructures;

Queue::StaticQueue fila = Queue::Create();

int main(){

    setlocale(LC_ALL, "portuguese");

    int option;
    char elem;

    while (option !=8){
        cout<<"\nEscolha uma opção" << "\n[1]Enqueue \n[2]Dequeue \n[3]Front \n[4]Size \n[5]Count \n[6]IsEmpty \n[7]Clear \n[8]Fechar\n";
        cin >> option;

    if (option == 1){
        cout<<"Enqueue";
        cout<<"\nDigite o elemento que deseja inserir: ";
        cin >>elem;
        Queue::Enqueue(fila,elem);
    }

    if (option == 2){
        cout<<"Dequeue: "<<Queue::Dequeue(fila);
    }

    if (option == 3){
        cout<<"Front: "<<Queue::Front(fila);
    }

    if (option == 4){
        cout<<"Size: "<<Queue::Size(fila);
    }

    if (option == 5){
        cout<<"Count: "<<Queue::Count(fila);
    }

    if (option == 6){
        cout<<"IsEmpty";
        if(Queue::IsEmpty(fila)){
            cout<<"\nA fila está vazia";
        }
        else{
            cout<<"\nA fila não está vazia";
        }
    }

    if (option == 7){
        cout<<"Clear";
        Queue::Clear(fila);
    }
    if (option == 8){
        cout<<"Encerrando programa";
        break;
    }
}
}
