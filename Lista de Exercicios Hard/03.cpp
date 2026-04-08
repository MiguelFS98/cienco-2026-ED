#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Quantidade (>=10): ";
    cin >> N;

    int num;
    int pares=0, impares=0;
    int positivos=0, negativos=0, zeros=0;
    int mult3=0, mult5=0, multAmbos=0;
    int maior, menor;
    float somaPares=0, somaImpares=0;

    for (int i = 0; i < N; i++) {
        cin >> num;

        if (i == 0) {
            maior = menor = num;
        } else {
            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }

        // Par ou ímpar
        if (num % 2 == 0) {
            pares++;
            somaPares += num;
        } else {
            impares++;
            somaImpares += num;
        }

        // Positivo, negativo, zero
        if (num > 0) positivos++;
        else if (num < 0) negativos++;
        else zeros++;

        // Múltiplos
        if (num % 3 == 0) mult3++;
        if (num % 5 == 0) mult5++;
        if (num % 3 == 0 && num % 5 == 0) multAmbos++;
    }

    cout << "Pares: " << pares << " Impares: " << impares << endl;
    cout << "Positivos: " << positivos << " Negativos: " << negativos << " Zeros: " << zeros << endl;
    cout << "Multiplos de 3: " << mult3 << endl;
    cout << "Multiplos de 5: " << mult5 << endl;
    cout << "Multiplos de ambos: " << multAmbos << endl;
    cout << "Maior: " << maior << " Menor: " << menor << endl;

    if (pares > 0)
        cout << "Media pares: " << somaPares / pares << endl;
    if (impares > 0)
        cout << "Media impares: " << somaImpares / impares << endl;

    return 0;
}