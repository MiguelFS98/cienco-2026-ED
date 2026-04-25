#include <iostream>
using namespace std;

struct Funcionario {
    int id;
    string nome;
    float salario;
    int idade;
    int tempoEmpresa;
};

int main() {
    int N;
    cin >> N;

    Funcionario f[50];

    for (int i = 0; i < N; i++) {
        cin >> f[i].id >> f[i].nome >> f[i].salario >> f[i].idade >> f[i].tempoEmpresa;
    }

    float soma = 0, maior, menor;
    maior = menor = f[0].salario;

    for (int i = 0; i < N; i++) {
        soma += f[i].salario;

        if (f[i].salario > maior) maior = f[i].salario;
        if (f[i].salario < menor) menor = f[i].salario;
    }

    float media = soma / N;

    for (int i = 0; i < N; i++) {
        float aumento = 0;

        if (f[i].tempoEmpresa < 3) aumento += 0.05;
        else if (f[i].tempoEmpresa <= 10) aumento += 0.10;
        else aumento += 0.20;

        if (f[i].idade > 50) aumento += 0.05;
        if (f[i].salario < media) aumento += 0.05;

        f[i].salario *= (1 + aumento);
    }

    cout << "Funcionarios atualizados:\n";
    for (int i = 0; i < N; i++) {
        cout << f[i].nome << " - " << f[i].salario << endl;
    }

    return 0;
}