//Eduardo Gonçalves 32028016 03D
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    char letra;

    cout << "Digite uma letra: ";
    cin >> letra;

    if (letra =='a'|| letra =='e'|| letra == 'i'|| letra =='o'|| letra =='u'){
    cout << "A letra inserida é uma vogal";
    }
    else{
    cout << "A letra inserida é uma consoante";
    }
}
