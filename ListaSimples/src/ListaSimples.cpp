#include "ListaSimples.h"

ListaSimples::ListaSimples(){
    inicio = nullptr;
    fim = nullptr;
    tamanho = 0;
}

ListaSimples::~ListaSimples(){
    limpa();
}

void ListaSimples::insereInicio(int dado){
    Nodo *novo = new Nodo;
    novo->dado = dado;
    novo->proximo = inicio;
    inicio = novo;
    if (fim == nullptr)
        fim = novo;
    tamanho++;
}

void ListaSimples::insereFim(int dado){
    Nodo *novo = new Nodo;
    novo->dado = dado;
    novo->proximo = nullptr;
    if (fim != nullptr)
        fim->proximo = novo;
    fim = novo;
    if (inicio == nullptr)
        inicio = novo;
    tamanho++;
}

bool ListaSimples::inserePosicao(int dado, int posicao){
    if (posicao < 0 || posicao > tamanho)
        return false;
    if (posicao == 0){
        insereInicio(dado);
        return true;
    }
    if (posicao == tamanho){
        insereFim(dado);
        return true;
    }
    Nodo *novo = new Nodo;
    novo->dado = dado;
    Nodo *atual = inicio;
    for (int i = 0; i < posicao - 1; i++)
        atual = atual->proximo;
    novo->proximo = atual->proximo;
    atual->proximo = novo;
    tamanho++;
    return true;
}

Nodo* ListaSimples::removeInicio(){
    if (inicio == nullptr)
        return nullptr;
    Nodo *removido = inicio;
    inicio = inicio->proximo;
    if (inicio == nullptr)
        fim = nullptr;
    tamanho--;
    return removido;
}

Nodo* ListaSimples::removeFim(){
    if (fim == nullptr)
        return nullptr;
    Nodo *removido = fim;
    if (inicio == fim){
        inicio = nullptr;
        fim = nullptr;
    } else {
        Nodo *atual = inicio;
        while (atual->proximo != fim)
            atual = atual->proximo;
        atual->proximo = nullptr;
        fim = atual;
    }
    tamanho--;
    return removido;
}   

Nodo* ListaSimples::remove(int dado){
    if (inicio == nullptr)
        return nullptr;

    Nodo *atual = inicio;
    Nodo *anterior = nullptr;
    while (atual != nullptr && atual->dado != dado){
        anterior = atual;
        atual = atual->proximo;
    }
    if (atual == nullptr)
        return nullptr;
    if (anterior == nullptr){
        inicio = atual->proximo;
        if (inicio == nullptr)
            fim = nullptr;
    } else {
        anterior->proximo = atual->proximo;
        if (atual == fim)
            fim = anterior;
    }
    tamanho--;
    return atual;
}

Nodo* ListaSimples::busca(int dado){
    Nodo *atual = inicio;
    while (atual != nullptr){
        if (atual->dado == dado)
            return atual;
        atual = atual->proximo;
    }
    return nullptr;
}

Nodo* ListaSimples::buscaPosicao(int posicao){
    if (posicao < 0 || posicao >= tamanho)
        return nullptr;

    Nodo *atual = inicio;
    if(posicao == 0)
        return inicio;

    if(posicao == tamanho)
        return fim;
    
    for (int i = 0; i < posicao; i++)
        atual = atual->proximo;
    return atual;
}

void ListaSimples::imprime(){
    Nodo *atual = inicio;
    while (atual != nullptr){
        cout << atual->dado << " ";
        atual = atual->proximo;
    }
    cout << endl;
}

void ListaSimples::limpa(){
    Nodo *atual = inicio;
    while (atual != nullptr){
        Nodo *proximo = atual->proximo;
        delete atual;
        atual = proximo;
    }
    inicio = nullptr;
    fim = nullptr;
    tamanho = 0;
}