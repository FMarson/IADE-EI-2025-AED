#include <iostream>
#include <string>
#include "../include/ListaSimplesTemplateConsole.h"

int main() {
    ListaSimplesTemplateConsole<float> listaFloat;

    listaFloat.inserirFim(1.1f);
    listaFloat.inserirFim(2.2f);
    listaFloat.inserirInicio(0.5f);
    listaFloat.inserirPosicao(1.5f, 2);

    listaFloat.imprimir();

    float removidoFloat = listaFloat.removerPosicao(1);
    std::cout << "Removido float: " << removidoFloat << std::endl;

    listaFloat.imprimir();

    bool encontrouFloat = listaFloat.remover(2.2f);
    std::cout << "Removeu 2.2? " << (encontrouFloat ? "Sim" : "Nao") << std::endl;

    listaFloat.imprimir();

    ListaSimplesTemplateConsole<std::string> listaFrutas;

    listaFrutas.inserirFim("banana");
    listaFrutas.inserirFim("alperce");
    listaFrutas.inserirInicio("laranja");
    listaFrutas.inserirPosicao("uva", 2);

    listaFrutas.imprimir();

    std::string removidoStr = listaFrutas.removerPosicao(1);
    std::cout << "Removido string: " << removidoStr << std::endl;

    listaFrutas.imprimir();

    bool encontrouStr = listaFrutas.remover("alperce");
    std::cout << "Removeu 'alperce'? " << (encontrouStr ? "Sim" : "Nao") << std::endl;

    listaFrutas.imprimir();

    return 0;
}
