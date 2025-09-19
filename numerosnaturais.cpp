#include <iostream>
#include <cstdlib>

using namespace std;

int main (){
    int numero;
    int x = 1;
    cout << "digite um numero" << endl;
    cin >> numero;

 for (int i = 1; i < numero; i++){
        x = x + i; 
        if (x >= numero) 
            break;
        // x + i = x
        // x = x + i
     }
    

if (x == numero){
    cout << numero << " e um numero triangular" << endl;
    cout << "os numeros em soma são" << endl;

}else {
    cout << numero << " nao e um numero triangular" << endl;


}
system ("pause");
return 0;

}