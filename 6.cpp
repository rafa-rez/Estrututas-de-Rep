#include <iostream>
#include <fstream>

using namespace std;

int main(){

    int tamanho;

    cin >> tamanho;

    ofstream arquivo("jogo.txt");

    for ( int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
           if ((i+j) % 2 == 0)
           {
            arquivo << ".";
           } else {

            arquivo << "#";

           }
           
        }
        arquivo << endl;
    }
    
}