#include <iostream>
using namespace std;

int main() {
    float A, B, C;

    cout << "Digite os tres lados: ";
    cin >> A >> B >> C;

    // Verificar se forma triângulo
    if (A < B + C && B < A + C && C < A + B) {
        cout << "Forma um triangulo\n";

        // Classificação pelos lados
        if (A == B && B == C)
            cout << "Equilatero\n";
        else if (A == B || A == C || B == C)
            cout << "Isosceles\n";
        else
            cout << "Escaleno\n";

        // Encontrar maior lado
        float L = A;
        float x = B, y = C;

        if (B > L) { L = B; x = A; y = C; }
        if (C > L) { L = C; x = A; y = B; }

        // Classificação pelos ângulos
        if (L*L == x*x + y*y)
            cout << "Retangulo\n";
        else if (L*L > x*x + y*y)
            cout << "Obtusangulo\n";
        else
            cout << "Acutangulo\n";

    } else {
        cout << "Nao forma um triangulo\n";
    }

    return 0;
}