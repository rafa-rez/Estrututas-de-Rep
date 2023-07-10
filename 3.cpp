#include <iostream>
#include <fstream>

using namespace std;

int main () {

    string arquivoPortugues, arquivosIngles, arquivoFinal, palavraPort, palavraIng;

    cout << "Porutgues:";
    cin >> arquivoPortugues;
    cout << "inglês: ";
    cin >> arquivosIngles;
    cout << "Dicionário:";
    cin >> arquivoFinal;

    ifstream portugues(arquivoPortugues);
    ifstream ingles(arquivosIngles);
    ofstream final(arquivoFinal);

    while (portugues >> palavraPort and ingles >> palavraIng )
    {
        final << palavraPort << ": " << palavraIng << endl;
    }
    

}