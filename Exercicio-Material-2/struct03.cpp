#include <iostream>

using namespace std;

struct Filme
{
    float enredo;
    float atuacao;
    float efeitos;
};

int main()
{
     Filme filme;
    char continuar;
    do
    {
        cout << "Deseja avaliar um filme? (S/N): ";
        cin >> continuar;
        cin.ignore();

        if (continuar == 'S' || continuar == 's')
        {
            cout << "Digite a nota do Enredo: ";
            cin >> filme.enredo;
            cout << "Digite a nota da Atuação: ";
            cin >> filme.atuacao;
            cout << "Digite a nota dos Efeitos Especiais: ";
            cin >> filme.efeitos;

            float media = (filme.enredo + filme.atuacao + filme.efeitos) / 3;

            cout << "\nA média do filme é: " << media << endl;
        }
        else if (continuar == 'N' || continuar == 'n')
        {
            cout << "Encerrando o programa." << endl;
            break;
        }
        else
        {
            cout << "Opção inválida. Por favor, digite S para sim ou N para não." << endl;
        }
    } while (true);
    
    return 0;
}