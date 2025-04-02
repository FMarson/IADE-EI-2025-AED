#include <iostream>
#include <string>

using namespace std;

int main() {
    int idade, quantidadeLivros;
    string sexo;
    int totalLivrosMenoresDe10 = 0;
    int totalMulheresCincoLivros = 0;
    int somaIdadeHomensMenosCincoLivros = 0;
    int contadorIdadeHomensMenosCinco = 0;
    int totalEntrevistados = 0;
    int totalSemLivros = 0;

    // Coleta de dados
    cout << "Digite a idade (0 para sair): ";
    cin >> idade;

    while (idade > 0) {
        cout << "Digite o sexo (M/F): ";
        cin >> sexo;

        cout << "Digite a quantidade de livros lidos em 2024: ";
        cin >> quantidadeLivros;

        // Atualiza contadores e somas com base nos dados coletados
        totalEntrevistados++;

        if (idade < 10) {
            totalLivrosMenoresDe10 += quantidadeLivros;
        }
        
        if (sexo == "F" || sexo == "f") {
            if (quantidadeLivros >= 5) {
                totalMulheresCincoLivros++;
            }
        } else if (sexo == "M" || sexo == "m") {
            if (quantidadeLivros < 5) {
                somaIdadeHomensMenosCincoLivros += idade;
                contadorIdadeHomensMenosCinco++;
            }
        }

        if (quantidadeLivros == 0) {
            totalSemLivros++;
        }

        cout << "Digite a idade (0 para sair): ";
        cin >> idade;
    }

    // Cálculos dos resultados
    double mediaIdadeHomens = 0.0;
    if (contadorIdadeHomensMenosCinco > 0) {
        mediaIdadeHomens = (double)somaIdadeHomensMenosCincoLivros / contadorIdadeHomensMenosCinco;
    }

    double percentualSemLivros = 0.0;
    if (totalEntrevistados > 0) {
        percentualSemLivros = ((double)totalSemLivros / totalEntrevistados) * 100.0;
    }

    // Impressão dos resultados
    cout << "\nQuantidade total de livros lidos por entrevistados menores de 10 anos: " << totalLivrosMenoresDe10 << endl;
    cout << "Quantidade de mulheres que leram 5 livros ou mais: " << totalMulheresCincoLivros << endl;
    cout << "Media de idade dos homens que leram menos que 5 livros: " << mediaIdadeHomens << endl;
    cout << "Percentual de pessoas que nao leram livros: " << percentualSemLivros << "%" << endl;

    return 0;
}
