//Eduardo Gonçalves 32028016 03D
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    int n, fatorial;
    cout << "Digite o valor de n: ";
    cin >> n;

    for(fatorial = 1; n > 1; n -= 1){
        fatorial *= n;
    }
    cout << "O fatorial de n é: " << fatorial;
}
