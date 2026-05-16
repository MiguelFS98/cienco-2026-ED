#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numeros; // Cria uma lista de inteiros

    cout << "Digite 5 numeros inteiros:" << endl;
    for (int i = 0; i < 5; i++) {
        int num;
        cin >> num; // Lê um número inteiro do usuário
        numeros.push_back(num); // Insere o número no final da lista
    }

    cout << "Numeros na ordem de insercao: ";
    for (int num : numeros) {
        cout << num << " "; // Exibe os números na ordem de inserção
    }
    cout << endl;

    cout << "Numeros em ordem inversa: ";
    for (auto it = numeros.rbegin(); it != numeros.rend(); ++it) {
        cout << *it << " "; // Exibe os números em ordem inversa
    }
    cout << endl;

    return 0;
}