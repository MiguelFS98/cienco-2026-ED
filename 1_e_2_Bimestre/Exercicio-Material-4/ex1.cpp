#include <iostream>

using namespace std;

int main()
{
    int numeros[10];
    int menor, maior;
    int contMenor = 0, contMaior = 0;

    // Cadastro dos números
    cout << "Digite 10 números:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }

    // Ordenação dos números (Bubble Sort)
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                swap(numeros[j], numeros[j + 1]);
            }
        }
    }

    // Encontrar o menor e o maior número
    menor = numeros[0];
    maior = numeros[9];

    // Contar quantas vezes o menor e o maior número aparecem
    for (int i = 0; i < 10; i++) {
        if (numeros[i] == menor) {
            contMenor++;
        }
        if (numeros[i] == maior) {
            contMaior++;
        }
    }

    // Mostrar os resultados
    cout << "O menor número é: " << menor << " e aparece " << contMenor << " vezes." << endl;
    cout << "O maior número é: " << maior << " e aparece " << contMaior << " vezes." << endl;

    return 0;
}