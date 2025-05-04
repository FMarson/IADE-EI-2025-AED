#include "../include/ListaSimplesConsole.h"


void ListaSimplesConsole::inserirInicio(int dado){
   lista.inserirInicio(dado);
}

void ListaSimplesConsole::inserirFim(int dado){
   lista.inserirFim(dado);
}

bool ListaSimplesConsole::inserirPosicao(int dado, int posicao){
   return lista.inserirPosicao(dado, posicao);
}

int ListaSimplesConsole::removerInicio(){
   return lista.removerInicio();
}

int ListaSimplesConsole::removerFim(){
   return lista.removerFim();
}

int ListaSimplesConsole::remover(int dado){
   return lista.remover(dado);
}

int ListaSimplesConsole::removerPosicao(int posicao){
   return lista.removerPosicao(posicao);
}

int ListaSimplesConsole::buscar(int dado){
   return lista.buscar(dado);
}

int ListaSimplesConsole::buscarPosicao(int posicao){
   return lista.buscarPosicao(posicao);
}

bool ListaSimplesConsole::ocorreuErro(){
   return lista.ocorreuErro();
}

void ListaSimplesConsole::imprimir(){
   for (int i = 0; i < lista.tamanhoLista(); i++){
       cout << lista.buscarPosicao(i) << " ";
   }
   cout << endl;
}

void ListaSimplesConsole::limpar(){
   lista.limpar();
}
