#include <iostream>
#include <stdlib.h>
#include <tchar.h>

void printBinary(char c);

using namespace std;

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese")); //fazer com que a acentua��o dos caracteres seja reconhecida pelo prompt

    int n1, n2;
    float resultado = 0.02f;

    n1 = 20;
    n2 = 10;

    resultado = (float) n1 / n2; // divis�o
    resultado = n1 % n2; //m�dulo

    cout << "Resultado: " << resultado << endl;
    cout << "Resto da divis�o: " << resultado << endl;//resto da divis�o

    system("pause");
    return EXIT_SUCCESS;
}
