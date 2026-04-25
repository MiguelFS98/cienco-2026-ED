#include <iostream>

using namespace std;

int main() {
    const int DIAS = 365;
    float temperaturas[DIAS];
    float menorTemp, maiorTemp, somaTemp = 0, mediaAnual;
    int diasAbaixoMedia = 0;

    for (int i = 0; i < DIAS; i++) {
        cout << "Digite a temperatura do dia " << i + 1 << ": ";
        cin >> temperaturas[i];
        
        somaTemp += temperaturas[i];

        if (i == 0) {
            menorTemp = temperaturas[i];
            maiorTemp = temperaturas[i];
        } else {

            if (temperaturas[i] < menorTemp) {
                menorTemp = temperaturas[i];
            }
            if (temperaturas[i] > maiorTemp) {
                maiorTemp = temperaturas[i];
            }
        }
    }

    mediaAnual = somaTemp / DIAS;

    for (int i = 0; i < DIAS; i++) {
        if (temperaturas[i] < mediaAnual) {
            diasAbaixoMedia++;
        }
    }

    cout << "\n--- Resultados Anuais ---\n";
    cout << "a) Menor temperatura do ano: " << menorTemp << "\n";
    cout << "b) Maior temperatura do ano: " << maiorTemp << "\n";
    cout << "c) Temperatura média anual: " << mediaAnual << "\n";
    cout << "d) Número de dias com temperatura inferior à média: " << diasAbaixoMedia << "\n";

    return 0;
}