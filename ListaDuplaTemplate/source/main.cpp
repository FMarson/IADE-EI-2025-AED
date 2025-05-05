#include "..\include\ListaDuplaTemplateConsole.h"

int main() {
    ListaDuplaTemplateConsole<int> lista;

    lista.inserirInicio(10);
    lista.inserirFim(20);
    lista.inserirPosicao(15, 1);

    lista.imprimir();

    int removido = lista.removerInicio();
    cout << "Removido inicio: " << removido << std::endl;

    lista.imprimir();

    removido = lista.removerFim();
    cout << "Removido fim: " << removido << std::endl;

    lista.imprimir();

    bool sucesso = lista.remover(15);
    std::cout << "Removeu 15? " << (sucesso ? "Sim" : "Nao") << std::endl;

    lista.imprimir();

    return 0;
}
