#include <iostream>
using namespace std;

int main() {
    string titulo, autor;
    int ano;

    do {
        cout << "Titulo: ";
        cin >> titulo;

        if(titulo == "fim") break;

        cout << "Autor: ";
        cin >> autor;

        cout << "Ano: ";
        cin >> ano;

        cout << "Livro cadastrado!\n\n";

    } while(true);

    return 0;
}