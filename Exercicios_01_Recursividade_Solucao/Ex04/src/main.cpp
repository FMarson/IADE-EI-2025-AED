/*
Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
S(n) = 1³ + 2³ + ... + n
*/

#include <iostream>

using namespace std;

long long somaCubos(int n) {
    if (n == 1)
        return 1LL;
    return (long long) (n * n * n + somaCubos(n - 1));
}

int main() {
    int n;
    cout << "Digite o valor de N para soma dos primeiros cubos: ";
    cin >> n;

    if (n <= 0) {
        cout << "Por favor, digite um numero maior que zero." << endl;
        return 1;
    }

    cout << "Soma dos primeiros " << n << " cubos = " << somaCubos(n) << endl;

    return 0;
}
