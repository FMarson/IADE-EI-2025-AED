#include <iostream>

using namespace std;

int main() {
    int divisor, inicio, fim;

    // Ler o valor do divisor
    cout << "Entre com o valor do divisor: ";
    cin >> divisor;

    // Ler os limites do intervalo
    cout << "Inicio do intervalo: ";
    cin >> inicio;
    cout << "Final do intervalo: ";
    cin >> fim;

    cout << "Numeros divisiveis por " << divisor << " no intervalo de " << inicio << " a " << fim << ":\n";

    // Verificar e imprimir os números divisíveis
    bool encontrouDivisiveis = false; // Para verificar se encontramos algum número divisível
    for (int i = inicio; i <= fim; ++i) {
        if (i % divisor == 0) { // Verifica se o resto da divisão é zero
            cout << i << " ";
            encontrouDivisiveis = true;
        }
    }

    if (!encontrouDivisiveis) {
        cout << "Nenhum numero divisivel encontrado neste intervalo.\n";
    }
    
    cout << endl;

    return 0;
}
