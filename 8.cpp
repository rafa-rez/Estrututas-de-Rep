#include <iostream>
#include <fstream>

using namespace std;

int main (){

    int menor = 0, menor2 = 0, num;
    string nome;

    cin >> nome;

    ifstream entrada(nome);

    while (entrada >> num)
    {
        if (num < menor)
        {
            if (num < menor2){

                menor2 = num;
            } 

            menor = num;
        }
        
        cout << menor << " " << menor2;
    }
    

    }