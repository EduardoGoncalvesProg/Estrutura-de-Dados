//Eduardo Gonçalves 32028016 03D
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    int x;
    cout << "Digite o valor de x: ";
    cin >> x;
    int y;
    cout << "Digite o valor de y: ";
    cin >> y;

    int x2,y2;

    x2 = (8-y)/3;
    y2 = 8-(3*x);
    if (x == x2 || y == y2){
        cout << "O ponto está na reta";
    }
    else{
        cout << "O ponto não está na reta";
    }
}
