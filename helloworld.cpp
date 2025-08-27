//Este es un programa en C++ que imprime "Hello, World!" en la consola.
//data

// using namespace std; - sempre acima do int main - serve p n ficar dando std::cout
// g++ helloworld.cpp -o helloworld -- cria o executável helloworld
// Uma lógica && (E) em C++ é representada por "&&"
#include <iostream>
#include <cstdlib> // Necessário para a função system

int main() {
    
    std::cout << "Hello, World!\n";

    system("color 0A"); // Muda a cor do texto para verde no Windows
    system("cls"); // Limpa a tela no Windows - se estiver usando o Hello World não aparece
    system("pause");
    return 0;
}    