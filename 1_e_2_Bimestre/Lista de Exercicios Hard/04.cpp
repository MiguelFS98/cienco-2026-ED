#include <iostream>
using namespace std;

int main() {
    int opcao;
    float saldo = 1000, valor;
    float totalDep = 0, totalSaq = 0;
    float maiorDep = 0, maiorSaq = 0;
    int operacoes = 0;

    while (true) {
        cout << "\n1-Deposito 2-Saque 3-Consulta 4-Relatorio 0-Sair\n";
        cin >> opcao;

        if (opcao == 0) break;

        switch (opcao) {
            case 1:
                cin >> valor;
                if (valor > 0) {
                    saldo += valor;
                    totalDep += valor;
                    operacoes++;
                    if (valor > maiorDep) maiorDep = valor;
                }
                break;

            case 2:
                cin >> valor;
                if (valor > saldo) {
                    cout << "Saldo insuficiente\n";
                } else {
                    if (valor > saldo * 0.5)
                        cout << "Saque de alto valor\n";

                    saldo -= valor;
                    totalSaq += valor;
                    operacoes++;
                    if (valor > maiorSaq) maiorSaq = valor;
                }
                break;

            case 3:
                cout << "Saldo: " << saldo << endl;
                break;

            case 4:
                cout << "Total depositado: " << totalDep << endl;
                cout << "Total sacado: " << totalSaq << endl;
                cout << "Operacoes: " << operacoes << endl;
                cout << "Maior deposito: " << maiorDep << endl;
                cout << "Maior saque: " << maiorSaq << endl;
                break;
        }
    }

    return 0;
}