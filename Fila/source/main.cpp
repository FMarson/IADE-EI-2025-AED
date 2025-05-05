#include <string>
#include "../include/FilaConsole.h"

int main() {
    FilaConsole<int> fila;

    fila.inserir(10);
    fila.inserir(20);
    fila.inserir(30);

    fila.imprimir();

    cout << "Consultando o primeiro: " << fila.consultar() << std::endl;

    while (!fila.vazia()) {
        int valor = fila.remover();
        if (fila.ocorreuErro()) {
            std::cout << "Erro ao remover da fila" << std::endl;
            break;
        }
        cout << "Removido: " << valor << std::endl;
        fila.imprimir();
    }

    return 0;
}
