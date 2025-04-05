#include <iostream>

using namespace std;

void imprimeMultiplos(int multiplo, int vezes = 10, int numero = 1){
    if(numero <= vezes){
        cout << multiplo * numero << " ";
        imprimeMultiplos(multiplo, vezes, ++numero);
    }    
}

/*
void imprimeMultiplos( int multiplo, int vezes){
    imprimeMultiplos(1,multiplo, vezes);
}
*/

int main() {
    cout << endl;
    // for(int c = 1; c <= 9; c++){
    //     cout << 4 * c << " ";
    // }
    imprimeMultiplos(10);
    cout << endl << endl;
    return 0;
}
