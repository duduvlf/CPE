#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int x,y; 

    x = 6+4;

    cout << "O valor de x : " << x << "\n";

   cout << "O valor de x/2 : " << x/2 << "\n";

      cout << "O valor de x*2 : " << x*2 << "\n";


      cout << "Digite um número inteiro: ";
      cin >> x;
      cout << "Digite outro número inteiro: ";
      cin >> y;
      cout << "Multiplicando os 2 números inteiros: " << x*y << "\n";

    cout << "soma: " << x+y << "\n";
    cout << "subtracao: " << x-y << "\n";
    float z = x/y;
    cout << "divisao: " << z << "\n"; 
    cout << "multiplicacao: " << x*y << "\n";
    cout << "modulo: " << x%y << "\n";

    // if (condição - x > y ) { -- else mostra ao contrário
    if (x > y) {
        cout << "x é maior que y\n";
    } else {
        cout << "x não é maior que y\n";
    }

     if (x < y) {
        cout << "x é menor que y\n";
    } else {
        cout << "x não é menor que y\n";
    }

     if (x >= y) {
        cout << "x é maior ou igual a y\n";
    } else {
        cout << "x não é maior ou igual a y\n";
    }

     if (x <= y) {
        cout << "x é menor ou igual a y\n";
    } else {
        cout << "x não é menor ou igual a y\n";
    }

     if (x == y) {
        cout << "x é igual a y\n";
    } else {
        cout << "x não é igual a y\n";
    }

     if (x != y) {
        cout << "x é diferente de y\n";
    } else {
        cout << "x não é diferente de y\n";
    }



    system("pause");
    return 0;



}