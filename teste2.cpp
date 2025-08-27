#include <iostream>

int main() {
    bool porta = false; // porta fechada
    bool luz = false;   // luz apagada
    bool projetor = false; // projetor desligado

    if (porta == true && luz == true) {
        projetor = true;
        std::cout << "Aula iniciada"; // Mensagem de sucesso
    } else {
        std::cout << "Aula não iniciada"; // quando desligado
    }

    return 0;
}
