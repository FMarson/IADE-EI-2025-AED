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

public:
    ListaSimples();
    ~ListaSimples();

    void insereInicio(int dado);
    void insereFim(int dado);
    bool inserePosicao(int dado, int posicao);

    Nodo* removeInicio();
    Nodo* removeFim();
    Nodo* remove(int dado);

    Nodo* busca(int dado);
    Nodo* buscaPosicao(int posicao);

    void imprime(); //só no console.

    void limpa();
};

