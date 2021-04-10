//Eduardo Gonçalves 32028016 03D
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    int n, anterior = 1, atual = 1, proximo;
    cout << "Digite o número de termos Fibonacci: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        if (i == 1 || i == 2)
        cout << "\n1";

        else{
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
        cout << "\n" << proximo;
        }
        }
    return 0;
}
