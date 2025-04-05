#include <iostream>

using namespace std;

int main() {
    int numero;
    char continuar;

    do {
        cout << "Entre com um numero: ";
        cin >> numero;

        // Verifica se o número é negativo
        if (numero < 0) {
            cout << "Por favor, digite um numero inteiro positivo.\n";
            continue; // Pula para a próxima iteração do loop
        }

        // Calcular o fatorial
        long long fatorial = 1; // Usando long long para evitar overflow em números grandes
        for (int i = 1; i <= numero; ++i) {
            fatorial *= i;
        }

        cout << "O fatorial de " << numero << " e " << fatorial << endl;

        // Perguntar se o usuário deseja calcular outro fatorial
        cout << "Calcular outro numero? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S'); // Permite continuar se o usuário digitar 's' ou 'S'

    return 0;
}
