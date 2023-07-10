#include <iostream>
#include <fstream>

    using namespace std;

int main () {

    float distAtual, distAtualmilhas, distFinal, velMedia, tempo;

    ifstream dados("entrada.txt");

    dados >> distAtual >> velMedia >> tempo;

    distAtualmilhas = distAtual / 1.852;

    distFinal = ((velMedia * tempo)/ 1.852) + distAtualmilhas;

    cout << distAtualmilhas << endl << distFinal;


    
    return 0;
}