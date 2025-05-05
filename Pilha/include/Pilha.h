#ifndef PILHA_H
#define PILHA_H

#include "ListaDuplaTemplate.h"

template <typename T>
class Pilha {
private:
    ListaDuplaTemplate<T> lista;

public:
    void empilhar(const T& dado) {
        lista.inserirFim(dado);
    }

    T desempilhar() {
        return lista.removerFim();
    }

    T topo() {
        if (lista.tamanhoLista() == 0) {
            return T{};
        }
        return lista.buscarPosicao(lista.tamanhoLista() - 1);
    }

    bool vazia() {
        return lista.tamanhoLista() == 0;
    }

    int tamanho() {
        return lista.tamanhoLista();
    }

    bool ocorreuErro() {
        return lista.ocorreuErro();
    }

    void limpar() {
        lista.limpar();
    }

    NodoDuplo<T>* getInicio() {
        return lista.getInicio();
    }
};

#endif
