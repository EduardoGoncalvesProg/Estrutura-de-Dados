//Eduardo Gonçalves 32028016

#include <iostream>
#include "StaticStack.h"
#include <string.h>
#include <algorithm>


using namespace std;

int main(){

    setlocale(LC_ALL, "portuguese");

    StaticStack pilha = Create();

    string vetor;
    int i,aux = 0;

    cout << "Digite uma frase/palavra: ";
    getline(cin, vetor);

    vetor.erase(remove(vetor.begin(), vetor.end(), ' '), vetor.end());

    int x = vetor.length();

    for (int i = 0; i < x; i++){
        cout << vetor[i];
    }

    for (i = 0; i < x; i++){
		Push(pilha, vetor[i]);
	}

    for (i = 0; i < x; i++){
		if (vetor[i] == Pop(pilha)){
			aux++;
		}
    }
    if (x == aux){
        cout << "\nÉ um palindromo";
    }

    else{
        cout << "\nNão é um palindromo";
    }
}


