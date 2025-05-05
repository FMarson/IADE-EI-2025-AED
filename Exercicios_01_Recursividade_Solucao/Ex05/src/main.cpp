/*
Escreva uma função recursiva que calcule a soma dos dígitos de um número inteiro. Por exemplo, se a entrada for 123, a saída deverá ser 1+2+3 = 6.
*/

#include <iostream>

using namespace std;

int somaDigitos(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + somaDigitos(n / 10);
}

int main() {
    int n;
    cout << "Digite um numero inteiro: ";
    cin >> n;

    if (n < 0) 
        n = -n; // Para lidar com números negativos

    cout << "Soma dos digitos de " << n << " = " << somaDigitos(n) << endl;

    return 0;
}