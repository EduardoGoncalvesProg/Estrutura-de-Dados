//Eduardo Gonçalves 32028016 03D
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    int num;
    cout << "Digite um número: ";
    cin >> num;
    if (num%2 == 0){
        cout << "O número é par";
    }
    else{
        cout << "O número é impar";
    }
}
