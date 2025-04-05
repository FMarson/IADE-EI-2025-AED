#include <string>
#include <vector>

using namespace std;

class Luminaria {
private:
    int quantidadeLampadas;
    string tipo;
    string tecnologia;
    double potenciaLuminosa;
    double voltagem;
    bool estado; // false significa desligada, true significa ligada
    vector<bool> funcionando; // Vetor para estados das lâmpadas (vamos ver depois vector)

public:
    // Construtor
    Luminaria(int qnt, string t, string tec, double potencia, double voltagem);

    // Destrutor
    ~Luminaria(){};

    // Getters
    int getQuantidadeLampadas();
    string getTipo();
    string getTecnologia();
    double getPotenciaLuminosa();
    double getVoltagem();
    bool isLigada();

    // Métodos
    void trocarTodasAsLampadas();
    bool testarLampada(int posicao);
    void ligarDesligar();
};
