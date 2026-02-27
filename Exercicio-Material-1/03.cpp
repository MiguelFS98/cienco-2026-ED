#include <iostream>

using namespace std;

int main() {
    float A[10], M[10], X;

    for (int i = 0; i < 10; i++) {
        cout << "Digite o valor " << i + 1 << " do vetor A: ";
        cin >> A[i];
    }

    cout << "\nDigite o valor da variável X: ";
    cin >> X;

    cout << "\nVetor M resultante (A * X):\n";
    for (int i = 0; i < 10; i++) {
        M[i] = A[i] * X;
        cout << M[i] << " ";
    }
    cout << "\n";

    return 0;
}