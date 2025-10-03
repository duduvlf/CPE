//Eduardo Augusto - 252003471
#include <iostream>
#include <string>
using namespace std;

int main() {
     int cont = 1;
    string frase, binario="", comprimido="";
    cout << "Digite a palavra a ser comprimida" << endl;
    getline(cin, frase);

    for(char c : frase){
        for(int i=7;i>=0;i--) binario += ((c>>i)&1) ? '1':'0';
    }
 // aqui os trocamos os caracter para binario

    cout << "Frase em binario:" << binario << endl;

//aqui fazemos as contas das repetições dos bits
    for(size_t i=1;i<=binario.size();i++){
        if(i<binario.size() && binario[i]==binario[i-1]) cont++;
        else{
            if(cont>=7){ // comprime em uma string
                for(int j=7;j>=0;j--) comprimido += ((cont>>j)&1)?'1':'0';
            } else {
                for(int j=0;j<cont;j++) comprimido += binario[i-1];
            }
            cont=1;
             // aqui está fazendo a conta das repetições dos bites
        }
    }

    cout << "Resultado comprimido:" << comprimido << endl;
    system ("pause");
    return 0;
}