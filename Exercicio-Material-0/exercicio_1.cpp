#include <iostream>

using namespace std;

int main()
{
    float peso, altura, imc;

    cout << "Digite o seu Peso(kg): ";
    cin >> peso;

    cout << "Digite a sua Altura(m): ";
    cin >> altura;

    imc = peso / (altura * altura);

    if(imc < 20)
    {
        cout << "Abaixo do Peso!";
    }
    else if(imc >=20 && imc < 25)
    {
        cout << "Peso Ideal!";
    }
    else
    {
        cout << "Acima do Peso!";
    }
    return 0;
}

