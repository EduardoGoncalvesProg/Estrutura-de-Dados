//Eduardo Gonçalves 32028016 03D
#include <iostream>
#include <cmath>

using namespace std;

bool AreCirclesColliding(int x1,int y1, int r1, int x2, int y2, int r2){
    float formula;
    formula = sqrt(pow(x1-x2,2)+ pow(y1-y2,2));
    if (formula > r1+r2){
        cout << "Os circulos não colidem";
        return false;
}else{
        cout << "Os circulos colidem";
        return true;
}
}

int main(){
    setlocale(LC_ALL, "portuguese");
    int x1,x2,y1,y2,r1,r2;
    cout << "Digite o valor de x1: ";
    cin  >> x1;
    cout << "Digite o valor de y1: ";
    cin  >> y1;
    cout << "Digite o valor de r1: ";
    cin  >> r1;
    cout << "Digite o valor de x2: ";
    cin  >> x2;
    cout << "Digite o valor de y2: ";
    cin  >> y2;
    cout << "Digite o valor de r2: ";
    cin  >> r2;
    bool var;
    var =  AreCirclesColliding(x1,y1,r1,x2,y2,r2);
}
