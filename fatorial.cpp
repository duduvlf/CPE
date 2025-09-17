#include <iostream>
#include <string>
using namespace std;
int main(){

while (true){
   
 long long int n;
 cout << "digite um numero para calcular o fatorial: ";
 cin >> n;
    
 cout << "O fatorial de " << n << " é: ";
 long long int fatorial = 1; 
   for (int i = n; i > 1; i--){
    fatorial = fatorial*i; // poderia ser fatorial *= i;
     }
  cout << fatorial << endl;
  cout << "Quer tentar novamente? (1-sim/0-não): ";
  cin >> n;

if (n == 0){
    break;
    
}
if (n == 1){
    continue;
    
}
   }
system ("pause");
return 0;
}