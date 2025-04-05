#include "Monstro.h"
#include <iostream>
#include <cstdlib> // Para rand() e srand()
#include <ctime>   // Para time()

// Método para criar o monstro
void Monstro::criar(string n, string e, int dentes, int chifres, int garras, int caudas) {
    nome = n;
    especie = e;
    numeroDeDentes = dentes;
    numeroDeChifres = chifres;
    numeroDeGarras = garras;
    numeroDeCaudas = caudas;
    defesa = 100; // Defesa inicializada com 100
    ataque = rand() % 11 + 15; // Ataque inicializado com um valor aleatório entre 15 e 25
    saude = 100; // Inicializando saúde com um valor apropriado
    vivo = true;
}

// Método para retornar o valor do ataque
int Monstro::atacar() {
    return ataque;
}

// Método para defender e retornar o dano que sobrou da defesa
int Monstro::defender(int dano) {
    if (dano < defesa) {
        defesa -= dano; // Reduz a defesa do monstro pelo dano recebido
        return defesa; // Retorna a defesa restante
    } else {
        saude -= (dano - defesa); // Subtrai o dano da saúde se a defesa não for suficiente
        defesa = 0; // Defesa é zerada após o ataque
        if (saude <= 0) {
            vivo = false; // Se a saúde for zero ou menos, o monstro morre
        }
        return 0; // Retorna 0 porque a defesa foi zerada
    }
}

// Método para mostrar todas as informações do monstro
void Monstro::mostrarInfo() {
    cout << "Nome: " << nome << endl;
    cout << "Espécie: " << especie << endl;
    cout << "Ataque: " << ataque << endl;
    cout << "Defesa: " << defesa << endl;
    cout << "Número de Dentes: " << numeroDeDentes << endl;
    cout << "Número de Chifres: " << numeroDeChifres << endl;
    cout << "Número de Garras: " << numeroDeGarras << endl;
    cout << "Número de Caudas: " << numeroDeCaudas << endl;
    cout << "Voa: " << (voa ? "Sim" : "Não") << endl;
    cout << "Nada: " << (nada ? "Sim" : "Não") << endl;
    cout << "Sopra Fogo: " << (sopraFogo ? "Sim" : "Não") << endl;
    cout << "Está Vivo: " << (vivo ? "Sim" : "Não") << endl;
    cout << "Saúde: " << saude << endl;
}
