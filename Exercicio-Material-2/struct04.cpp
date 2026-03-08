#include <iostream>
#include <locale>

using namespace std;

struct Aluno
{
    string nome;
    float nota;
    string status;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Aluno aluno[1];
    char continuar;

    do
    {
        for (int i = 0; i < 1; i++)
        {
            cout << "Digite o nome do aluno: ";
            getline(cin, aluno[i].nome);
            cout << "Digite a nota do aluno: ";
            cin >> aluno[i].nota;
            cin.ignore();

            if (aluno[i].nota >= 7.0)
            {
                aluno[i].status = "Aprovado";
            }
            else
            {
                aluno[i].status = "Reprovado";
            }
        }

        cout << "\nResultados:\n";
        for (int i = 0; i < 1; i++)
        {
            cout << "Aluno: " << aluno[i].nome << " - Nota: " << aluno[i].nota << " - Status: " << aluno[i].status << endl;
        }

        cout << "\nDeseja continuar? (S/N): ";
        cin >> continuar;
        cin.ignore();
        
        if (continuar == 'N' || continuar == 'n')
        {
            cout << "Encerrando o programa." << endl;
            break;
        }
        else if (continuar != 'S' && continuar != 's' && continuar != 'N' && continuar != 'n')
        {
            cout << "Opção inválida. Por favor, digite S para sim ou N para não." << endl;
        }
    } while (true);
    return 0;
}