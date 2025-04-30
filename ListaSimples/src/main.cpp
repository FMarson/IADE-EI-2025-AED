#include "Fila.h"

int main()
{
    ListaSimples lista;
    
    lista.insereInicio(10);
    lista.insereInicio(20);
    lista.insereInicio(30);
    lista.imprime();

    Nodo* nodo = lista.buscaPosicao(0);
    cout << "Nodo: " << nodo->dado << endl;


    Fila fila;
    fila.insere(10);
    fila.insere(20);
    fila.insere(30);

    fila.imprimeInicio();
    cout << "Tamanho da fila: " << fila.tamanhoFila() << endl;
    Nodo* removido = fila.remove();
    
    if(removido != nullptr)
        cout << "Removido: " << removido->dado << endl;

    fila.imprimeInicio();
    cout << "Tamanho da fila: " << fila.tamanhoFila() << endl;

    fila.limpa();



    return 0;
}
