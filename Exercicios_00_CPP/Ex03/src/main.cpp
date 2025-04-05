#include <iostream>
#include <cstdlib> // Para rand() e srand()
#include <ctime>   // Para time()

using namespace std;

int main() {
    // Inicializa o gerador de números aleatórios
    srand(static_cast<unsigned int>(time(0)));
    int numeroSorteado = rand() % 10 + 1; // Sorteia um número entre 1 e 10
    int tentativa;
    const int maxTentativas = 3;

    cout << "Tente adivinhar o numero (entre 1 e 10). Voce tem " << maxTentativas << " tentativas.\n";

    for (int i = 0; i < maxTentativas; ++i) {
        cout << "Tentativa " << (i + 1) << ": ";
        cin >> tentativa;

        if (tentativa == numeroSorteado) {
            cout << "Parabens! Voce acertou o numero!\n";
            return 0; // Encerra o programa
        } else if (tentativa < numeroSorteado) {
            cout << "O numero sorteado esta acima do seu palpite.\n";
        } else {
            cout << "O numero sorteado esta abaixo do seu palpite.\n";
        }
    }

    cout << "Voce nao acertou. O numero sorteado era: " << numeroSorteado << endl;

    return 0;
}
