#include <iostream>

using namespace std;

struct Nodo{
    int dado;
    Nodo *proximo;
};

int main()
{
    Nodo *inicio, *fim, *nodo, *novo;

    inicio = new Nodo;
    inicio->dado = 10;
    inicio->proximo = null;

    novo = new Nodo;
    novo->dado = 5;
    novo->proximo = null;

    inicio->proximo = novo;

    novo = new Nodo;
    novo->dado = 7;
    novo->proximo = null;

    inicio->proximo->proximo = novo;



    return 0;
}
