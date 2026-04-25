#include <iostream>

using namespace std;

int main() {
    int vetor[20];

    for (int i = 0; i < 20; i++) {
        cout << "Digite o número " << i + 1 << ": ";
        cin >> vetor[i];
    }

    cout << "\nNúmeros na ordem inversa:\n";
    for (int i = 19; i >= 0; i--)
    {
        cout << vetor[i] << " ";
    }
    cout << "\n";

    return 0;
}