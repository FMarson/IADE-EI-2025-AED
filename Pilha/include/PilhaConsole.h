#ifndef PILHACONSOLE_H
#define PILHACONSOLE_H

#include "Pilha.h"

template <typename T>
class PilhaConsole {
private:
    Pilha<T> pilha;

public:
    void empilhar(const T& dado) {
        pilha.empilhar(dado);
    }

    T desempilhar() {
        return pilha.desempilhar();
    }

    T topo() {
        return pilha.topo();
    }

    bool vazia() {
        return pilha.vazia();
    }

    int tamanho() {
        return pilha.tamanho();
    }

    bool ocorreuErro() {
        return pilha.ocorreuErro();
    }

    void limpar() {
        pilha.limpar();
    }

    void imprimir() {
        NodoDuplo<T>* atual = pilha.getInicio();
        while (atual != nullptr) {
            cout << atual->dado << " ";
            atual = atual->proximo;
        }
        cout << endl;
    }
};

#endif
