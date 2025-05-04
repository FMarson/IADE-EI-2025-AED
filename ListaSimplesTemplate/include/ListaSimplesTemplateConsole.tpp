#include <iostream>

template <typename T>
void ListaSimplesTemplateConsole<T>::inserirInicio(const T& dado){
    lista.inserirInicio(dado);
}

template <typename T>
void ListaSimplesTemplateConsole<T>::inserirFim(const T& dado){
    lista.inserirFim(dado);
}

template <typename T>
bool ListaSimplesTemplateConsole<T>::inserirPosicao(const T& dado, int posicao){
    return lista.inserirPosicao(dado, posicao);
}

template <typename T>
T ListaSimplesTemplateConsole<T>::removerInicio(){
    return lista.removerInicio();
}

template <typename T>
T ListaSimplesTemplateConsole<T>::removerFim(){
    return lista.removerFim();
}

template <typename T>
bool ListaSimplesTemplateConsole<T>::remover(const T& dado){
    return lista.remover(dado);
}

template <typename T>
T ListaSimplesTemplateConsole<T>::removerPosicao(int posicao){
    return lista.removerPosicao(posicao);
}

template <typename T>
T ListaSimplesTemplateConsole<T>::buscar(const T& dado){
    return lista.buscar(dado);
}

template <typename T>
T ListaSimplesTemplateConsole<T>::buscarPosicao(int posicao){
    return lista.buscarPosicao(posicao);
}

template <typename T>
bool ListaSimplesTemplateConsole<T>::ocorreuErro(){
    return lista.ocorreuErro();
}

template <typename T>
void ListaSimplesTemplateConsole<T>::imprimir(){
    for(int i=0; i<lista.tamanhoLista(); i++){
        std::cout << lista.buscarPosicao(i) << " ";
    }
    std::cout << std::endl;
}
