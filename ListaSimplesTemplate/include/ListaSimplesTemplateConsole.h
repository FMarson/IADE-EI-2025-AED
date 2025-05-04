#ifndef LISTASIMPLESTEMPLATECONSOLE_H
#define LISTASIMPLESTEMPLATECONSOLE_H

#include "ListaSimplesTemplate.h"
#include <iostream>

template <typename T>
class ListaSimplesTemplateConsole {
private:
    ListaSimplesTemplate<T> lista;

public:
    void inserirInicio(const T& dado);
    void inserirFim(const T& dado);
    bool inserirPosicao(const T& dado, int posicao);

    T removerInicio();
    T removerFim();
    bool remover(const T& dado);
    T removerPosicao(int posicao);

    T buscar(const T& dado);
    T buscarPosicao(int posicao);

    bool ocorreuErro();

    void imprimir();
};

#include "ListaSimplesTemplateConsole.tpp"

#endif
