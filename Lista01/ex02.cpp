//Eduardo Gon�alves 32028016 03D
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    int valor1;
    int valor2;

    cout << "Digite a dist�ncia percorrida em km: ";
    cin  >> valor1;
    cout << "Digite o tempo gasto no trajeto em horas: ";
    cin  >> valor2;

    int media = valor1/valor2;

    cout << "A velocidade m�dia foi: " << media;

    if (media > 90){
        cout << "\nA velocidade m�dia foi maior que 90km\h";
    }
    else{
        cout << "\nA velocidade m�dia foi igual ou menor que 90km\h";
    }
}
