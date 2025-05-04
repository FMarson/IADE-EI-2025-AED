#ifndef LISTASIMPLES_H
#define LISTASIMPLES_H

#include <iostream>

using namespace std;

struct Nodo{
    int dado;
    Nodo *proximo;
};

class ListaSimples
{
protected:
    Nodo *inicio;
    Nodo *fim;
    int tamanho;
    bool erro;

public:
    ListaSimples();
    ~ListaSimples();

    void inserirInicio(int dado);
    void inserirFim(int dado);
    bool inserirPosicao(int dado, int posicao);

    int removerInicio();
    int removerFim();
    bool remover(int dado);
    int removerPosicao(int posicao);

    int buscar(int dado);
    int buscarPosicao(int posicao);

    bool ocorreuErro(); 

    int tamanhoLista();

    void limpar();
};

#endif