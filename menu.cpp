#include <iostream>
#include <locale.h>
#include <string>
#include <cstdlib>
using namespace std;
int main(){

setlocale(LC_ALL, "");
int i=0;
string nomedoproduto[50];
long long int codigo[50];
int opcao;
string procurarproduto;
while (true){
    cout << "================MENU================" << endl;
    cout << "1 - Cadastrar Produto" << endl;
    cout << "2 - Procurar Produto" << endl;
    cout << "3 - Listar Produtos" << endl;
    cout << "0 - Sair" << endl;
    cout << "====================================" << endl;

    cin >> opcao;
    

    switch (opcao) {
        case 1:
            cout << "Para Cadastrar Produto, insira os detalhes do produto." << endl;
            cout << "Digite o código do produto: ";
            cin.ignore(); // Limpa o buffer do cin
            cin >> codigo[i];
            cout << "Digite o nome do produto: ";
            cin.ignore();
            getline(cin, nomedoproduto[i]);
            cout << "Produto cadastrado com sucesso!" << endl;
            i++;
            break;
        case 2:
            cout << "Para Procurar um Item, insira o nome do produto." << endl;
            cout << "Digite o nome do produto: " << endl;
            cin.ignore();
            getline(cin, procurarproduto);
           if (procurarproduto == nomedoproduto[i]) {
               cout << "Produto encontrado: " << nomedoproduto[i] << endl;
           } else {
               cout << "Produto não encontrado." << endl;
           }
            break;
        case 3:
            cout << "Esses são os produtos cadastrados:" << endl;
            for (int j = 0; j < i; j++) {
                cout << "Código: " << codigo[j] << ", Nome: " << nomedoproduto[j] << endl;
            }
            break;
        case 0:
            cout << "Saindo..." << endl;
            return 0;
        default:
            cout << "Opção inválida. Tente novamente." << endl;
            break;
    }
    system("pause");
    system("cls");
}

}           