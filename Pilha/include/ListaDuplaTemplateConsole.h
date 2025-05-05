#ifndef LISTADUPLATEMPLATECONSOLE_H
#define LISTADUPLATEMPLATECONSOLE_H

#include "ListaDuplaTemplate.h"

#include <iostream>

using namespace std;

template <typename T>
class ListaDuplaTemplateConsole {
private:
    ListaDuplaTemplate<T> lista;

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

    bool ocorreuErro() const;

    int tamanhoLista() const;

    void limpar();

    void imprimir() const;
};

#include "ListaDuplaTemplateConsole.tpp"

#endif
