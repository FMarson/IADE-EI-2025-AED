/*
Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N.
*/

#include <iostream>

using namespace std;

int somatorio(int n) {
    if (n == 1) {
        return 1;
    }
    return n + somatorio(n - 1);
}

int main() {
    int n;
    cout << "Digite um numero inteiro positivo: ";
    cin >> n;

    if (n > 0) {
        cout << "O somatorio de 1 a " << n << " eh: " << somatorio(n) << endl;
    } else {
        cout << "Por favor, insira um numero inteiro positivo." << endl;
    }

    return 0;
}
