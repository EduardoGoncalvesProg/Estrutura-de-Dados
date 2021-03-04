//Eduardo Gonçalves 32028016 03D
#include <iostream>

using namespace std;

void troca(int *i, int *j){
    int aux = *i;
    *i = *j;
    *j = aux;
}

void bubbleSort(int vet[10]){
    for (int i =0; i<5 ; i++){
        for (int j =0; j<5-i; j++){
            if (vet[j] > vet[j+1]){
                troca(&vet[j], &vet[j+1]);
            }
        }
    }
}

int main(){
    setlocale(LC_ALL, "portuguese");
    int vet[6];
    for (int i =0; i<6;i++){
        cout << "Digite o valor de n: ";
        cin >> vet[i];
    }
    bubbleSort(vet);
    for (int i =0; i<6;i++){
        cout << "\n" << vet[i];
    }
}


