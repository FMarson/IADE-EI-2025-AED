template <typename T>
ListaSimplesTemplate<T>::ListaSimplesTemplate(){
    inicio = nullptr;
    fim = nullptr;
    tamanho = 0;
    erro = false;
}

template <typename T>
ListaSimplesTemplate<T>::~ListaSimplesTemplate(){
    limpar();
}

template <typename T>
bool ListaSimplesTemplate<T>::ocorreuErro(){
    return erro;
}

template <typename T>
void ListaSimplesTemplate<T>::inserirInicio(const T& dado){
    erro = false;
    Nodo<T> *novo = new Nodo<T>;
    novo->dado = dado;
    novo->proximo = inicio;
    inicio = novo;
    if (fim == nullptr)
        fim = novo;
    tamanho++;
}

template <typename T>
void ListaSimplesTemplate<T>::inserirFim(const T& dado){
    erro = false;
    Nodo<T> *novo = new Nodo<T>;
    novo->dado = dado;
    novo->proximo = nullptr;
    if (fim != nullptr)
        fim->proximo = novo;
    fim = novo;
    if (inicio == nullptr)
        inicio = novo;
    tamanho++;
}

template <typename T>
bool ListaSimplesTemplate<T>::inserirPosicao(const T& dado, int posicao){
    erro = false;
    if (posicao < 0 || posicao > tamanho) {
        erro = true;
        return false;
    }
    if (posicao == 0){
        inserirInicio(dado);
        return true;
    }
    if (posicao == tamanho){
        inserirFim(dado);
        return true;
    }
    Nodo<T> *novo = new Nodo<T>;
    novo->dado = dado;
    Nodo<T> *atual = inicio;
    for (int i = 0; i < posicao - 1; i++)
        atual = atual->proximo;
    novo->proximo = atual->proximo;
    atual->proximo = novo;
    tamanho++;
    return true;
}

template <typename T>
T ListaSimplesTemplate<T>::removerInicio(){
    if (inicio == nullptr){
        erro = true;
        return T{};
    }
    erro = false;
    Nodo<T> *removido = inicio;
    T valor = removido->dado;
    inicio = inicio->proximo;
    if (inicio == nullptr)
        fim = nullptr;
    tamanho--;
    delete removido;
    return valor;
}

template <typename T>
T ListaSimplesTemplate<T>::removerFim(){
    if (fim == nullptr){
        erro = true;
        return T{};
    }
    erro = false;
    Nodo<T> *removido = fim;
    T valor = removido->dado;

    if (inicio == fim){
        inicio = nullptr;
        fim = nullptr;
        delete removido;
        tamanho--;
        return valor;
    }

    Nodo<T> *atual = inicio;
    while (atual->proximo != fim)
        atual = atual->proximo;

    atual->proximo = nullptr;
    fim = atual;

    delete removido;
    tamanho--;
    return valor;
}

template <typename T>
bool ListaSimplesTemplate<T>::remover(const T& dado){
    if (inicio == nullptr){
        erro = true;
        return false;
    }

    Nodo<T> *atual = inicio;
    Nodo<T> *anterior = nullptr;

    while (atual != nullptr && !(atual->dado == dado)){
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == nullptr){
        erro = true;
        return false;
    }

    erro = false;

    if (anterior == nullptr){
        inicio = atual->proximo;
        if (inicio == nullptr)
            fim = nullptr;
    } else {
        anterior->proximo = atual->proximo;
        if (atual == fim)
            fim = anterior;
    }

    delete atual;
    tamanho--;
    
    return true;
}

template <typename T>
T ListaSimplesTemplate<T>::removerPosicao(int posicao){
    if (posicao < 0 || posicao >= tamanho) {
        erro = true;
        return T{};
    }

    erro = false;

    if(posicao == 0)
        return removerInicio();

    if(posicao == tamanho - 1)
        return removerFim();

    Nodo<T>* anterior=inicio;

    for(int i=0; i<posicao-1; i++)
        anterior=anterior->proximo;

    Nodo<T>* removido=anterior->proximo;

    T valor=removido->dado;

    anterior->proximo=removido->proximo;

    delete removido;

    tamanho--;

    return valor;	
}

template <typename T>
T ListaSimplesTemplate<T>::buscar(const T& dado){
    Nodo<T>* atual=inicio;

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
T ListaSimplesTemplate<T>::buscarPosicao(int posicao){
    if(posicao<0 || posicao>=tamanho){
        erro=true; 
        return T{};
    }

    Nodo<T>* atual=inicio;

    for(int i=0;i<posicao;i++)
        atual=atual->proximo;

    erro=false; 

    return atual->dado;	
}

template <typename T>
int ListaSimplesTemplate<T>::tamanhoLista(){
    return tamanho;	
}

template <typename T>
void ListaSimplesTemplate<T>::limpar(){
    Nodo<T>* atual=inicio;

    while(atual!=nullptr){
        Nodo<T>* proximo=atual->proximo;
        delete atual; 
        atual=proximo;	
    }

    inicio=nullptr; 
    fim=nullptr; 
    tamanho=0; 
    erro=false;	
}
