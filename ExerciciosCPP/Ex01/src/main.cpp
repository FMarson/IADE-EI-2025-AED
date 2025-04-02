#include <iostream>

using namespace std;

int main() {
    // a. Os dez primeiros números inteiros positivos
    cout << "Os dez primeiros números inteiros positivos:\n";
    for (int i = 1; i <= 10; ++i) {
        cout << i << " ";
    }
    cout << "\n\n";

    // b. Vinte números inteiros sequenciais começando em -6
    cout << "Vinte números inteiros sequenciais começando em -6:\n";
    for (int i = -6; i < -6 + 20; ++i) {
        cout << i << " ";
    }
    cout << "\n\n";

    // c. Os doze primeiros pares positivos
    cout << "Os doze primeiros pares positivos:\n";
    for (int i = 1; i <= 12; ++i) {
        cout << i * 2 << " ";
    }
    cout << "\n\n";

    // d. Os nove primeiros múltiplos positivos de 4
    cout << "Os nove primeiros múltiplos positivos de 4:\n";
    for (int i = 1; i <= 9; ++i) {
        cout << i * 4 << " ";
    }
    cout << "\n";

    return 0;
}
