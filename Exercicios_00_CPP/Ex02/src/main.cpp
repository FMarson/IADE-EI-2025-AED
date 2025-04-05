#include <iostream>

using namespace std;

int main() {
    const int numAlunos = 15;
    double notas[numAlunos];
    double soma = 0.0;
    double menorNota = 10.0; // Inicializa como o maior valor possível para uma nota
    double maiorNota = 0.0; // Inicializa como o menor valor possível para uma nota

    // Ler as notas
    for (int i = 0; i < numAlunos; ++i) {
        cout << "Digite a nota do aluno " << (i + 1) << ": ";
        cin >> notas[i];
        
        // Atualizar soma
        soma += notas[i];
        
        // Verificar menor e maior nota
        if (notas[i] < menorNota) {
            menorNota = notas[i];
        }
        if (notas[i] > maiorNota) {
            maiorNota = notas[i];
        }
    }

    // Calcular média
    double media = soma / numAlunos;

    // Imprimir resultados
    cout << "\nMenor nota: " << menorNota << endl;
    cout << "Maior nota: " << maiorNota << endl;
    cout << "Média da turma: " << media << endl;

    return 0;
}
