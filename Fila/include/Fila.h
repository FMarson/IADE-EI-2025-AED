#ifndef FILA_H
#define FILA_H

#include "ListaDuplaTemplate.h"

template <typename T>
class Fila {
protected:
    ListaDuplaTemplate<T> lista;

public:
    void inserir(const T& dado) {
        lista.inserirFim(dado);
    }

    T remover() {
        return lista.removerInicio();
    }

    T consultar() {
        if (lista.tamanhoLista() == 0) {
            return T{};
        }
        return lista.buscarPosicao(0);
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
