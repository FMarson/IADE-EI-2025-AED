#include <iostream>

template <typename T>
void ListaDuplaTemplateConsole<T>::inserirInicio(const T& dado) {
    lista.inserirInicio(dado);
}

template <typename T>
void ListaDuplaTemplateConsole<T>::inserirFim(const T& dado) {
    lista.inserirFim(dado);
}

template <typename T>
bool ListaDuplaTemplateConsole<T>::inserirPosicao(const T& dado, int posicao) {
    return lista.inserirPosicao(dado, posicao);
}

template <typename T>
T ListaDuplaTemplateConsole<T>::removerInicio() {
    return lista.removerInicio();
}

template <typename T>
T ListaDuplaTemplateConsole<T>::removerFim() {
    return lista.removerFim();
}

template <typename T>
bool ListaDuplaTemplateConsole<T>::remover(const T& dado) {
    return lista.remover(dado);
}

template <typename T>
T ListaDuplaTemplateConsole<T>::removerPosicao(int posicao) {
    return lista.removerPosicao(posicao);
}

template <typename T>
T ListaDuplaTemplateConsole<T>::buscar(const T& dado) {
    return lista.buscar(dado);
}

template <typename T>
T ListaDuplaTemplateConsole<T>::buscarPosicao(int posicao) {
    return lista.buscarPosicao(posicao);
}

template <typename T>
bool ListaDuplaTemplateConsole<T>::ocorreuErro() const {
    return lista.ocorreuErro();
}

template <typename T>
int ListaDuplaTemplateConsole<T>::tamanhoLista() const {
    return lista.tamanhoLista();
}

template <typename T>
void ListaDuplaTemplateConsole<T>::limpar() {
    lista.limpar();
}

template <typename T>
void ListaDuplaTemplateConsole<T>::imprimir() const {
    NodoDuplo<T>* atual = lista.getInicio();
    while (atual != nullptr) {
        std::cout << atual->dado << " ";
        atual = atual->proximo;
    }
    std::cout << std::endl;
}
