#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main (){

    float valor, total = 0.0;
    char classe;
    int dia;

    ifstream dados("ingresso.txt");
    dados >> valor;

    while (dados >> dia >> classe)
    {
        if (dia >= 6 and dia <= 13){
            if(classe == 'A'){
                valor = valor * 0.9;
            } else if (classe == 'E')
            {
                valor = valor * 0.85;
            }
            
        } else if (dia >= 14 and dia <= 24)
        {
        if(classe == 'A'){
            valor = valor * 0.95;
        } else if (classe == 'E')
        {
            valor = valor * 0.9;
        }
        }
        

        total = total + valor;
    }
    
    cout << total << fixed << setprecision(2);

    return 0;
}