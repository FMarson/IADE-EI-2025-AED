
#include <iostream>

using namespace std;

int main()
{
    int valor = 10;
    long int numeroGrande;
    float preco;
    bool ligado = false;
    double temp;
    char resposta;
    
    
    /*
    for(int c = 0; c < 3; c++){
        cout << "\nInforme um valor: ";
        cin >> valor;
        cout << "Valor: " << valor << endl;
        
        if(valor < 10){
            cout << "\tO valor é menor do que 10.";
        }
        else if(valor > 10){
            cout << "\tO valor é maior do que 10.";
        }
        else {
            cout << "\tO valor é 10.";
        }
    }
    */
    
    while(ligado == false){
        cout << "Queres ligar? (s/n): ";
        cin >> resposta;
        if(resposta == 's')
            ligado = true;
    }
    
    do{
        cout << "Queres ligar? (s/n): ";
        cin >> resposta;
        if(resposta == 's')
            ligado = true;
    }while(ligado == false);
    
    // comentário
    /*
    switch(valor){
        case 10: cout << "É o número 10!";
                 break;
                 
        default: "Valor qualquer!";
    }
    */
    return 0;
}