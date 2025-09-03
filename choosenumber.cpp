#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {

    cout << "Bem vindo ao jogo da tentativa!!\n";
cout << "Digite um numero entre 1 e 100: ";

srand(time(0)); // determinar a escolha do número no exato momento do relógio do computador
int numerosecreto = rand() % 100 + 1; // escolhe o número secreto de 1 a 100
int chute;
int tentativas = 0;

do {

cin >> chute;

if (chute < 1 || chute > 100) {
    cout << "Por favor, digite um numero entre 1 e 100.\n";
    continue;
}

tentativas++;

if (chute == numerosecreto) {
    cout << "Parabens! Voce acertou o numero em " << tentativas << " tentativas.\n";
} else if (chute < numerosecreto) {
    cout << "O numero secreto e maior.\n";
} else {
    cout << "O numero secreto e menor.\n";
}

} while (chute != numerosecreto);

system("pause");
return 0;
}






