#include <iostream>

using namespace std;

int main() {
    int numero;
    char continuar;

    do {
        cout << "Digite um numero de 1 a 9: ";
        cin >> numero;

        // Verifica se o número está dentro do intervalo
        if (numero < 1 || numero > 9) {
            cout << "Numero invalido! Tente novamente.\n";
            continue; // Pula para a próxima iteração do loop
        }

        cout << "Tabuada do " << numero << ":\n";
        for (int i = 1; i <= 10; ++i) {
            cout << numero << " x " << i << " = " << (numero * i) << endl;
        }

        cout << "Deseja ver outra tabuada? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S'); // Permite continuar se o usuário digitar 's' ou 'S'

    cout << "Programa encerrado.\n";

    return 0;
}
