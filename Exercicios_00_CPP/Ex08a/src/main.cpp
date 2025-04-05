#include <iostream>
#include <string>

using namespace std;

int main() {

    int idade;
    int qtdLivros;
    char sexo;
    int livrosLidosMenoresDezAnos = 0;
    int qtdMulheresCincoLivrosMais = 0;
    float mediaIdadeHomensLeramMenos5 = 0;
    int qtdHomensLeramMenos5 = 0;
    float percentualNaoLeramLivros = 0;
    int qtdTotalEntrevistados = 0;
   
    cout << "Informe a idade: ";
    cin >> idade;

    while(idade > 0 ){
        qtdTotalEntrevistados += 1;
        
        cout << "Informe o sexo: ";
        cin >> sexo;
        cout << "Informe a quantidade de livros lidos: ";
        cin >> qtdLivros;
        //
        if(idade < 10 && qtdLivros > 0)
            livrosLidosMenoresDezAnos++;
        if(qtdLivros >= 5 && (sexo == 'f' || sexo == 'F'))
            qtdMulheresCincoLivrosMais++;
        if(qtdLivros < 5 &&  (sexo == 'm' || sexo == 'M')){
            qtdHomensLeramMenos5++;
            mediaIdadeHomensLeramMenos5 += idade;
        }
        if(qtdLivros == 0)
            percentualNaoLeramLivros++;
        //
        cout << "Informe a idade: ";
        cin >> idade;
    }

    if(qtdHomensLeramMenos5 > 0)
        mediaIdadeHomensLeramMenos5 /= (float)qtdHomensLeramMenos5; // converte int em float
    if(qtdTotalEntrevistados > 0)
        percentualNaoLeramLivros /= (float)qtdTotalEntrevistados * 100.0f;

    // Impressão dos resultados
    cout << "\nQuantidade total de livros lidos por entrevistados menores de 10 anos: " << livrosLidosMenoresDezAnos << endl;
    cout << "Quantidade de mulheres que leram 5 livros ou mais: " << qtdMulheresCincoLivrosMais << endl;
    cout << "Media de idade dos homens que leram menos que 5 livros: " << mediaIdadeHomensLeramMenos5 << endl;
    cout << "Percentual de pessoas que nao leram livros: " << percentualNaoLeramLivros << "%" << endl;

    return 0;
}
