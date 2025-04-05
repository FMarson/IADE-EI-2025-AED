#include <iostream>

using namespace std;

int main() {
    int opcao;

    do {
        // Exibe o menu
        cout << "Programa com Menu:\n";
        cout << "1 - Fazer coisa 1\n";
        cout << "2 - Fazer coisa 2\n";
        cout << "3 - Fazer coisa 3\n";
        cout << "4 - Sair do programa\n";
        cout << "Digite uma opcao: ";
        cin >> opcao;

        // Executa a ação correspondente à opção escolhida
        switch (opcao) {
            case 1:
                cout << "Executando a opcao 1\n";
                break;
            case 2:
                cout << "Executando a opcao 2\n";
                break;
            case 3:
                cout << "Executando a opcao 3\n";
                break;
            case 4:
                cout << "Saindo do programa...\n";
                break;
            default:
                cout << "Opcao invalida! Tente novamente.\n";
                break;
        }

    } while (opcao != 4); // O loop continua até que a opção 4 seja escolhida

    return 0;
}
