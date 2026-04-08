#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int v[50], novo[50];

    for (int i = 0; i < N; i++)
        cin >> v[i];

    int pares=0, impares=0, pos=0, neg=0, zero=0;
    int m2=0, m3=0, m5=0;
    int maior=v[0], menor=v[0];
    float soma=0;

    for (int i = 0; i < N; i++) {
        soma += v[i];

        if (v[i] % 2 == 0) pares++;
        else impares++;

        if (v[i] > 0) pos++;
        else if (v[i] < 0) neg++;
        else zero++;

        if (v[i] % 2 == 0) m2++;
        if (v[i] % 3 == 0) m3++;
        if (v[i] % 5 == 0) m5++;

        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }

    // Reorganização
    int k = 0;
    for (int i = 0; i < N; i++)
        if (v[i] % 2 == 0)
            novo[k++] = v[i];

    for (int i = N-1; i >= 0; i--)
        if (v[i] % 2 != 0)
            novo[k++] = v[i];

    cout << "Media: " << soma / N << endl;

    cout << "Vetor reorganizado:\n";
    for (int i = 0; i < N; i++)
        cout << novo[i] << " ";

    return 0;
}