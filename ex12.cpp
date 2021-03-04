//Eduardo Gonçalves 32028016 03D
#include <iostream>

using namespace std;

int Min(int x, int y){
    if (x<y){
    return x;
    }
    else{
    return y;
    }
}
int main(){
    setlocale(LC_ALL, "portuguese");
    int x, y, aux;
    cout << "Digite primeiro valor: ";
    cin  >> x;
    cout << "Digite segundo valor: ";
    cin  >> y;
    aux = Min(x,y);
    cout << "O menor valor inserido foi: "<< aux;
}
