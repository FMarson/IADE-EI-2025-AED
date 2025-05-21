#ifndef FILA_H
#define FILA_H

#include "ListaDuplaTemplate.h"

template <typename T>
class Fila {
protected:
    ListaDuplaTemplate<T> fila;

public:
    void inserir(const T& dado) {
        fila.inserirFim(dado);
    }

    T remover() {
        return fila.removerInicio();
    }

    T consultar() {
        if (fila.tamanhoLista() == 0) {
            return T{};
        }
        return fila.buscarPosicao(0);
    }

    bool vazia() {
        return fila.tamanhoLista() == 0;
    }

    int tamanho() {
        return fila.tamanhoLista();
    }

    bool ocorreuErro() {
        return fila.ocorreuErro();
    }

    void limpar() {
        fila.limpar();
    }

    NodoDuplo<T>* getInicio() {
        return fila.getInicio();
    }
};

#endif
