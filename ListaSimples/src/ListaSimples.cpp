#include "../include/ListaSimples.h"

ListaSimples::ListaSimples(){
    inicio = nullptr;
    fim = nullptr;
    tamanho = 0;
    erro = false;
}

ListaSimples::~ListaSimples(){
    limpar();
}

bool ListaSimples::ocorreuErro(){
    return erro;
}

void ListaSimples::inserirInicio(int dado){
    erro = false;
    Nodo *novo = new Nodo;
    novo->dado = dado;
    novo->proximo = inicio;
    inicio = novo;
    if (fim == nullptr)
        fim = novo;
    tamanho++;
}

void ListaSimples::inserirFim(int dado){
    erro = false;
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

bool ListaSimples::inserirPosicao(int dado, int posicao){
    erro = false;
    if (posicao < 0 || posicao > tamanho) {
        erro = true;
        return false;
    }
    if (posicao == 0){
        inserirInicio(dado);
        return true;
    }
    if (posicao == tamanho){
        inserirFim(dado);
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

int ListaSimples::removerInicio(){
    if (inicio == nullptr){
        erro = true;
        return -1;
    }
    erro = false;
    Nodo *removido = inicio;
    int valor = removido->dado;
    inicio = inicio->proximo;
    if (inicio == nullptr)
        fim = nullptr;
    tamanho--;
    delete removido;
    return valor;
}

int ListaSimples::removerFim(){
    if (fim == nullptr){
        erro = true;
        return -1;
    }
    erro = false;
    Nodo *removido = fim;
    int valor = removido->dado;

    if (inicio == fim){
        inicio = nullptr;
        fim = nullptr;
        delete removido;
        tamanho--;
        return valor;
    }

    Nodo *atual = inicio;
    while (atual->proximo != fim)
        atual = atual->proximo;

    atual->proximo = nullptr;
    fim = atual;

    delete removido;
    tamanho--;
    return valor;
}


bool ListaSimples::remover(int dado){
    if (inicio == nullptr){
        erro = true;
        return false;
    }

    Nodo *atual = inicio;
    Nodo *anterior = nullptr;

    while (atual != nullptr && atual->dado != dado){
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == nullptr){
        erro = true;
        return false;
    }

    erro = false;

    if (anterior == nullptr){
        inicio = atual->proximo;
        if (inicio == nullptr)
            fim = nullptr;
    } else {
        anterior->proximo = atual->proximo;
        if (atual == fim)
            fim = anterior;
    }

    delete atual;
    tamanho--;
    
    return true;
}

int ListaSimples::removerPosicao(int posicao){
    if (posicao < 0 || posicao >= tamanho) {
        erro = true;
        return -1;
    }

    erro = false;

    if (posicao == 0)
        return removerInicio();

    if (posicao == tamanho - 1)
        return removerFim();

    Nodo* anterior = inicio;
    for (int i = 0; i < posicao -1; i++)
        anterior = anterior->proximo;

    Nodo* removido = anterior->proximo;

    int valor = removido->dado;

    anterior->proximo = removido->proximo;

    delete removido;

    tamanho--;

    return valor;
}

int ListaSimples::buscar(int dado){
    Nodo *atual = inicio;

    while (atual != nullptr){
        if (atual->dado == dado){
            erro = false;
            return atual->dado;
        }
        atual = atual->proximo;
    }

    erro = true;

    return -1;    
}

int ListaSimples::buscarPosicao(int posicao){
   if (posicao < 0 || posicao >= tamanho) {
       erro = true;
       return -1;
   }

   Nodo *atual = inicio;

   for (int i=0; i < posicao; i++)
       atual=atual->proximo;

   erro = false;

   return atual->dado; 
}

int ListaSimples::tamanhoLista(){
   return tamanho; 
}

void ListaSimples::limpar(){
   Nodo *atual=inicio;

   while(atual != nullptr){
       Nodo *proximo=atual->proximo;
       delete atual; 
       atual=proximo; 
   }

   inicio=nullptr; 
   fim=nullptr; 
   tamanho=0; 
   erro=false; 
}
