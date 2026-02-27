#include <iostream>

using namespace std;

int main() {
    float notas[20];
    float soma = 0, media;
    int acimaDaMedia = 0;

    for (int i = 0; i < 20; i++) {
        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        soma += notas[i];
    }

    media = soma / 20.0;

    for (int i = 0; i < 20; i++) {
        if (notas[i] > media) {
            acimaDaMedia++;
        }
    }

    cout << "\nMédia da turma: " << media << "\n";
    cout << "Número de alunos com nota acima da média: " << acimaDaMedia << "\n";

    return 0;
}