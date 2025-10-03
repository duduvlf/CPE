#include <iostream>
using namespace std;

int main() {
    cout << "Digite um numero que sera a altura da piramide/n";
    int n;
    cin >> n;
for (int i = 1; i <= n; i++) {
}
    //cout << " ";*
       for (int k=1; k<= (i*2); k++) {
           cout << "*";
       }
    for (int j=1; j <= (2*i-1); j++) {
        cout << " ";
    }
    cout << endl;
}
 