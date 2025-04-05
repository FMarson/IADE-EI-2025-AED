#ifndef MONSTRO_H
#define MONSTRO_H

#include <string>

using namespace std;

class Monstro {
private:
    string nome;
    string especie;
    int ataque; 
    int defesa;
    int numeroDeDentes;
    int numeroDeChifres;
    int numeroDeGarras;
    int numeroDeCaudas;
    bool voa;
    bool nada;
    bool sopraFogo;
    bool vivo; 
    int saude; 

public:
    // Construtor
    Monstro(){};

    // Método para criar o monstro
    void criar(string n, string e, int dentes, int chifres, int garras, int caudas);
    
    // Método para retornar o valor do ataque
    int atacar();
    
    // Método para defender e retornar o dano que sobrou da defesa
    int defender(int dano);
    
    // Método para mostrar todas as informações do monstro
    void mostrarInfo();
};

#endif // MONSTRO_H
