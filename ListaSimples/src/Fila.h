#include "ListaSimples.h"

class Fila : public ListaSimples
{
public:
    Fila();
    ~Fila();
    void insere(int dado);
    Nodo* remove();
    Nodo* imprimeInicio();
    bool vazia();
    int tamanhoFila();
    void limpa();
};