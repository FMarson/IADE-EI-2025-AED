#ifndef LISTASIMPLESTEMPLATE_H
#define LISTASIMPLESTEMPLATE_H

template <typename T>
struct Nodo{
    T dado;
    Nodo<T> *proximo;
};

template <typename T>
class ListaSimplesTemplate
{
protected:
    Nodo<T> *inicio;
    Nodo<T> *fim;
    int tamanho;
    bool erro;

public:
    ListaSimplesTemplate();
    ~ListaSimplesTemplate();

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

    int tamanhoLista();

    void limpar();
};

#include "ListaSimplesTemplate.tpp"

#endif
