#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main() 
{
    int idade;
    char doenca, fumante;
    double renda, valorBase, valorFinal;

    cout << "Digite a idade do cliente: ";
    cin >> idade;
    cout << "Possui doenças pré-existentes? (S/N): ";
    cin >> doenca;
    cout << "É fumante? (S/N): ";
    cin >> fumante;
    cout << "Digite a renda mensal: ";
    cin >> renda;

    // Calcular o valor base por idade
    if (idade <= 18) {
        valorBase = 100;
    } else if (idade <= 40) {
        valorBase = 180;
    } else if (idade <= 60) {
        valorBase = 300;
    } else {
        valorBase = 500;
    }

    // Calcular acréscimos
    if (doenca == 'S' || doenca == 's') {
        if (idade <= 40) {
            valorBase += valorBase * 0.30; // +30%
        } else {
            valorBase += valorBase * 0.50; // +50%
        }
    }

    if (fumante == 'S' || fumante == 's') {
        if (idade <= 50) {
            valorBase += valorBase * 0.20; // +20%
        } else {
            valorBase += valorBase * 0.40; // +40%
        }
    }

    // Calcular desconto por renda
    if (renda < 2000) {
        valorFinal = valorBase - (valorBase * 0.20); // desconto de 20%
    } else if (renda <= 5000) {
        valorFinal = valorBase - (valorBase * 0.10); // desconto de 10%
    } else {
        valorFinal = valorBase; // sem desconto
    }

    cout << fixed << setprecision(2);
    cout << "O valor final do plano é: R$ " << valorFinal << endl;

    return 0;
}