#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {

    cout << "Bem vindo a megasena!!\n";
    cout << "Serao sorteados 6 numeros entre 1 e 60:\n ";

    srand(time(0)); // inicializa o gerador de números aleatórios

    int chute[10];
    int numeros[6];

    for (int i = 0; i < 6; i++) {
        numeros[i] = rand() % 60 + 1; // gera um número aleatório entre 1 e 60
    }

cout << "Digite seu palpite (6 numeros entre 1 e 60): ";
for (int i = 0; i < 10; i++) { //quantidade de chutes
    cin >> chute[i];
}
int acertos = 0;
for (int i = 0; i < 6; i++) {
    if (chute[i] == numeros[i] || chute[i] == numeros[i] || chute[i] == numeros[i] || chute[i] == numeros[i] || chute[i] == numeros[i] || chute[i] == numeros[i]) {
        acertos++;
    }
}
cout << "Você acertou " << acertos << " numeros!" << endl;
   cout << "Os numeros sorteados foram: " << numeros[0] << ", " << numeros[1] << ", " << numeros[2] << ", " << numeros[3] << ", " << numeros[4] << " e " << numeros[5] << ".\n";

system("pause");
return 0;


}