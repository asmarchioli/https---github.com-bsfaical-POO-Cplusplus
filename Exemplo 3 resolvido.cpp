#include <iostream>
#include <string>
#include <cctype> //Biblioteca para testes extras de string
using namespace std;

void exibe_destaque(string frase);

int main() {
    string frase = "Orientação a Objeto";
    exibe_destaque(frase);
}

void exibe_destaque(string frase) {
    char c;
    int tamanho = 0;
    int x = 0;
    while (frase[x] != '\0') {
        c = frase[x];
        if (!isalnum(c) && !isspace(c)) {
            x += 2;
        } else {
            x += 1;
        }
        tamanho += 1;
    }

    for (int i = 0; i < tamanho + 4; i++) {
        cout << "*";
    }
    cout << endl;
    cout << "* " << frase << " *" << endl;
    for (int i = 0; i < tamanho + 4; i++) {
        cout << "*";
    }
    cout << endl;

    return;
}

/*
Segue possível resolução do problema.

Aqui, ao invés de usar a função "length", o programa conta um a um
dos caracteres da frase, e verifica as funções de condição "isalnum" (é alfanumérico)
e "isspace" (é um espaço/caracter vazio).

Se nenhuma dessas condições são aceitas, o programa não conta mais um no tamanho
e pula dois caracteres, pois os caracteres especiais contam como dois.

Assim, no final, o código imprimirá corretamente a frase e os asteriscos.

PS: Não consegui de jeito nenhum fazer o terminal do meu VS Code pegar no UTF-8,
então fiz todo o código em um compilador UTF-8 online.

~ Alexandre Marchioli
*/


