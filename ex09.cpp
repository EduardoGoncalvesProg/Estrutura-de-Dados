//Eduardo Gonçalves 32028016 03D
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    int vet[10];
    for (int i =0; i<10; i++){
        cout << "Digite o valor de n: ";
        cin >> vet[i];
    }
    cout << "Vetor inverso: ";
    for (int i =9; i>=0;i--){
        cout << vet[i] << "\n ";
    }
}
