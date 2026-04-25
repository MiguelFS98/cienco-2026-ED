#include <iostream>
#include <locale>

using namespace std;

struct Livro
{
    string titulo;
    int ano;
    string autor;
};


int main()
{
    setlocale(LC_ALL, "Portuguese");

    Livro livro;
    
    cout << "Digite 'FIM' como título caso deseje encerrar o programa.\n" << endl;
    
    do
    {
    cout << "Digite o Título do Livro: ";
    getline(cin, livro.titulo);
    
    if(livro.titulo == "FIM" || livro.titulo == "fim" || livro.titulo == "Fim")
        break;
    
    cout << "Digite o Ano do Livro: ";
    cin >> livro.ano;
    cin.ignore();
    cout << "Digite o Autor do Livro: ";
    getline(cin, livro.autor);
    cin.ignore();

    cout << "\nTítulo: " << livro.titulo << "\nAno: " << livro.ano << "\nAutor: " << livro.autor;
    cout << endl << endl;
    }
    while(true);
    
    cout << "\nPrograma encerrado!" << endl;
    return 0;
}