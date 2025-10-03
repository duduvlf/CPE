#include <iostream>
using namespace std;

int main () { 
    cout << "Digite um numero inteiro positivo para verificar se ele e triangular:/n";
    int n=0;
    cin >> n;
    int total=0;
    for (int i=0; i<n; i++) {
        total=total+i;
        if (total==n) {
            cout << "O numero " << n << " e triangular." << endl;
            return 0;
        }
        if (total>n) {
            cout << "O numero " << n << " nao e triangular." << endl;
            return 0;
        }
    }

}