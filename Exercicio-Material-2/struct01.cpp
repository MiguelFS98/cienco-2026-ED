#include <iostream>
#include <locale>

using namespace std;

struct Paciente
{
    string nome;
    int idade;
    string sintoma;
};


int main()
{
    setlocale(LC_ALL, "Portuguese");

    Paciente paciente;    
    char continuar;
    
    do
    {
    cout << "Digite o Nome do Paciente: ";
    getline(cin, paciente.nome);
    cout << "Digite a Idade do Paciente: ";
    cin >> paciente.idade;
    cout << "Digite um Sintoma Expecífico: ";
    cin >> paciente.sintoma;

    cout << "Paciente: " << paciente.nome << "\nIdade: " << paciente.idade << "\nSintoma: " << paciente.sintoma;

    cout << "\nDeseja Continuar? (S ou N): ";
    cin >> continuar;
      cin.ignore();
    }
    while(continuar == 's' || continuar == 'S');
    
    return 0;
}