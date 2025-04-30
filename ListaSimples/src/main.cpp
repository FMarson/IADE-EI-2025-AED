#include "ListaSimples.h"

int main()
{
    ListaSimples lista;
    
    lista.insereInicio(10);
    lista.insereInicio(20);
    lista.insereInicio(30);
    lista.imprime();

    Nodo* nodo = lista.buscaPosicao(0);
    cout << "Nodo: " << nodo->dado << endl;




    return 0;
}
