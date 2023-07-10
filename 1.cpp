#include <iostream>
#include <fstream>

using namespace std;

int main() {

    string nome;
    float n1, n2, n, media = 0.0;

        // pegando as informações necessárias 

        ifstream dados("entrada.txt");

        dados >> n;        

      for (int i = 0; i < n; i++)
      {
            // passar os dados que estão em "dados" para as variáveis que vou usar
             dados >> nome;
             dados >> n1;
             dados >> n2; 

            media = (n1 + n2) / 2.0; // calcular média

            if (media < 7.0)
            {
                ofstream saida("saida.txt");

                saida << nome;
            }

            cout << nome << endl << n1 << endl << n2 << endl;
            
        
      }

    return 0;
}