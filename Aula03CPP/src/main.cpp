#include <iostream>

using namespace std;

// x elevado na y

int potencia_iterativa(int x, int y){
    int valor = 1;
    for(int c = 0; c < y; c++){
        //valor = valor * x;
        valor *= x;
    }
    return valor;
}

int potencia_recursiva(int x, int y){
    if(y == 0)
        return 1;
    else
        return x * potencia_recursiva(x, y - 1);
}

int main(int argc, char *argv[])
{
    int x = 10;
    int y = 3;
    cout << endl << potencia_iterativa(x,y) << endl << endl;
    cout << endl << potencia_recursiva(x,y) << endl << endl;
}
