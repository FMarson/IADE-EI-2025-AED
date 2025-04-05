#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Monstro.h"

using namespace std;

int main() {
    // Criação de um monstro
    Monstro monstro;

    monstro.criar("Draconis", "Dragão", 32, 2, 4, 1);
    
    monstro.mostrarInfo(); // Mostra as informações do monstro

    cout << "\nAtaque do monstro: " << monstro.atacar() << endl;

    int danoRecebido = 50; // Exemplo de dano recebido
    cout << "\nO monstro recebeu um dano de: " << danoRecebido << endl;
    
    int defesaRestante = monstro.defender(danoRecebido);
    cout << "Defesa restante após ataque: " << defesaRestante << endl;

    monstro.mostrarInfo(); // Mostra as informações após o ataque

    return 0;
}