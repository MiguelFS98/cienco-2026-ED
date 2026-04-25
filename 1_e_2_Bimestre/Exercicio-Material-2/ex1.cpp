#include <iostream>
using namespace std;

int main() {
    int vetor[10];

    // Entrada de dados
    for(int i = 0; i < 10; i++) {
        cout << "Digite o valor " << i+1 << ": ";
        cin >> vetor[i];
    }

    int *p = vetor; // ponteiro para o vetor

    cout << "\nOrdem normal:\n";
    for(int i = 0; i < 10; i++) {
        cout << *(p + i) << " ";
    }

    cout << "\nOrdem inversa:\n";
    for(int i = 9; i >= 0; i--) {
        cout << *(p + i) << " ";
    }

    return 0;
}