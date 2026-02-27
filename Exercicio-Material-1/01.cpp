#include <iostream>
#include <string>

using namespace std;

#define TAM 10

int main() {
    string nomes[TAM];
    string busca;
    bool achei = false;

    for (int i = 0; i < TAM; i++) {
        cout << "Digite o nome " << i + 1 << ": ";
        cin >> nomes[i];
    }

    cout << "\nDigite um nome para buscar: ";
    cin >> busca;

    for (int i = 0; i < TAM; i++) {
        if (nomes[i] == busca) {
            achei = true;
            break;
        }
    }

    if (achei) {
        cout << "ACHEI" << endl;
    } else {
        cout << "NAO ACHEI";
    }

    return 0;
}