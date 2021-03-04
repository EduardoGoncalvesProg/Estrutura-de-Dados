//Eduardo Gonçalves 32028016 03D
#include <iostream>

using namespace std;

int Max(int x, int y){
    if (x<y){
    return y;
    }
    else{
    return x;
    }
}
int main(){
    setlocale(LC_ALL, "portuguese");
    int x, y, aux;
    cout << "Digite primeiro valor: ";
    cin  >> x;
    cout << "Digite segundo valor: ";
    cin  >> y;
    aux = Max(x,y);
    cout << "O maior valor inserido foi: "<< aux;
}
