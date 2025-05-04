#ifndef LISTASIMPLESCONSOLE_H
#define LISTASIMPLESCONSOLE_H

#include "ListaSimples.h"

class ListaSimplesConsole {
private:
    ListaSimples lista;

public:

    void inserirInicio(int dado);
    void inserirFim(int dado);
    bool inserirPosicao(int dado, int posicao);

    int removerInicio();
    int removerFim();
    int remover(int dado);
    int removerPosicao(int posicao);

    int buscar(int dado);
    int buscarPosicao(int posicao);

    bool ocorreuErro();

    void imprimir();
    void limpar();
};

#endif
