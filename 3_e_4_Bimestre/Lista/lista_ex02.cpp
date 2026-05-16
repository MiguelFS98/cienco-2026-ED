#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void imprimiLista(list<string> lista)
{

    list<string>::const_iterator valores; // [classe]::[metodo]

    if (lista.empty())
    {
        cout << "IMPOSSIVEL IMPRESSAO - LISTA VAZIA";
    }
    else {
        valores = lista.begin(); //aponta para o 1º elemento da lista
        do{
            cout << *valores << " ";
            valores++;
        }
        while (valores != lista.end());
    }
}

int main()
{
    list<string> lista;

    int n;
    cout << "Quantos funcionarios serao cadastrados? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string nome;
        cout << "Digite o nome do funcionario: ";
        cin >> nome;
        lista.push_back(nome); // Insere o nome no final da lista
    }

    cout << "Funcionarios na ordem de cadastro: ";
    imprimiLista(lista);
    cout << endl;

    cout << "Funcionarios em ordem alfabetica: ";
    lista.sort(); // Ordena a lista
    imprimiLista(lista);
    cout << endl;

    cout << "Funcionarios em ordem reversa: ";
    lista.reverse(); // Inverte a ordem da lista
    imprimiLista(lista);
    cout << endl;

    cout << "Total de funcionarios cadastrados: " << lista.size() << endl;

    return 0;
}