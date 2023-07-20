#include <iostream>

using namespace std;

extern "C" int soma(int a, int b, int c);

int main(int argc, char const *argv[])
{
    int num1, num2, opc;
    cout << "Insira a Operação desejada:\n[ 1 ]Soma\n[ 2 ]Subtração\n" << endl;
    cin >> opc;

    cout << "Insira o Número primário:" << endl;
    cin >> num1;
    cout << "Insira o Número secundário:" << endl;
    cin >> num2;

    if (opc == 1)
    {
        cout << "A soma de " << num1 << " e " << num2 << " é igual a:" << soma(num1, num2, 1) << endl;
    }else
    {
        cout << "A diferença de " << num1 << " e " << num2 << " é igual a: " << soma(num1, num2, 2) << endl;
    }
    return 0;
}
