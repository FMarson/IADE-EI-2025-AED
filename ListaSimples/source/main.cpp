#include "..\include\ListaSimplesConsole.h"

int main()
{
    ListaSimplesConsole lista;
    
    lista.inserirInicio(20);
    lista.inserirInicio(10);
    lista.inserirFim(30);

    lista.imprimir();

    lista.inserirPosicao(25, 2);
    lista.imprimir();

    lista.remover(25);
    lista.imprimir();

    lista.removerInicio();
    lista.imprimir();

    lista.removerFim();
    lista.imprimir();

    lista.limpar();
    lista.imprimir();
    
    return 0;
}
