//Eduardo Gonçalves 32028016 03D
#include <iostream>

using namespace std;
float MulViaAdd(int x, float y){
    float multiplica;
    for (int i =0; i<x; i++){
        multiplica += y;
    }
    return multiplica;
}

int main(){
    setlocale(LC_ALL, "portuguese");
    int x;
    cout << "Digite o valor de x: ";
    cin >> x;
    float y, multiplica;
    cout << "Digite o valor de y: ";
    cin >> y;
    multiplica = MulViaAdd(x,y);
    cout << "O resultado é: " << multiplica;
}
