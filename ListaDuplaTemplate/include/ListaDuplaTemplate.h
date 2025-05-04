#ifndef LISTADUPLATEMPLATE_H
#define LISTADUPLATEMPLATE_H

template <typename T>
struct NodoDuplo {
    T dado;
    NodoDuplo<T>* proximo;
    NodoDuplo<T>* anterior;
};

template <typename T>
class ListaDuplaTemplate {
protected:
    NodoDuplo<T>* inicio;
    NodoDuplo<T>* fim;
    int tamanho;
    bool erro;

public:
    ListaDuplaTemplate();
    ~ListaDuplaTemplate();

    NodoDuplo<T>* getInicio() const { return inicio; }
    NodoDuplo<T>* getFim() const { return fim; }

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
};

#include "ListaDuplaTemplate.tpp"

#endif
