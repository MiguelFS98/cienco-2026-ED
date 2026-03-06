#include <iostream>
#include <locale>

using namespace std;

#define MAX_LIVROS 2

struct Livro {
    string titulo;
    string autor;
    int anoPublicacao;
    string disponivel;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    Livro livros[MAX_LIVROS];
    int totalLivros = 0;
    char continua = 'S';

    while (continua == 'S' || continua == 's') {

        cout << "Digite o título do livro: ";
        getline(cin, livros[totalLivros].titulo);

        cout << "Digite o autor do livro: ";
        getline(cin, livros[totalLivros].autor);

        cout << "Digite o ano de publicação: ";
        cin >> livros[totalLivros].anoPublicacao;

        char resposta;
        cout << "O livro está disponível? (s/n): ";
        cin >> resposta;

        if (resposta == 's' || resposta == 'S') {
            livros[totalLivros].disponivel = "Sim";
        } else {
            livros[totalLivros].disponivel = "Não";
        }

        totalLivros++;

        cout << "Deseja continuar? (S-Sim | N-Não): ";
        cin >> continua;

        cin.ignore();//limpa buffer
    }

    cout << "\n--- Lista de Livros Cadastrados ---" << endl;
    for (int i = 0; i < MAX_LIVROS; i++) {
        cout << "Livro " << i + 1 << ":" << endl;
        cout << "Título: " << livros[i].titulo << endl;
        cout << "Autor: " << livros[i].autor << endl;
        cout << "Ano de Publicação: " << livros[i].anoPublicacao << endl;
        cout << "Disponibilidade: " << livros[i].disponivel << endl;
        cout << "----------------------------------" << endl;
    }

    return 0;
}
