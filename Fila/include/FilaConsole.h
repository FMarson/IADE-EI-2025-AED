#ifndef FILACONSOLE_H
#define FILACONSOLE_H

#include "Fila.h"

template <typename T>
class FilaConsole {
private:
    Fila<T> fila;

public:
    void inserir(const T& dado) {
        fila.inserir(dado);
    }

    T remover() {
        return fila.remover();
    }

    T consultar() {
        return fila.consultar();
    }

    bool vazia() {
        return fila.vazia();
    }

    int tamanho() {
        return fila.tamanho();
    }

    bool ocorreuErro() {
        return fila.ocorreuErro();
    }

    void limpar() {
        fila.limpar();
    }

    void imprimir() {
        NodoDuplo<T>* atual = fila.getInicio();
        while (atual != nullptr) {
            cout << atual->dado << " ";
            atual = atual->proximo;
        }
        cout << endl;
    }
};

#endif