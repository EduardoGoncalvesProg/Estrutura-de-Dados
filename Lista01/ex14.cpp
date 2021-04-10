//Eduardo Gonçalves 32028016 03D
#include <iostream>

using namespace std;

int VowelsCount(char palavra[]){
    int contador = 0;
    for(int i = 0; palavra[i] != '\0'; i++){
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            contador++;
}
}
    return contador;
}

int main(){
    setlocale(LC_ALL, "portuguese");
    char palavra[280];
    int contador;
    cout << "Digite uma palavra/frase: ";
    cin.getline(palavra, 280);
    contador = VowelsCount(palavra);
    cout << "O número de vogais na frase é: "<< contador;
    return 0;
}
