//Eduardo Gon�alves 32028016 03D
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    int num;
    cout << "Digite um n�mero: ";
    cin >> num;
    if (num%2 == 0){
        cout << "O n�mero � par";
    }
    else{
        cout << "O n�mero � impar";
    }
}
