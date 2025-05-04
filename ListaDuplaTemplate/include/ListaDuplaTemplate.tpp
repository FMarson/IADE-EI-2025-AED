template <typename T>
ListaDuplaTemplate<T>::ListaDuplaTemplate() : inicio(nullptr), fim(nullptr), tamanho(0), erro(false) {}

template <typename T>
ListaDuplaTemplate<T>::~ListaDuplaTemplate() {
    limpar();
}

template <typename T>
bool ListaDuplaTemplate<T>::ocorreuErro() const {
    return erro;
}

template <typename T>
void ListaDuplaTemplate<T>::inserirInicio(const T& dado) {
    erro = false;
    NodoDuplo<T>* novo = new NodoDuplo<T>;
    novo->dado = dado;
    novo->anterior = nullptr;
    novo->proximo = inicio;

    if (inicio != nullptr)
        inicio->anterior = novo;
    inicio = novo;

    if (fim == nullptr)
        fim = novo;

    tamanho++;
}

template <typename T>
void ListaDuplaTemplate<T>::inserirFim(const T& dado) {
    erro = false;
    NodoDuplo<T>* novo = new NodoDuplo<T>;
    novo->dado = dado;
    novo->proximo = nullptr;
    novo->anterior = fim;

    if (fim != nullptr)
        fim->proximo = novo;
    fim = novo;

    if (inicio == nullptr)
        inicio = novo;

    tamanho++;
}

template <typename T>
bool ListaDuplaTemplate<T>::inserirPosicao(const T& dado, int posicao) {
    erro = false;
    if (posicao < 0 || posicao > tamanho) {
        erro = true;
        return false;
    }
    if (posicao == 0) {
        inserirInicio(dado);
        return true;
    }
    if (posicao == tamanho) {
        inserirFim(dado);
        return true;
    }

    NodoDuplo<T>* atual = inicio;
    for (int i = 0; i < posicao - 1; i++)
        atual = atual->proximo;

    NodoDuplo<T>* novo = new NodoDuplo<T>;
    novo->dado = dado;

    novo->proximo = atual->proximo;
    novo->anterior = atual;

    atual->proximo->anterior = novo;
    atual->proximo = novo;

    tamanho++;
    return true;
}

template <typename T>
T ListaDuplaTemplate<T>::removerInicio() {
    if (inicio == nullptr) {
        erro = true;
        return T{};
    }
    erro = false;

    NodoDuplo<T>* removido = inicio;
    T valor = removido->dado;

    inicio = inicio->proximo;
    
    if (inicio != nullptr)
        inicio->anterior = nullptr;
    else
        fim = nullptr;

    delete removido;
    tamanho--;

    return valor;
}

template <typename T>
T ListaDuplaTemplate<T>::removerFim() {
    if (fim == nullptr) {
        erro = true;
        return T{};
    }
    erro = false;

    NodoDuplo<T>* removido = fim;
    T valor = removido->dado;

    fim = fim->anterior;

    if (fim != nullptr)
        fim->proximo = nullptr;
    else
        inicio = nullptr;

    delete removido;
    tamanho--;

    return valor;
}

template <typename T>
bool ListaDuplaTemplate<T>::remover(const T& dado) {
    if (inicio == nullptr) {
        erro = true;
        return false;
    }

    NodoDuplo<T>* atual = inicio;

    while (atual != nullptr && !(atual->dado == dado))
        atual = atual->proximo;

    if (atual == nullptr) {
        erro = true;
        return false;
    }

    erro = false;

    if (atual->anterior != nullptr)
        atual->anterior->proximo = atual->proximo;
    else
        inicio = atual->proximo;

    if (atual->proximo != nullptr)
        atual->proximo->anterior = atual->anterior;
    else
        fim = atual->anterior;

    delete atual;
    tamanho--;

    return true;
}

template <typename T>
T ListaDuplaTemplate<T>::removerPosicao(int posicao) {
    if (posicao < 0 || posicao >= tamanho) {
        erro = true;
        return T{};
    }

    erro = false;

    if (posicao == 0)
        return removerInicio();

    if (posicao == tamanho - 1)
        return removerFim();

    NodoDuplo<T>* atual = inicio;

    for (int i=0; i<posicao; i++)
        atual=atual->proximo;

    T valor=atual->dado;

    atual->anterior->proximo=atual->proximo;
    atual->proximo->anterior=atual->anterior;

    delete atual;

    tamanho--;

    return valor; 
}

template <typename T>
T ListaDuplaTemplate<T>::buscar(const T& dado) {
    NodoDuplo<T>* atual=inicio;

    while(atual!=nullptr){
        if(atual->dado==dado){
            erro=false; 
            return atual->dado;	
        }
        atual=atual->proximo;	
    }

    erro=true; 
    return T{};	
}

template <typename T>
T ListaDuplaTemplate<T>::buscarPosicao(int posicao) {
    if(posicao<0 || posicao>=tamanho){
        erro=true; 
        return T{};
    }

    NodoDuplo<T>* atual=inicio;

    for(int i=0;i<posicao;i++)
        atual=atual->proximo;

    erro=false; 

    return atual->dado;	
}

template <typename T>
int ListaDuplaTemplate<T>::tamanhoLista() const {
    return tamanho;	
}

template <typename T>
void ListaDuplaTemplate<T>::limpar() {
    NodoDuplo<T>* atual=inicio;

    while(atual!=nullptr){
        NodoDuplo<T>* proximo=atual->proximo;
        delete atual; 
        atual=proximo;	
    }

    inicio=nullptr; 
    fim=nullptr; 
    tamanho=0; 
    erro=false;	
}
