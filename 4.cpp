#include <iostream>
#include <fstream>

using namespace std;

int main () {

    int tamanho, produzidos, vendidos, estoque = 0, maior = 0;
    string nome, nomemaior;

    ifstream dados("estoque.txt");

    dados >> tamanho;

    for (int i = 0; i < tamanho; i++)
    {
        dados >> nome >> produzidos >> vendidos;

        estoque = produzidos - vendidos;

        if (estoque > maior)
        {
            maior = estoque;
            nomemaior = nome;
        }

        if (estoque < 50)
        {
            cout << nome << " " << estoque << " " << "BAIXO ESTOQUE" << endl;
        } else {
            
            cout << nome << " " << estoque << endl;
        }
        
    }
    cout << nomemaior << " " << maior;
    return 0;
}