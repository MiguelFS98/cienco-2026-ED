#include <iostream>
using namespace std;

int main() {
    float enredo, atuacao, efeitos, media;
    char continuar;

    do {
        cout << "Nota enredo: ";
        cin >> enredo;

        cout << "Nota atuacao: ";
        cin >> atuacao;

        cout << "Nota efeitos: ";
        cin >> efeitos;

        media = (enredo + atuacao + efeitos) / 3;

        cout << "Media: " << media << endl;

        cout << "Deseja avaliar outro filme? (s/n): ";
        cin >> continuar;

    } while(continuar == 's' || continuar == 'S');

    return 0;
}
