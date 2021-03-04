//Eduardo Gonçalves 32028016 03D
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    int valor1;
    int valor2;

    cout << "Digite primeiro valor: ";
    cin  >> valor1;
    cout << "Digite segundo valor: ";
    cin  >> valor2;

    int aux;
    aux    = valor1;
    valor1 = valor2;
    valor2 = aux;

    cout << "valor1 após troca: "<< valor1 <<"\n";
    cout << "valor2 após troca: "<< valor2 <<"\n";
}
