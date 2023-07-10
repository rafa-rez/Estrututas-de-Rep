#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    int x, y, cont = 0;

    string nome;

    cin >> nome;

    ifstream entrada(nome);

    entrada >> x;

     while (entrada >> y)
    {

        if(y == x*2){
            cont++;
        }

        x = y;
    }
    ofstream saida("dobro.txt");
    saida << cont;
}