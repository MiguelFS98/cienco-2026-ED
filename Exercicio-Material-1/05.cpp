#include <iostream>

using namespace std;

int main() {
    int N;

    cout << "Digite o tamanho N dos vetores: ";
    cin >> N;

    int* A = new int[N];
    int* B = new int[N];
    int* Soma = new int[N];

    cout << "\n-- Preenchendo o vetor A --\n";
    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    cout << "\n-- Preenchendo o vetor B --\n";
    for (int i = 0; i < N; i++) {
        cout << "B[" << i << "]: ";
        cin >> B[i];
        
        Soma[i] = A[i] + B[i];
    }

    cout << "\n-- Vetor Soma (A + B) --\n";
    for (int i = 0; i < N; i++) {
        cout << Soma[i] << " ";
    }
    cout << "\n";

    delete[] A;
    delete[] B;
    delete[] Soma;

    return 0;
}