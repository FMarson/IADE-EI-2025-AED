/*
O superfatorial de um número N é definida pelo produto dos N primeiros fatoriais de N. Assim, o superfatorial de 4 é sf(4) = 1! * 2! * 3! * 4! = 288

Faça uma função recursiva que receba um número inteiro positivo N e retorne o superfatorial desse número.
*/

#include <iostream>

using namespace std;

long long superfatorial(int n) {
    if (n == 1)
        return 1;

    long long fat = 1;

    // Calcula o fatorial de n sem usar outra função recursiva
    for (int i = 2; i <= n; i++) {
        fat *= i;
    }

    return fat * superfatorial(n - 1);
}

int main() {
    int N;
    cout << "Digite um numero inteiro positivo: ";
    cin >> N;

    if (N <= 0) {
        cout << "Por favor, digite um numero maior que zero." << endl;
        return 1;
    }

    cout << "Superfatorial de " << N << " = " << superfatorial(N) << endl;

    return 0;
}
