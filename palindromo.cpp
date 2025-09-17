#include <iostream>
#include <string>
using namespace std;


int main(){

    cout << "escreva uma palavra: ";
    string palavra;
    cin >> palavra;
    int tamanho = palavra.length();
    bool palindromo = false;
    for (int i = 0; i < tamanho / 2; i++){
        if (palavra[i] == palavra[tamanho - 1 - i]){
            palindromo = true;
        } else {
            palindromo = false;
        } }
if (palindromo == true){
        cout << "A palavra " << palavra << " é um palíndromo!" << endl;
    } else {
        cout << "A palavra " << palavra << " não é um palíndromo!" << endl;

    }
    
    system("pause");
    return 0;
     }
    