#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
    int main () {
    string palavra;
  cout << " Bem Vindo a forca " << endl;
  cout << " Digite a palavra secreta: ";
  cin >> palavra;

system ("cls");

    int qntdel = palavra.length ();
    cout << " A palavra tem " << qntdl << " letras " << endl;

    while  (true) { // começa o loop
        string chute; // armazena palavra   
        cout << " Vamos começar o jogo " << endl;
        cout << " Digite uma letra: ";
        cin >> chute;
        chute=tolower(chute); // converte para minusculo
        bool tem = false; // variavel de controle
        for (int i=0; i < qntdl; i++) {
            if (chute [0] == palavra [i]) {
                tem = true; // se a letra estiver na palavra
                cout << " A letra " << chute << " está na palavra " << endl;
                break; // sai do for
                else {
                    cout << " A letra " << chute << " não está na palavra " << endl;
                }
            }


            }




            
        } 
        i++;

    }

    