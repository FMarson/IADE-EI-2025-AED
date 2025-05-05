#include "../include/pilhaConsole.h"

using namespace std;

int main() {
    PilhaConsole<int> pilha;

    pilha.empilhar(10);
    pilha.empilhar(20);
    pilha.empilhar(30);

    pilha.imprimir();

    cout << "Topo: " << pilha.topo() << endl;

    while (!pilha.vazia()) {
        int val = pilha.desempilhar();
        if (pilha.ocorreuErro()) {
            cout << "Erro ao desempilhar" << endl;
            break;
        }
        cout << "Desempilhado: " << val << endl;
        pilha.imprimir();
    }

    return 0;
}
